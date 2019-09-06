/*
 ** read/write phy addr in userspace
 ** open /dev/mem
 ** taiqiang.cao@bitmain.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <unistd.h>
#include <errno.h>
#include <termios.h>
#include <signal.h>
#include <fcntl.h>
#include <ctype.h>
#include "devmem.h"

static int devmem_fd;

void *devm_map(unsigned long addr, int len)
{
	off_t offset;
	void *map_base;

	devmem_fd = open("/dev/mem", O_RDWR | O_SYNC);
	if (devmem_fd == -1) {
		printf("cannot open '/dev/mem'\n");
		goto open_err;
	}

	offset = addr & ~(sysconf(_SC_PAGE_SIZE) - 1);

	map_base = mmap(NULL, len + addr - offset, PROT_READ | PROT_WRITE,
					MAP_SHARED, devmem_fd, offset);
	if (map_base == MAP_FAILED) {
		printf("mmap 0x%lx failed\n", addr);
		goto mmap_err;
	}

	return map_base + addr - offset;

mmap_err:
	close(devmem_fd);

open_err:
	return NULL;
}

void devm_unmap(void *virt_addr, int len)
{
	unsigned long addr;

	if (devmem_fd == -1) {
		printf("'/dev/mem' is closed\n");
		return;
	}

	/* page align */
	addr = (((unsigned long) virt_addr) & ~(sysconf(_SC_PAGE_SIZE) - 1));
	munmap((void *) addr, len + (unsigned long) virt_addr - addr);
	close(devmem_fd);
}

/* read/write 32bit data*/
uint32_t devmem_readl(unsigned long addr)
{
	uint32_t val;
	void *virt_addr;

	virt_addr = devm_map(addr, 4);
	if (virt_addr == NULL) {

		printf("readl map addr 0x%lx failed\n", addr);
		return 0;
	}

	val = *(uint32_t *) virt_addr;

	devm_unmap(virt_addr, 4);

	return val;
}

void devmem_writel(unsigned long addr, uint32_t val)
{
	void *virt_addr;

	virt_addr = devm_map(addr, 4);
	if (virt_addr == NULL) {
		printf("writel map addr 0x%lx failed\n", addr);
		return;
	}

	*(uint32_t *) virt_addr = val;

	devm_unmap(virt_addr, 4);
}
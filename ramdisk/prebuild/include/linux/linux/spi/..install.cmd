cmd_usr/include/linux/spi/.install := /bin/bash /home/ethanchen/Workspace_VB/bm1880_test/linux-linaro-stable/scripts/headers_install.sh ./usr/include/linux/spi /home/ethanchen/Workspace_VB/bm1880_test/linux-linaro-stable/include/uapi/linux/spi spidev.h; /bin/bash /home/ethanchen/Workspace_VB/bm1880_test/linux-linaro-stable/scripts/headers_install.sh ./usr/include/linux/spi /home/ethanchen/Workspace_VB/bm1880_test/linux-linaro-stable/include/linux/spi ; /bin/bash /home/ethanchen/Workspace_VB/bm1880_test/linux-linaro-stable/scripts/headers_install.sh ./usr/include/linux/spi ./include/generated/uapi/linux/spi ; for F in ; do echo "\#include <asm-generic/$$F>" > ./usr/include/linux/spi/$$F; done; touch usr/include/linux/spi/.install
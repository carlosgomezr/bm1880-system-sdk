cmd_usr/include/linux/isdn/.install := /bin/bash /home/ethanchen/Workspace_VB/bm1880_uptodate/linux-linaro-stable/scripts/headers_install.sh ./usr/include/linux/isdn /home/ethanchen/Workspace_VB/bm1880_uptodate/linux-linaro-stable/include/uapi/linux/isdn capicmd.h; /bin/bash /home/ethanchen/Workspace_VB/bm1880_uptodate/linux-linaro-stable/scripts/headers_install.sh ./usr/include/linux/isdn /home/ethanchen/Workspace_VB/bm1880_uptodate/linux-linaro-stable/include/linux/isdn ; /bin/bash /home/ethanchen/Workspace_VB/bm1880_uptodate/linux-linaro-stable/scripts/headers_install.sh ./usr/include/linux/isdn ./include/generated/uapi/linux/isdn ; for F in ; do echo "\#include <asm-generic/$$F>" > ./usr/include/linux/isdn/$$F; done; touch usr/include/linux/isdn/.install
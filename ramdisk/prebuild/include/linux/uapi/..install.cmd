cmd_usr/include/uapi/.install := /bin/bash /home/ethanchen/Workspace_VB/bm1880_test/linux-linaro-stable/scripts/headers_install.sh ./usr/include/uapi /home/ethanchen/Workspace_VB/bm1880_test/linux-linaro-stable/include/uapi ; /bin/bash /home/ethanchen/Workspace_VB/bm1880_test/linux-linaro-stable/scripts/headers_install.sh ./usr/include/uapi /home/ethanchen/Workspace_VB/bm1880_test/linux-linaro-stable/include ; /bin/bash /home/ethanchen/Workspace_VB/bm1880_test/linux-linaro-stable/scripts/headers_install.sh ./usr/include/uapi ./include/generated/uapi ; for F in ; do echo "\#include <asm-generic/$$F>" > ./usr/include/uapi/$$F; done; touch usr/include/uapi/.install
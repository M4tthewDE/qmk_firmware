# HOW TO FLASH

make dztech/dz60rgb/v2:m4tthewde && sudo mount /dev/sdd /mnt/rand && dd if=dztech_dz60rgb_v2_m4tthewde.bin of=/mnt/rand/FLASH.BIN bs=512 conv=notrunc oflag=direct,sync && sudo umount /dev/sdd


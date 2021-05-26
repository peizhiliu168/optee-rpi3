#!bin/bash

sfdisk --delete /dev/${1}
sfdisk /dev/${1} << EOF 
,+64M,e,*
;
EOF

mkfs.vfat -F16 -n BOOT /dev/${1}1
mkdir -p /media/boot
mount /dev/${1}1 /media/boot
cd /media
gunzip -cd ${2} | sudo cpio -idmv "boot/*"
umount boot

mkfs.ext4 -L rootfs /dev/${1}2
mkdir -p /media/rootfs
mount /dev/${1}2 /media/rootfs
cd rootfs
gunzip -cd ${2} | sudo cpio -idmv
rm -rf /media/rootfs/boot/*
cd .. && umount rootfs

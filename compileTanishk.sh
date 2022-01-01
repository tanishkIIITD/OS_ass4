#!/bin/bash

make -j4 CC="ccache gcc"
sudo make modules_install 
sudo cp  arch/x86_64/boot/bzImage /boot/vmlinuz-linux-5.14.4
sudo cp System.map System.map-5.14.4
sudo mkinitcpio -k 5.14.4 -g /boot/initramfs-linux-5.14.4.img
sudo grub-mkconfig -o /boot/grub/grub.cfg

#!/bin/bash
sudo rm /boot/vmlinuz-5.8.12-kAFL+.*
sudo rm /boot/initrd.img-5.8.12-kAFL+.*
sudo rm /boot/System.map-5.8.12-kAFL+.*
sudo rm /boot/config-5.8.12-kAFL+.*

sudo update-grub2

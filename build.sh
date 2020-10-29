#!/bin/bash
yes ""|make oldconfig
#make localmodconfig
./scripts/config --set-str CONFIG_LOCALVERSION "-kAFL_ip0" --set-val CONFIG_KVM_VMX_PT y
./scripts/config --set-str CONFIG_SYSTEM_TRUSTED_KEYS ""
make -j4 $jobs

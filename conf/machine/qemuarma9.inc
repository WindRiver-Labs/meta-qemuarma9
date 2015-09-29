#
# Copyright (C) 2013 Wind River Systems, Inc.
#
TARGET_QEMU_BIN="qemu-system-arm"
TARGET_QEMU_OPTS="-M vexpress-a9"
TARGET_QEMU_MEM="128"
TARGET_QEMU_KERNEL="zImage"
TARGET_QEMU_DTB="vexpress-v2p-ca9.dtb"
TARGET_QEMU_BOOT_CONSOLE="ttyAMA0,115200"
TARGET_QEMU_KERNEL_OPTS=" oprofile.timer=1"
TARGET_QEMU_DISK_ARGS="-sd"
TARGET_VIRT_DISK_DEV="mmcblk0"

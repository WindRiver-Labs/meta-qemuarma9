FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}"

include linux-windriver-qemu.inc

KBRANCH_qemuarma9 = "standard/arm-versatile-926ejs"
KMACHINE = "qemuarma9"
COMPATIBLE_MACHINE_qemuarm9 = "qemuarma9"

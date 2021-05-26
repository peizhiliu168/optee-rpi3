#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1c4c887c, "usb_stor_post_reset" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0x62da0efe, "usb_stor_disconnect" },
	{ 0xd4063c0c, "scsi_eh_restore_cmnd" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc79c8bc2, "usb_stor_probe2" },
	{ 0xcd807b3e, "usb_stor_transparent_scsi_command" },
	{ 0x61d7ecfd, "usb_stor_host_template_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbbe75690, "usb_stor_pre_reset" },
	{ 0x7f789d8b, "usb_stor_reset_resume" },
	{ 0xfef1c845, "usb_stor_suspend" },
	{ 0x43da32f5, "usb_stor_probe1" },
	{ 0xb7f0bbf, "scsi_eh_prep_cmnd" },
	{ 0x95e2e8db, "usb_stor_resume" },
	{ 0x65853570, "usb_register_driver" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "90EF7C6C3F24254FF4072EF");

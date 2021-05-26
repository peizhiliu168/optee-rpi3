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
	{ 0x8f0a99c1, "gspca_suspend" },
	{ 0x6c7df072, "gspca_dev_probe" },
	{ 0x92fa1643, "gspca_resume" },
	{ 0x40a31346, "gspca_disconnect" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x43f50c75, "gspca_frame_add" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v04A5p3035d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "81E46F87230CDB273CB07A1");

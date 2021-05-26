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
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x71022091, "usbatm_usb_disconnect" },
	{ 0x669fe96d, "param_ops_ushort" },
	{ 0x69de0ba8, "param_ops_byte" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xb3622408, "usb_altnum_to_altsetting" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xdd9970ad, "usb_driver_claim_interface" },
	{ 0xc567ea26, "usb_driver_release_interface" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb38e97c7, "usbatm_usb_probe" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usbatm");


MODULE_INFO(srcversion, "8874015DD65844BE4130A67");

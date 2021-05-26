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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x477cd986, "dvb_usbv2_resume" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe4a4a8a3, "param_ops_short" },
	{ 0xeece2503, "dvb_usbv2_generic_rw_locked" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x58eab074, "dvb_usbv2_probe" },
	{ 0x38eeb66b, "rc_keydown" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fa3fa0d, "dvb_ca_en50221_release" },
	{ 0xea2d52de, "i2c_unregister_device" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x71a19a5c, "dvb_usbv2_disconnect" },
	{ 0x5bee7acd, "module_put" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x4e8c50b8, "dvb_usbv2_suspend" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xe50816f3, "dvb_ca_en50221_init" },
	{ 0x5e72d88, "i2c_new_device" },
	{ 0x6dfb375e, "dvb_usbv2_reset_resume" },
	{ 0xd2dd944b, "try_module_get" },
};

MODULE_INFO(depends, "dvb_usb_v2,dvb-core");

MODULE_ALIAS("usb:v04B4p861Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C73p861Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7F17613E55462B657B60CA3");

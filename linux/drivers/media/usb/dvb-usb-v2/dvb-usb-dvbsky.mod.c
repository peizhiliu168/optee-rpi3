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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x3ecc078b, "dvb_module_probe" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x477cd986, "dvb_usbv2_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe4a4a8a3, "param_ops_short" },
	{ 0xeece2503, "dvb_usbv2_generic_rw_locked" },
	{ 0xcf7db17c, "dvb_usbv2_generic_write_locked" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x58eab074, "dvb_usbv2_probe" },
	{ 0x38eeb66b, "rc_keydown" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x71a19a5c, "dvb_usbv2_disconnect" },
	{ 0x1e4ef55c, "dvb_module_release" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e8c50b8, "dvb_usbv2_suspend" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x6dfb375e, "dvb_usbv2_reset_resume" },
	{ 0xb8c65570, "m88ds3103_get_agc_pwm" },
};

MODULE_INFO(depends, "dvb-core,dvb_usb_v2,m88ds3103");

MODULE_ALIAS("usb:v0572p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p960Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p680Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC689d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC699d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572pC68Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "090131AF5CBF94E6541D135");

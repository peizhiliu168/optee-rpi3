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
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x34890429, "pwm_apply_state" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf87c0110, "devm_rc_register_device" },
	{ 0x32d2539e, "devm_rc_allocate_device" },
	{ 0xf270b8cb, "devm_pwm_get" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-ir-tx");
MODULE_ALIAS("of:N*T*Cpwm-ir-txC*");

MODULE_INFO(srcversion, "81B9266AA28E6C39477D926");

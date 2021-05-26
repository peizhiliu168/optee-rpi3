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
	{ 0x4a741a83, "_dev_err" },
	{ 0xf87c0110, "devm_rc_register_device" },
	{ 0xe4bcc913, "devm_gpiod_get" },
	{ 0x32d2539e, "devm_rc_allocate_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-ir-tx");
MODULE_ALIAS("of:N*T*Cgpio-ir-txC*");

MODULE_INFO(srcversion, "2FB7B874A63064982CD8590");

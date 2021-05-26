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
	{ 0x63a22796, "param_ops_string" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9e5cec27, "platform_get_irq_optional" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf26b3dd, "devm_kstrdup" },
	{ 0x7cd0b63, "__uio_register_device" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0x4626fae5, "devm_kasprintf" },
	{ 0x5bc5eb45, "of_property_read_string" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0x6b96c9dc, "uio_unregister_device" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "uio");

MODULE_ALIAS("of:N*T*");
MODULE_ALIAS("of:N*T*C*");

MODULE_INFO(srcversion, "CA8D2E057FC05515033201C");

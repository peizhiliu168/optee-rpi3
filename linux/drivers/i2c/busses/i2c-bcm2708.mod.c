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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x29361773, "complete" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x203c5431, "i2c_add_numbered_adapter" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x23cd83af, "clk_get" },
	{ 0xe58cb6ec, "platform_get_irq" },
	{ 0x5e95a8ad, "platform_get_resource" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0xcb835e6e, "of_alias_get_id" },
	{ 0x37a0cba, "kfree" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2708-i2c");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2708-i2cC*");

MODULE_INFO(srcversion, "0C1F4F8690E98B7CEAABAE5");

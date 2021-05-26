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
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x801fbd02, "devm_free_irq" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x6028496a, "rtc_nvmem_register" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x6b04cb90, "__rtc_register_device" },
	{ 0x8fef04c9, "devm_rtc_allocate_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x22b7c101, "spi_sync" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeba9e7a2, "spi_write_then_read" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "81D384CB2FB10C13D3FADEF");

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
	{ 0x6b04cb90, "__rtc_register_device" },
	{ 0x8fef04c9, "devm_rtc_allocate_device" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xeba9e7a2, "spi_write_then_read" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AB5EFDE94CBB07BA034BB68");

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
	{ 0x65c15b52, "w1_unregister_family" },
	{ 0x9fcfbb52, "w1_register_family" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe1bb6be9, "w1_reset_bus" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa3439dc3, "w1_write_8" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9839611c, "w1_reset_select_slave" },
	{ 0x259bdf4f, "w1_read_block" },
	{ 0x509bda77, "w1_write_block" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "A2D8A6D60BBA4FFF14E7E2F");

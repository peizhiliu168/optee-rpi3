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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x268ff222, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:helene");

MODULE_INFO(srcversion, "78914CECC6EF4A4319507D7");

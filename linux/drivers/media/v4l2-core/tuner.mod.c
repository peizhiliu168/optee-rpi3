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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x63a22796, "param_ops_string" },
	{ 0xc5850110, "printk" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x66d87d38, "symbol_put_addr" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "mc,videodev");

MODULE_ALIAS("i2c:tuner");

MODULE_INFO(srcversion, "6BC473D9B27A9E6FDF2279E");

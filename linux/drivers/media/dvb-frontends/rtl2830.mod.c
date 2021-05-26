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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xd8f567cf, "__i2c_transfer" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x8733236, "intlog10" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5bc4f4c3, "i2c_mux_add_adapter" },
	{ 0x96cb70f6, "i2c_mux_alloc" },
	{ 0x1b08bada, "__regmap_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc84a29ca, "regmap_bulk_write" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xcfdef728, "regmap_exit" },
	{ 0x60376207, "i2c_mux_del_adapters" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "dvb-core,i2c-mux");

MODULE_ALIAS("i2c:rtl2830");

MODULE_INFO(srcversion, "E72AB134DE0133A0F2A4A01");

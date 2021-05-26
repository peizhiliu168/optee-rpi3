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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x65c15b52, "w1_unregister_family" },
	{ 0x9fcfbb52, "w1_register_family" },
	{ 0x85df9b6c, "strsep" },
	{ 0xe914e41e, "strcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x63757e92, "w1_calc_crc8" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x40b09e15, "w1_touch_bit" },
	{ 0x60d5c4a8, "w1_next_pullup" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x5a921311, "strncmp" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x259bdf4f, "w1_read_block" },
	{ 0xe98cfa64, "w1_read_8" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa3439dc3, "w1_write_8" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x509bda77, "w1_write_block" },
	{ 0xe1bb6be9, "w1_reset_bus" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "A1F3ACA3353A0AF94899A5C");

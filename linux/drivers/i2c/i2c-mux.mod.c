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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x143a521b, "rt_mutex_lock" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0x7ef55cd6, "__i2c_smbus_xfer" },
	{ 0xe0b66044, "rt_mutex_trylock" },
	{ 0xeacc4aca, "rt_mutex_unlock" },
	{ 0x54d65f25, "sysfs_remove_link" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb9c09ddc, "of_get_child_by_name" },
	{ 0xd2a52c39, "i2c_adapter_type" },
	{ 0x4f2903c8, "sysfs_create_link" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x96b6ea44, "i2c_smbus_xfer" },
	{ 0x203c5431, "i2c_add_numbered_adapter" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb9a21ca3, "of_get_next_child" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xa15a3662, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8f567cf, "__i2c_transfer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0xded99c04, "of_node_put" },
	{ 0x268ff222, "devm_kmalloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7BED06BCD5A3F14A81CCD58");

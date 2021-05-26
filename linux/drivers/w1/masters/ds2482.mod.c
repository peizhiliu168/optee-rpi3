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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x9ab16bb6, "w1_add_master_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcd9a0191, "i2c_smbus_write_byte" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x3488e9bd, "i2c_smbus_read_byte" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f6d5174, "w1_remove_master_device" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "wire");

MODULE_ALIAS("i2c:ds2482");

MODULE_INFO(srcversion, "1C173C7E9AA7A1128CB4188");

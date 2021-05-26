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
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0x8f68bcf, "dvb_frontend_detach" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x11547ca1, "dibx000_exit_i2c_master" },
	{ 0x3f4b9f5c, "dibx000_reset_i2c_master" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0x3bd42ea9, "dibx000_get_i2c_adapter" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0x447fed14, "dibx000_init_i2c_master" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "dvb-core,dibx000_common");


MODULE_INFO(srcversion, "EE419FCAC6ECE23A9CF43ED");

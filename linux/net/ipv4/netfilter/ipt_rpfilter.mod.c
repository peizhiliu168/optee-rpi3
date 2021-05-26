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
	{ 0x1c6c31e8, "xt_unregister_match" },
	{ 0xb6afe7ec, "xt_register_match" },
	{ 0x60c81ee3, "l3mdev_master_ifindex_rcu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x65da995c, "__fib_lookup" },
	{ 0x251b91a8, "fib_info_nh_uses_dev" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5aae2aa, "fib_table_lookup" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "E3ABDF1D19739FADB5195EA");

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
	{ 0x2c3c71fc, "tcf_em_unregister" },
	{ 0xe7168eac, "tcf_em_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x21fab3ca, "dev_get_by_index_rcu" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xe0a55136, "ip_set_test" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x71a28e4d, "ip_set_nfnl_get_byindex" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea14bc6, "ip_set_nfnl_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2FFEEF47248D946AED3F588");

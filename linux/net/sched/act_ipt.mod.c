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
	{ 0x26b1316e, "tcf_unregister_action" },
	{ 0x608e052f, "tcf_register_action" },
	{ 0xc5850110, "printk" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0x25087745, "skb_trim" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xe914e41e, "strcpy" },
	{ 0x45e23ce7, "tcf_idr_cleanup" },
	{ 0x5bad2c54, "__tcf_idr_release" },
	{ 0xba768c12, "tcf_idr_create" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xdad53046, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x35c6831f, "tcf_idr_search" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5bee7acd, "module_put" },
	{ 0x8a53eb99, "xt_check_target" },
	{ 0xe2b327a6, "xt_request_find_target" },
	{ 0xba5b5246, "tcf_generic_walker" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf87bd81a, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "88900668366D1EB298C3494");

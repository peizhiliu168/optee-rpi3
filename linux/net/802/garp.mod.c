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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x7718e6f8, "stp_proto_unregister" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdefea55e, "dev_mc_add" },
	{ 0xece784c2, "rb_first" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbc78d028, "stp_proto_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xbf98bc12, "llc_mac_hdr_init" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xbf2bd1d6, "dev_mc_del" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xca9360b5, "rb_next" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0xa96f1213, "param_ops_uint" },
};

MODULE_INFO(depends, "stp,llc");


MODULE_INFO(srcversion, "285E0E33DBCC51625AFEEA2");

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
	{ 0x75d7727d, "unregister_qdisc" },
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x9cf0f9a8, "register_qdisc" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x2fa0f339, "qdisc_watchdog_init_clockid" },
	{ 0xc5850110, "printk" },
	{ 0x3ab6d8b, "qdisc_tree_reduce_backlog" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x56470118, "__warn_printk" },
	{ 0x83a237bc, "gnet_stats_copy_app" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x4861bc7a, "qdisc_watchdog_schedule_ns" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x33473f66, "qdisc_watchdog_cancel" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0xdc9ec6e3, "__skb_get_hash" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xfc3131b, "rtnl_kfree_skbs" },
	{ 0xca9360b5, "rb_next" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xece784c2, "rb_first" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED6ADC696180845D6B40682");

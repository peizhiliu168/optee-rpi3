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
	{ 0x2d3385d3, "system_wq" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x7ae03454, "napi_schedule_prep" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0xab423eb0, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xb3d5245f, "netif_napi_del" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x9553ca85, "netif_rx" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0xd5c090de, "sock_efree" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xb0028e46, "netif_receive_skb" },
	{ 0xd26a07c4, "netif_napi_add" },
	{ 0x7cefcb6f, "rtnl_link_unregister" },
	{ 0xb9c09ddc, "of_get_child_by_name" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xc27bd86c, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x868cbcba, "alloc_netdev_mqs" },
	{ 0x1d2ee0f4, "napi_complete_done" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x126033ef, "netdev_err" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0xbf3ef42c, "rtnl_link_register" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x99cfb896, "skb_put" },
	{ 0xded99c04, "of_node_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0BE284F2DD4BBA5F15D86F7");

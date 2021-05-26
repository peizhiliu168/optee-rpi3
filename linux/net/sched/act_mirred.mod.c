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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x608e052f, "tcf_register_action" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x349cba85, "strchr" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x29223775, "dev_queue_xmit" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xb0028e46, "netif_receive_skb" },
	{ 0x4ad9695e, "skb_pull_rcsum" },
	{ 0xab423eb0, "skb_clone" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x45e23ce7, "tcf_idr_cleanup" },
	{ 0x5bad2c54, "__tcf_idr_release" },
	{ 0x23244a94, "tcf_chain_put_by_act" },
	{ 0xfc9803aa, "tcf_action_set_ctrlact" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x279fd21d, "dev_get_by_index" },
	{ 0xa29819f9, "tcf_action_check_ctrlact" },
	{ 0xba768c12, "tcf_idr_create" },
	{ 0xdad53046, "tcf_idr_check_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25087745, "skb_trim" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0x7d0db45c, "jiffies_to_clock_t" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x35c6831f, "tcf_idr_search" },
	{ 0xba5b5246, "tcf_generic_walker" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf87bd81a, "tcf_idrinfo_destroy" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DB7624579FCB18B5AEB8D4F");

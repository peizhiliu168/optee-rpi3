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
	{ 0x590eba0f, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3dd2a711, "ip_set_type_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5792f848, "strlcpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6768a05b, "ip_set_match_extensions" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xed766ef6, "ip_set_elem_len" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xeef9338c, "ip_set_put_extensions" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x25087745, "skb_trim" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x7924b6de, "ip_set_hostmask_map" },
	{ 0x22d966c6, "ip_set_range_to_cidr" },
	{ 0xa293f8a6, "ip_set_get_ipaddr4" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x397f6231, "ip_set_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcb764ad, "memset" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xa09b56e9, "ip_set_extensions" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xcdfac6e4, "ip_set_get_ip4_port" },
	{ 0xcfe27fcc, "ip_set_get_ip6_port" },
	{ 0x81fff2d1, "ip_set_netmask_map" },
	{ 0x4f9a1598, "ip_set_get_extensions" },
	{ 0x9e98722b, "ip_set_get_ipaddr6" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2D1B8ADB094A147DD5E11DC");

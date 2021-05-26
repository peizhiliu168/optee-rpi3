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
	{ 0x204ac018, "class_find_device" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x5297d6c5, "get_net_ns_by_fd" },
	{ 0x1433139c, "register_pernet_device" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xeca1aa47, "genl_register_family" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x98cf60b3, "strlen" },
	{ 0x909aa57c, "genl_unregister_family" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x2873a4df, "dev_change_net_namespace" },
	{ 0x29a09ee6, "dev_get_by_name" },
	{ 0x258daa6c, "device_match_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x56e11754, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6e598467, "get_net_ns_by_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x50160a69, "__put_net" },
	{ 0x2a85771a, "bpf_trace_run3" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x25087745, "skb_trim" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x5918ecaa, "trace_define_field" },
	{ 0x4a73db4b, "dev_set_mac_address" },
	{ 0x4830eca5, "device_del" },
	{ 0xf9909686, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7e5d9ad, "unregister_pernet_device" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xb6c97aea, "class_unregister" },
	{ 0xce5e7bf1, "trace_event_reg" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x279fd21d, "dev_get_by_index" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x31faa7fb, "device_add" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc815530c, "init_net" },
	{ 0x7247df5a, "__class_register" },
	{ 0xa5b306eb, "perf_trace_run_bpf_submit" },
	{ 0x82d149cb, "__dev_get_by_index" },
	{ 0xc4eae733, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2fa5f4e3, "class_for_each_device" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x311b5e8d, "netlink_broadcast" },
	{ 0xcf760899, "trace_event_ignore_this_pid" },
	{ 0xdded6c02, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x5d209757, "genl_family_attrbuf" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x4b549c8d, "trace_event_buffer_commit" },
	{ 0x56a9a5e4, "device_rename" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x87549229, "event_triggers_call" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x53f0aa5d, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6c7c4090, "trace_event_raw_init" },
	{ 0xeb629393, "genlmsg_put" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x9f696742, "device_initialize" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0x82961bd3, "trace_raw_output_prep" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x46d2f31b, "trace_output_call" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xddab9ab2, "bpf_trace_run4" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "10F8468F340C701824AF3A3");

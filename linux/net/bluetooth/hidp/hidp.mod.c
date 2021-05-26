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
	{ 0x93007c53, "skb_queue_head" },
	{ 0x8932da54, "hid_add_device" },
	{ 0xac5fcf2f, "sock_init_data" },
	{ 0x7f39e332, "hid_ignore" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x53b954a2, "up_read" },
	{ 0x93b5383a, "kernel_sendmsg" },
	{ 0x5b9c946a, "sockfd_lookup" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x212daac9, "sock_no_setsockopt" },
	{ 0xb99f246, "hid_parse_report" },
	{ 0x286208d4, "sock_no_getsockopt" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeea11058, "sock_no_getname" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd3fb3074, "bt_sock_register" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b4d7b61, "hid_input_report" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xf51135cb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0xa742422e, "sock_no_recvmsg" },
	{ 0x7f78019d, "bt_sock_unlink" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x55980a08, "l2cap_conn_put" },
	{ 0x63b9347c, "sk_alloc" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5c1e6bd1, "l2cap_is_socket" },
	{ 0x7c94bf92, "sock_no_bind" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x427e4478, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0xc815530c, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4260eb07, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0xa2bec685, "bt_sock_link" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0x24ecd3ba, "l2cap_register_user" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x92d007d0, "__module_put_and_exit" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x7da99514, "hid_destroy_device" },
	{ 0xb3eaea63, "hid_allocate_device" },
	{ 0x20607167, "l2cap_conn_get" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x85ccf583, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4d353002, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x8187bcc3, "sock_no_sendmsg" },
	{ 0x87a39647, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe6aab47e, "bt_procfs_init" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1d8a364d, "bt_procfs_cleanup" },
	{ 0xf812cff6, "memscan" },
	{ 0xc64cf639, "l2cap_unregister_user" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "9EB8F1FB5E365A14B3F24A4");

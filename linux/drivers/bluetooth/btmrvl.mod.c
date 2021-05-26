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
	{ 0x93007c53, "skb_queue_head" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x5189409c, "debugfs_create_u8" },
	{ 0x68dab081, "__hci_cmd_sync" },
	{ 0xdda74f7c, "hci_register_dev" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x76a226fa, "hci_unregister_dev" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xb0825e43, "debugfs_create_x16" },
	{ 0xd6d8eed4, "of_property_read_variable_u8_array" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2505bf18, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x3b52e4ee, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0xca96e9cd, "hci_alloc_dev" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x1dd80e82, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xe5ab638a, "of_property_read_variable_u16_array" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf10a24bc, "hci_free_dev" },
	{ 0x99cfb896, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "26430B0CBEB3559E1E3F861");

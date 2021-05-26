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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xaea92c90, "__tracepoint_iscsi_dbg_eh" },
	{ 0x5cef41fb, "scsi_host_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x519bbea6, "scsi_add_host_with_dma" },
	{ 0x6770c188, "iscsi_block_session" },
	{ 0xe64f444f, "dev_printk" },
	{ 0x3e46ea3d, "iscsi_remove_session" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x368efa96, "iscsi_unblock_session" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x69e17734, "iscsi_add_session" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x4ea91cb2, "iscsi_recv_pdu" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x70c4b51, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd3a2c838, "iscsi_create_conn" },
	{ 0xf843c5d1, "flush_signals" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3133dc5c, "__tracepoint_iscsi_dbg_session" },
	{ 0x5bee7acd, "module_put" },
	{ 0x7c99c2d9, "iscsi_destroy_conn" },
	{ 0x228dde98, "scsi_host_get" },
	{ 0xdded6c02, "put_device" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf3b6b1c, "iscsi_conn_error_event" },
	{ 0x1000e51, "schedule" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15af7f4, "system_state" },
	{ 0xfd2b9967, "iscsi_free_session" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xbcc7bd3e, "iscsi_dbg_trace" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x3880da16, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xaac3519d, "__tracepoint_iscsi_dbg_conn" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x963ac582, "iscsi_host_for_each_session" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x6bb6de07, "iscsi_session_chkready" },
	{ 0x6c807266, "iscsi_alloc_session" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5D2EDD25140EC95EB36EA5E");

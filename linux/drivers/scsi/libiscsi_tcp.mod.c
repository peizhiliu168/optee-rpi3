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
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb939175f, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xe64f444f, "dev_printk" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4511dd21, "iscsi_requeue_task" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9972468d, "crypto_ahash_final" },
	{ 0xaf3b4c59, "iscsi_itt_to_ctask" },
	{ 0xe16d80df, "crypto_ahash_digest" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xed922393, "skb_abort_seq_read" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3eace354, "skb_prepare_seq_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xf4985824, "iscsi_conn_teardown" },
	{ 0x2ff018, "iscsi_put_task" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11223ac, "iscsi_prep_data_out_pdu" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xea347882, "iscsi_complete_pdu" },
	{ 0xf12675f5, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x4829a47e, "memcpy" },
	{ 0xbcc7bd3e, "iscsi_dbg_trace" },
	{ 0xc9311a40, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x47867762, "__tracepoint_iscsi_dbg_tcp" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0xda5f487f, "iscsi_verify_itt" },
	{ 0xe8c9ffa8, "iscsi_conn_setup" },
	{ 0x9b4f0848, "iscsi_update_cmdsn" },
};

MODULE_INFO(depends, "libiscsi");


MODULE_INFO(srcversion, "0C30DB850B236759F2A0AB3");

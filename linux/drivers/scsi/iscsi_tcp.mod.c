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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x253e6690, "iscsi_session_recovery_timedout" },
	{ 0x3ba5de03, "iscsi_tcp_cleanup_task" },
	{ 0xf000e1e5, "iscsi_tcp_task_xmit" },
	{ 0xc4fa90eb, "iscsi_tcp_task_init" },
	{ 0xefded578, "iscsi_conn_send_pdu" },
	{ 0xae0f473, "iscsi_host_set_param" },
	{ 0x9479dfb8, "iscsi_session_get_param" },
	{ 0x581f5edf, "iscsi_conn_start" },
	{ 0xb1e0bbc6, "iscsi_eh_cmd_timed_out" },
	{ 0x6d040bb5, "scsi_change_queue_depth" },
	{ 0x106d1988, "iscsi_target_alloc" },
	{ 0xc3eef29a, "iscsi_eh_recover_target" },
	{ 0x36757d5f, "iscsi_eh_device_reset" },
	{ 0x9ee1877, "iscsi_eh_abort" },
	{ 0xdd7fb5aa, "iscsi_queuecommand" },
	{ 0x28e1be31, "iscsi_unregister_transport" },
	{ 0x4bab56b0, "iscsi_register_transport" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x66a6de53, "crypto_alloc_ahash" },
	{ 0x15363a40, "iscsi_tcp_conn_setup" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xd4697d5b, "__tracepoint_iscsi_dbg_sw_tcp" },
	{ 0x7e2292ec, "iscsi_conn_stop" },
	{ 0x93e65b8, "iscsi_suspend_tx" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6d09386a, "iscsi_tcp_conn_teardown" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x7a4497db, "kzfree" },
	{ 0x427e4478, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x989d4cfb, "blk_queue_dma_alignment" },
	{ 0xc5850110, "printk" },
	{ 0x627d58fb, "iscsi_tcp_r2tpool_alloc" },
	{ 0x32c5bcd6, "iscsi_session_setup" },
	{ 0x26a070b7, "iscsi_host_add" },
	{ 0x2f2b3798, "iscsi_host_alloc" },
	{ 0xd4dab80f, "iscsi_host_free" },
	{ 0x7151bd43, "iscsi_host_remove" },
	{ 0x23cd6ee9, "iscsi_session_teardown" },
	{ 0x301feb7, "iscsi_tcp_r2tpool_free" },
	{ 0xbd5caa83, "scsi_is_host_device" },
	{ 0x7e77a0f6, "iscsi_tcp_recv_skb" },
	{ 0x5278cbb1, "tcp_read_sock" },
	{ 0x75c90cd0, "iscsi_conn_queue_work" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x4260eb07, "fput" },
	{ 0x7458e102, "iscsi_tcp_hdr_recv_prep" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xac9c931c, "sk_set_memalloc" },
	{ 0x36b8593b, "iscsi_conn_bind" },
	{ 0x5b9c946a, "sockfd_lookup" },
	{ 0x84bf560a, "iscsi_tcp_set_max_r2t" },
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0x23c034e, "iscsi_set_param" },
	{ 0x64bd8ac3, "kernel_getpeername" },
	{ 0x7c17282, "iscsi_conn_get_param" },
	{ 0xef71638f, "iscsi_host_get_param" },
	{ 0xeab9cbd5, "iscsi_conn_get_addr_param" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x19927377, "kernel_getsockname" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xeecf17dd, "iscsi_tcp_conn_get_stats" },
	{ 0xf12675f5, "iscsi_conn_failure" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xffcf8979, "iscsi_tcp_segment_unmap" },
	{ 0x93b5383a, "kernel_sendmsg" },
	{ 0x75922445, "iscsi_tcp_segment_done" },
	{ 0x51fef986, "iscsi_tcp_dgst_header" },
	{ 0xa42f80d5, "iscsi_segment_seek_sg" },
	{ 0xdd1a96a6, "iscsi_segment_init_linear" },
	{ 0xe64f444f, "dev_printk" },
	{ 0xbcc7bd3e, "iscsi_dbg_trace" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "libiscsi,libiscsi_tcp");


MODULE_INFO(srcversion, "DFE21E5C399272844F7907E");

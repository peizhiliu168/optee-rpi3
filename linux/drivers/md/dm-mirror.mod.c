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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa83588eb, "dm_rh_recovery_end" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xf92b8a3d, "dm_rh_get_region_size" },
	{ 0x57e16c3e, "dm_rh_get_state" },
	{ 0x6b84e4b9, "dm_get_device" },
	{ 0x8ea94f74, "dm_io" },
	{ 0x94874ea4, "dm_rh_inc_pending" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x7d5e1815, "dm_rh_get_region_key" },
	{ 0x154c6338, "dm_kcopyd_client_destroy" },
	{ 0x3f9001ac, "dm_region_hash_create" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xae6e97a0, "dm_register_target" },
	{ 0x4e453f8, "dm_kcopyd_copy" },
	{ 0xd8aa4284, "dm_rh_region_context" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa53387c7, "dm_rh_flush" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9e4faeef, "dm_io_client_destroy" },
	{ 0x1d2f9ac, "dm_rh_recovery_start" },
	{ 0xbe38a431, "dm_rh_recovery_prepare" },
	{ 0x51130541, "dm_rh_bio_to_region" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0x86f10755, "dm_set_target_max_io_len" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3faf14ed, "dm_unregister_target" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x24d273d1, "add_timer" },
	{ 0x809fca8e, "generic_make_request" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7774620f, "dm_rh_stop_recovery" },
	{ 0x171e1d31, "bio_endio" },
	{ 0x3e5a499a, "dm_rh_dirty_log" },
	{ 0x38972f23, "dm_rh_region_to_sector" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd688716b, "dm_kcopyd_client_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x38efaf5a, "dm_region_hash_destroy" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x601f665f, "dm_io_client_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x274fce10, "dm_rh_mark_nosync" },
	{ 0x19c0e46, "dm_dirty_log_destroy" },
	{ 0x96848186, "scnprintf" },
	{ 0x7d053fc5, "dm_rh_start_recovery" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3a18389a, "dm_rh_update_states" },
	{ 0x59a3a71e, "dm_put_device" },
	{ 0x81b6edbb, "dm_per_bio_data" },
	{ 0xda2cc564, "dm_noflush_suspending" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xfd93482e, "dm_rh_recovery_in_flight" },
	{ 0x67b7c9d3, "dm_rh_delay" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x488fcf12, "dm_dirty_log_create" },
	{ 0x1033a7a0, "bio_associate_blkg" },
	{ 0x5f4a6e61, "dm_rh_dec" },
};

MODULE_INFO(depends, "dm-region-hash,dm-mod,dm-log");


MODULE_INFO(srcversion, "AB65AA5B59C7E19F248F490");

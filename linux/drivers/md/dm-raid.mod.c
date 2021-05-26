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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x3faf14ed, "dm_unregister_target" },
	{ 0xae6e97a0, "dm_register_target" },
	{ 0x6440928a, "raid5_set_cache_size" },
	{ 0xe3fd268f, "r5c_journal_mode_set" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0x777fa35e, "md_start" },
	{ 0x882e81fb, "md_run" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xb578a4eb, "mddev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x86f10755, "dm_set_target_max_io_len" },
	{ 0x6059f684, "md_rdev_init" },
	{ 0x6b84e4b9, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x96848186, "scnprintf" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb76fd0b, "md_wakeup_thread" },
	{ 0x513badca, "md_reap_sync_thread" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc8c9d0c, "md_update_sb" },
	{ 0xd1102963, "md_bitmap_load" },
	{ 0xbd29e7f9, "md_bitmap_resize" },
	{ 0x56c46312, "mddev_resume" },
	{ 0xdcb764ad, "memset" },
	{ 0xe0fa9d50, "md_stop_writes" },
	{ 0x53c8cf1, "mddev_unlock" },
	{ 0x45d167e3, "mddev_suspend" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f7a454b, "md_error" },
	{ 0x9f91c2f0, "sync_page_io" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x20ece86b, "revalidate_disk" },
	{ 0x38736e79, "dm_disk" },
	{ 0xc420f57c, "dm_table_get_md" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xca6610be, "mddev_congested" },
	{ 0x62592588, "md_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x59a3a71e, "dm_put_device" },
	{ 0x6e2a07c2, "md_rdev_clear" },
	{ 0x90c87aec, "md_handle_request" },
	{ 0xc5850110, "printk" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x73552eb3, "blk_limits_io_opt" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "dm-mod,raid456,md-mod");


MODULE_INFO(srcversion, "70C481B4A9EEB9CABDA2D43");

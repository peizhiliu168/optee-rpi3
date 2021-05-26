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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x95d6ad69, "unregister_md_personality" },
	{ 0x6e1620d6, "register_md_personality" },
	{ 0x8fec2bd3, "bio_clone_blkg_association" },
	{ 0xa982020a, "__blkdev_issue_discard" },
	{ 0xa67fe70b, "md_flush_request" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x171e1d31, "bio_endio" },
	{ 0x509b7757, "bio_chain" },
	{ 0x66857cc1, "bio_split" },
	{ 0x809fca8e, "generic_make_request" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0x1033a7a0, "bio_associate_blkg" },
	{ 0x71f95eeb, "blk_queue_flag_clear" },
	{ 0x557fd1f5, "md_integrity_register" },
	{ 0xc69bc993, "md_set_array_sectors" },
	{ 0x78d55f48, "blk_queue_flag_set" },
	{ 0xc6b2a144, "disk_stack_limits" },
	{ 0x572284dd, "blk_queue_io_opt" },
	{ 0x11eef4a3, "blk_queue_io_min" },
	{ 0x23f9ab1f, "blk_queue_max_discard_sectors" },
	{ 0xcc3fed33, "blk_queue_max_write_zeroes_sectors" },
	{ 0x59eb267e, "blk_queue_max_write_same_sectors" },
	{ 0x39f12b4d, "blk_queue_max_hw_sectors" },
	{ 0x759027bf, "md_check_no_bitmap" },
	{ 0xc5850110, "printk" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf53f95a3, "bdevname" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "D52A565BA1DEA4AF6144392");

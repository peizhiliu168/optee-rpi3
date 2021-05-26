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
	{ 0x66857cc1, "bio_split" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x45d167e3, "mddev_suspend" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x95d6ad69, "unregister_md_personality" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x20ece86b, "revalidate_disk" },
	{ 0xa67fe70b, "md_flush_request" },
	{ 0xc5850110, "printk" },
	{ 0x921b07b1, "__cpu_online_mask" },
	{ 0xc6b2a144, "disk_stack_limits" },
	{ 0x509b7757, "bio_chain" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x809fca8e, "generic_make_request" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x171e1d31, "bio_endio" },
	{ 0x71f95eeb, "blk_queue_flag_clear" },
	{ 0x78d55f48, "blk_queue_flag_set" },
	{ 0xf53f95a3, "bdevname" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xc69bc993, "md_set_array_sectors" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x37a0cba, "kfree" },
	{ 0x56c46312, "mddev_resume" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x759027bf, "md_check_no_bitmap" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x557fd1f5, "md_integrity_register" },
	{ 0x6e1620d6, "register_md_personality" },
	{ 0x1033a7a0, "bio_associate_blkg" },
};

MODULE_INFO(depends, "md-mod");


MODULE_INFO(srcversion, "D5D73E7CB11DF4C476ECE5C");

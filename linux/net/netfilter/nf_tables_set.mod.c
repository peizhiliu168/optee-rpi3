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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x4fc02643, "rhashtable_walk_exit" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb3351c6c, "rhashtable_walk_next" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7c83bea5, "nft_register_set" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xece784c2, "rb_first" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x5674b3cb, "rhashtable_free_and_destroy" },
	{ 0xb96982c, "nft_set_gc_batch_alloc" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0xe21e70bc, "rhashtable_walk_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf08050c4, "rhashtable_walk_start_check" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x11f33c89, "nft_set_elem_destroy" },
	{ 0xbf63bb61, "nft_set_gc_batch_release" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x555f9eca, "rhashtable_walk_enter" },
	{ 0xb373f3d8, "nft_unregister_set" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "9ADE075AF18EC1AB2E7C0FC");

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
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xabb134f6, "nf_ct_netns_put" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xece784c2, "rb_first" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa5819fc3, "nf_ct_netns_get" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd9c09bcd, "nf_conntrack_find_get" },
	{ 0x4198ca95, "__do_once_done" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "DD36360A09D7B7EE4E5B979");

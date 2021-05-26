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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x50a850a2, "dlmunlock" },
	{ 0x7a1211f8, "dlm_setup_eviction_cb" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0xff925b71, "dlm_register_eviction_cb" },
	{ 0x50956e59, "dlm_register_domain" },
	{ 0xae59fafa, "dlm_unregister_domain" },
	{ 0xc5850110, "printk" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd8fa57a6, "dlm_unregister_eviction_cb" },
	{ 0x15adb75f, "ocfs2_stack_glue_unregister" },
	{ 0xd859ac8c, "o2net_fill_node_map" },
	{ 0x9f996098, "ocfs2_stack_glue_register" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4726f634, "dlmlock" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0xc24d8254, "dlm_print_one_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "ocfs2_dlm,ocfs2_nodemanager,ocfs2_stackglue");


MODULE_INFO(srcversion, "54D6EF1D13BD7F89FB54DDF");

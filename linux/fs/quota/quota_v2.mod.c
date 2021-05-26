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
	{ 0x2c0d12f8, "unregister_quota_format" },
	{ 0xd7b039b9, "register_quota_format" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0x8d55bb8a, "qid_eq" },
	{ 0x7f95481b, "make_kprojid" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1e8aaaf6, "qtree_entry_unused" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5ce5d70b, "__quota_error" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x1f378478, "qtree_read_dquot" },
	{ 0xff59804, "qtree_write_dquot" },
	{ 0xce807a25, "up_write" },
	{ 0x8f8e94dd, "qtree_release_dquot" },
	{ 0x57bc19d2, "down_write" },
	{ 0x53b954a2, "up_read" },
	{ 0x9bc870cc, "qtree_get_next_id" },
	{ 0x668b19a1, "down_read" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "quota_tree");


MODULE_INFO(srcversion, "1011D4700458B02F4A0527E");

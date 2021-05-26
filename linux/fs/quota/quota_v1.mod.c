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
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc5850110, "printk" },
	{ 0x53b954a2, "up_read" },
	{ 0x668b19a1, "down_read" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2bb6099e, "dq_data_lock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5ce5d70b, "__quota_error" },
	{ 0x5da12a18, "percpu_counter_add_batch" },
	{ 0x9f31d3a7, "dqstats" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5E1C0636CA475A8EBFFC8BD");

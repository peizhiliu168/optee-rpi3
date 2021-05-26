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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0x5da12a18, "percpu_counter_add_batch" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0x5ce5d70b, "__quota_error" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x5240ee7, "percpu_counter_batch" },
	{ 0x9f31d3a7, "dqstats" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f95481b, "make_kprojid" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa4a0fc5, "mark_info_dirty" },
	{ 0x7ce18c9f, "from_kqid" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A768E9352AEC6D8D697FCC0");

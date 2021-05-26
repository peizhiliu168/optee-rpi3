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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xee4c3510, "inet_del_protocol" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0xc5850110, "printk" },
	{ 0xc7f22fa0, "inet_add_protocol" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x699620c3, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A862986F698A06BC8F54BE1");

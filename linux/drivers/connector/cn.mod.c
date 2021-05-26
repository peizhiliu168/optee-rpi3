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
	{ 0xa733650f, "netlink_has_listeners" },
	{ 0xac05d0bf, "proc_create_single_data" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0xc5850110, "printk" },
	{ 0x6e622ebb, "netlink_kernel_release" },
	{ 0x61422ad7, "netlink_unicast" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xc815530c, "init_net" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x311b5e8d, "netlink_broadcast" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x19315baa, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xb01d38ca, "__nlmsg_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2ECC6930AB12A2AB5D86F00");

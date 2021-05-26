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
	{ 0xc8c36840, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xa4ce4244, "__pskb_pull_tail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xeb85ed3e, "pskb_expand_head" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x4b0c95cd, "unregister_netdevice_queue" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xcb5dd6c, "addrconf_prefix_rcv_add_addr" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x4829a47e, "memcpy" },
	{ 0x515cdb2e, "addrconf_add_linklocal" },
	{ 0x8b852cfd, "__ndisc_fill_addr_option" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

MODULE_INFO(depends, "ipv6");


MODULE_INFO(srcversion, "DA9FF2AE9A5FCA56519128A");

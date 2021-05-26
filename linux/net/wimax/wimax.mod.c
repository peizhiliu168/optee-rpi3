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
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xeca1aa47, "genl_register_family" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x5189409c, "debugfs_create_u8" },
	{ 0x98cf60b3, "strlen" },
	{ 0x909aa57c, "genl_unregister_family" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xff282521, "rfkill_register" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x63a22796, "param_ops_string" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x48daa338, "rfkill_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0xcd279169, "nla_find" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xc815530c, "init_net" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x311b5e8d, "netlink_broadcast" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xbe44924c, "dev_driver_string" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xeb629393, "genlmsg_put" },
	{ 0x96848186, "scnprintf" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "rfkill");


MODULE_INFO(srcversion, "CC8910C8C84C2729C56C9A4");

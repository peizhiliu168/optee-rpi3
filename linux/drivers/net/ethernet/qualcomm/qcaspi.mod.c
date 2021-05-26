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
	{ 0x2136e7ce, "netdev_info" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xa4c47b95, "single_open" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8b1f9945, "single_release" },
	{ 0xc3e88c04, "seq_puts" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0xc4eeba42, "spi_setup" },
	{ 0x2b6ddf3f, "qcafrm_fsm_decode" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x457a3d90, "seq_read" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xb1e91d54, "netif_schedule_queue" },
	{ 0xdcb764ad, "memset" },
	{ 0xb28a9ad, "qcafrm_create_footer" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x7a77f45a, "ethtool_op_get_link" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x3011f33c, "of_find_property" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x22b7c101, "spi_sync" },
	{ 0x41da0375, "qcafrm_create_header" },
	{ 0xfbf0277f, "skb_copy_expand" },
	{ 0xf9eaf0d, "of_get_mac_address" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x126033ef, "netdev_err" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x781f1afb, "dev_trans_start" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x99cfb896, "skb_put" },
	{ 0x109d264a, "eth_mac_addr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "qca_7k_common");

MODULE_ALIAS("spi:qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000");
MODULE_ALIAS("of:N*T*Cqca,qca7000C*");

MODULE_INFO(srcversion, "BBC84F612A6E9FBE92AB855");

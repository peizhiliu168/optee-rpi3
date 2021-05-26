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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x55347883, "dev_close" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x33227ed7, "device_get_mac_address" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe89fcc0f, "netdev_printk" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeba9e7a2, "spi_write_then_read" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc5850110, "printk" },
	{ 0xe64f444f, "dev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4829a47e, "memcpy" },
	{ 0x22b7c101, "spi_sync" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0x126033ef, "netdev_err" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x7cc39f39, "netdev_warn" },
	{ 0xef6a4539, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60");
MODULE_ALIAS("of:N*T*Cmicrochip,enc28j60C*");

MODULE_INFO(srcversion, "AA36A830038CB4188292244");

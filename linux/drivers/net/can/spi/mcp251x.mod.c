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
	{ 0x4a3e1b37, "can_change_mtu" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x528600aa, "can_get_echo_skb" },
	{ 0x4a6983bb, "can_bus_off" },
	{ 0x1c33a1c9, "can_put_echo_skb" },
	{ 0x111c3b1e, "netif_device_attach" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x156d3265, "dev_fwnode" },
	{ 0xdf111fa5, "open_candev" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0x6b6c5618, "spi_get_device_id" },
	{ 0x7aba61ed, "register_candev" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc4eeba42, "spi_setup" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb779b7f3, "alloc_candev_mqs" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x51963c4e, "devm_clk_get_optional" },
	{ 0x4a226164, "device_get_match_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa72b12c3, "alloc_can_skb" },
	{ 0x126033ef, "netdev_err" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x1165026a, "alloc_can_err_skb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7aee1d11, "close_candev" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x22b7c101, "spi_sync" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3a592757, "can_free_echo_skb" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x760e8e9e, "free_candev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2760464b, "unregister_candev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("spi:mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp25625C*");

MODULE_INFO(srcversion, "E1984423394CD655CE63C8A");

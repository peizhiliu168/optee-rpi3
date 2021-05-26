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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x4ffc57e5, "__devm_regmap_init" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x7aba61ed, "register_candev" },
	{ 0xfad90ad6, "can_rx_offload_queue_sorted" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2967666f, "__pm_runtime_disable" },
	{ 0x8366596f, "netdev_notice" },
	{ 0x8ca01852, "napi_disable" },
	{ 0xbc02584f, "regmap_raw_write" },
	{ 0x1165026a, "alloc_can_err_skb" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x16081ffb, "can_dlc2len" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8b9f92e3, "regmap_bulk_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0x6a767bee, "regmap_read" },
	{ 0xc4eeba42, "spi_setup" },
	{ 0x2cf226fe, "can_rx_offload_get_echo_skb" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc4e12a19, "can_rx_offload_enable" },
	{ 0x4a6983bb, "can_bus_off" },
	{ 0x4a226164, "device_get_match_data" },
	{ 0xdcb764ad, "memset" },
	{ 0x7aee1d11, "close_candev" },
	{ 0x87f94988, "spi_async" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0xb779b7f3, "alloc_candev_mqs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x760e8e9e, "free_candev" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x7c5f09f8, "devm_kfree" },
	{ 0x22b7c101, "spi_sync" },
	{ 0xb08cb534, "can_rx_offload_add_manual" },
	{ 0x4a3e1b37, "can_change_mtu" },
	{ 0xcb205b7b, "can_change_state" },
	{ 0x2760464b, "unregister_candev" },
	{ 0xa72b12c3, "alloc_can_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa58d561e, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb8a8f92d, "__pm_runtime_set_status" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x126033ef, "netdev_err" },
	{ 0xc53a9b79, "devm_gpiod_put" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0xdf111fa5, "open_candev" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x37a0cba, "kfree" },
	{ 0xeba9e7a2, "spi_write_then_read" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6b6c5618, "spi_get_device_id" },
	{ 0x10cf5417, "alloc_canfd_skb" },
	{ 0x8762619a, "can_len2dlc" },
	{ 0x1c33a1c9, "can_put_echo_skb" },
	{ 0x15c6e217, "can_rx_offload_del" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x33822237, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x11eda806, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2517fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2518fdC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfd");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp251xfdC*");
MODULE_ALIAS("spi:mcp2517fd");
MODULE_ALIAS("spi:mcp2518fd");
MODULE_ALIAS("spi:mcp251xfd");

MODULE_INFO(srcversion, "E1E59F34E2623EEFADCFA27");

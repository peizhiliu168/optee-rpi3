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
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x2cbfe692, "ieee802154_register_hw" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x90629832, "gpiod_set_raw_value_cansleep" },
	{ 0x52cf94c8, "devm_gpio_request_one" },
	{ 0xd98de7e4, "irq_get_irq_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa5b4fa4c, "__devm_regmap_init_spi" },
	{ 0x640071d0, "ieee802154_alloc_hw" },
	{ 0xd6d8eed4, "of_property_read_variable_u8_array" },
	{ 0x43c0c1ef, "of_get_named_gpio_flags" },
	{ 0x33822237, "regmap_write" },
	{ 0x6a767bee, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd9e1b0db, "ieee802154_free_hw" },
	{ 0xf01bf7c7, "ieee802154_unregister_hw" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x4ea3c593, "gpiod_set_raw_value" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x29361773, "complete" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x336f3da7, "ieee802154_wake_queue" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x203ccb2c, "ieee802154_xmit_complete" },
	{ 0x26f340fc, "ieee802154_rx_irqsafe" },
	{ 0x4829a47e, "memcpy" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x87f94988, "spi_async" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230");
MODULE_ALIAS("of:N*T*Catmel,at86rf230C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231");
MODULE_ALIAS("of:N*T*Catmel,at86rf231C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233");
MODULE_ALIAS("of:N*T*Catmel,at86rf233C*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf212C*");

MODULE_INFO(srcversion, "F7E407A23EA079EB04CB647");

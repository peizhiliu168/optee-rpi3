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
	{ 0x22b7c101, "spi_sync" },
	{ 0x2cbfe692, "ieee802154_register_hw" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd98de7e4, "irq_get_irq_data" },
	{ 0x6b6c5618, "spi_get_device_id" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x4ffc57e5, "__devm_regmap_init" },
	{ 0xa5b4fa4c, "__devm_regmap_init_spi" },
	{ 0x640071d0, "ieee802154_alloc_hw" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x120b191e, "regmap_write_async" },
	{ 0x203ccb2c, "ieee802154_xmit_complete" },
	{ 0x26f340fc, "ieee802154_rx_irqsafe" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x33822237, "regmap_write" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0xeba9e7a2, "spi_write_then_read" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x87f94988, "spi_async" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xd9e1b0db, "ieee802154_free_hw" },
	{ 0xf01bf7c7, "ieee802154_unregister_hw" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "mac802154,regmap-spi");

MODULE_ALIAS("spi:mrf24j40");
MODULE_ALIAS("spi:mrf24j40ma");
MODULE_ALIAS("spi:mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40ma");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40maC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mc");
MODULE_ALIAS("of:N*T*Cmicrochip,mrf24j40mcC*");

MODULE_INFO(srcversion, "DE44C16F09D270DAFE0BB65");

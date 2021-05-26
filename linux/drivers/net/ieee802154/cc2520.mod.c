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
	{ 0x2cbfe692, "ieee802154_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x640071d0, "ieee802154_alloc_hw" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4ea3c593, "gpiod_set_raw_value" },
	{ 0x52cf94c8, "devm_gpio_request_one" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x43c0c1ef, "of_get_named_gpio_flags" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x26f340fc, "ieee802154_rx_irqsafe" },
	{ 0x99cfb896, "skb_put" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x2032c38d, "gpiod_get_raw_value" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x22b7c101, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x29361773, "complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd9e1b0db, "ieee802154_free_hw" },
	{ 0xf01bf7c7, "ieee802154_unregister_hw" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "mac802154,crc-ccitt");

MODULE_ALIAS("of:N*T*Cti,cc2520");
MODULE_ALIAS("of:N*T*Cti,cc2520C*");
MODULE_ALIAS("spi:cc2520");

MODULE_INFO(srcversion, "996D351B72539ABC0ACB024");

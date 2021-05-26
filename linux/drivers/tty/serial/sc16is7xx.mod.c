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
	{ 0x818904c, "uart_unregister_driver" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xbdb11258, "uart_register_driver" },
	{ 0xc4ce64b, "__devm_regmap_init_i2c" },
	{ 0x6b6c5618, "spi_get_device_id" },
	{ 0xa5b4fa4c, "__devm_regmap_init_spi" },
	{ 0x4a226164, "device_get_match_data" },
	{ 0xc4eeba42, "spi_setup" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0xbec09f37, "uart_add_one_port" },
	{ 0xbd8b5277, "gpiochip_add_data_with_key" },
	{ 0x2b9302d0, "sched_setscheduler" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x955b0e2e, "kthread_worker_fn" },
	{ 0xdaef54f8, "__kthread_init_worker" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x69e74789, "gpiochip_remove" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xbab673a3, "uart_remove_one_port" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x73e4483f, "do_SAK" },
	{ 0x8dfa0619, "tty_flip_buffer_push" },
	{ 0x271b5b60, "uart_insert_char" },
	{ 0x8706f6b6, "regmap_raw_read" },
	{ 0xb9cb5f8, "gpiochip_get_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e1ea0cf, "uart_update_timeout" },
	{ 0x13f76a8f, "uart_get_baud_rate" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe31aaf9b, "uart_write_wakeup" },
	{ 0xbc02584f, "regmap_raw_write" },
	{ 0x855e3b84, "regcache_cache_bypass" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a767bee, "regmap_read" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4d515829, "kthread_queue_work" },
	{ 0xe91ac522, "kthread_flush_worker" },
	{ 0x33822237, "regmap_write" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a18e7c7, "regmap_update_bits_base" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "regmap-i2c,regmap-spi");

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("spi:sc16is74x");
MODULE_ALIAS("spi:sc16is740");
MODULE_ALIAS("spi:sc16is741");
MODULE_ALIAS("spi:sc16is750");
MODULE_ALIAS("spi:sc16is752");
MODULE_ALIAS("spi:sc16is760");
MODULE_ALIAS("spi:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760C*");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762C*");

MODULE_INFO(srcversion, "83186E31B0195B6CB991A5B");

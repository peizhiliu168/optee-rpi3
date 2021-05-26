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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x75534cf3, "i2c_smbus_write_i2c_block_data" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x6b04cb90, "__rtc_register_device" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8fef04c9, "devm_rtc_allocate_device" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xd552edcd, "rtc_update_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x83564cbc, "i2c_smbus_read_i2c_block_data" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x801fbd02, "devm_free_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds1374");
MODULE_ALIAS("of:N*T*Cdallas,ds1374C*");
MODULE_ALIAS("i2c:ds1374");

MODULE_INFO(srcversion, "6EE5748130966EFFF0E45E1");

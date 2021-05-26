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
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc7b64673, "i2c_smbus_read_word_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x6497efe5, "devm_hwmon_device_register_with_groups" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:sht21");

MODULE_INFO(srcversion, "F009A011AD53EAA2E0CE339");

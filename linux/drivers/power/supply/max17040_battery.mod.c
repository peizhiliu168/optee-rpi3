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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x9ef124fa, "i2c_smbus_write_word_data" },
	{ 0xbeb065ae, "power_supply_register" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xe6e319b3, "power_supply_get_drvdata" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xc7b64673, "i2c_smbus_read_word_data" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xe455993c, "power_supply_unregister" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max17040");
MODULE_ALIAS("of:N*T*Cmaxim,max17040C*");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-battery");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-batteryC*");
MODULE_ALIAS("i2c:max17040");
MODULE_ALIAS("i2c:max77836-battery");

MODULE_INFO(srcversion, "22C2366316AC1E1696EC2C5");

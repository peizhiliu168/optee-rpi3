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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x903e15de, "__devm_iio_device_register" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4ae48381, "devm_iio_device_alloc" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmcp3422");
MODULE_ALIAS("of:N*T*Cmcp3422C*");
MODULE_ALIAS("i2c:mcp3421");
MODULE_ALIAS("i2c:mcp3422");
MODULE_ALIAS("i2c:mcp3423");
MODULE_ALIAS("i2c:mcp3424");
MODULE_ALIAS("i2c:mcp3425");
MODULE_ALIAS("i2c:mcp3426");
MODULE_ALIAS("i2c:mcp3427");
MODULE_ALIAS("i2c:mcp3428");

MODULE_INFO(srcversion, "CA4D504BE2522A338AC3D4E");

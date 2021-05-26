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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:sony-btf-mpx");

MODULE_INFO(srcversion, "BFDAD6245F6F94A56AE0A2C");

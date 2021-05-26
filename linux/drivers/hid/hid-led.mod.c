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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x333f0012, "devm_led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v00001294p00001320");
MODULE_ALIAS("hid:b0003g*v00001D34p00000004");
MODULE_ALIAS("hid:b0003g*v00001D34p0000000A");
MODULE_ALIAS("hid:b0003g*v000027B8p000001ED");
MODULE_ALIAS("hid:b0003g*v00000FC5p0000B080");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F372");

MODULE_INFO(srcversion, "AD156C6C04E9753309E2B2C");

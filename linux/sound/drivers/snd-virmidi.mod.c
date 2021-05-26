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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x5682f894, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0xfa8cba06, "snd_card_new" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0xfb91ef10, "snd_virmidi_new" },
	{ 0x8a5e4ed5, "snd_card_free" },
	{ 0xedc0f735, "snd_card_register" },
	{ 0x5133306b, "platform_driver_unregister" },
};

MODULE_INFO(depends, "snd,snd-seq-virmidi");


MODULE_INFO(srcversion, "4E96B6DC7109927991C1703");

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
	{ 0x514ad753, "ir_raw_handler_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xd8376427, "ir_raw_handler_register" },
	{ 0x38eeb66b, "rc_keydown" },
	{ 0xba682383, "rc_repeat" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9e12e343, "ir_raw_gen_pd" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F572EF650DBEC6A155106C7");

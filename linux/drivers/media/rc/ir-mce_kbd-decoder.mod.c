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
	{ 0xc38c83b8, "mod_timer" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xae1cac0e, "ir_lirc_scancode_event" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7cf52901, "ir_raw_gen_manchester" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf51135cb, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FCD13DC8D32CC55B983D465");

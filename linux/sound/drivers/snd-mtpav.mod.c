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
	{ 0x85bd1608, "__request_region" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5682f894, "platform_device_register_full" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fbc6d29, "snd_rawmidi_new" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0xfa8cba06, "snd_card_new" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x801bf9ae, "param_ops_long" },
	{ 0x8a5e4ed5, "snd_card_free" },
	{ 0xedc0f735, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x613591f1, "snd_rawmidi_transmit" },
	{ 0x143eb036, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");


MODULE_INFO(srcversion, "6CAAEE025C1F7CF4E2509CB");

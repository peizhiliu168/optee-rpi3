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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xe76ae690, "snd_device_free" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x61e4ac4b, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fbc6d29, "snd_rawmidi_new" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbc6842e, "snd_rawmidi_transmit_peek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0xab41133, "snd_rawmidi_transmit_ack" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x143eb036, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd,snd-rawmidi");


MODULE_INFO(srcversion, "F1A16EEF2678F99A4B3E9E1");

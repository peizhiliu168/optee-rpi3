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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x67fa2d43, "snd_pcm_period_elapsed" },
	{ 0xd041387, "_snd_pcm_stream_lock_irqsave" },
	{ 0xe64f444f, "dev_printk" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x22fea119, "em28xx_register_extension" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0x7e8fece0, "snd_pcm_hw_constraint_integer" },
	{ 0xee3a52f8, "snd_card_disconnect" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x5302f5c7, "em28xx_read_ac97" },
	{ 0xdcb764ad, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x72df7dba, "em28xx_write_ac97" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x684e4dae, "snd_pcm_set_ops" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x99c64a74, "em28xx_unregister_extension" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x30a598e3, "snd_pcm_stream_unlock_irqrestore" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x7a44bc6f, "snd_pcm_lib_ioctl" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x766d3ded, "snd_ctl_boolean_mono_info" },
	{ 0xfa8cba06, "snd_card_new" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdba8bef9, "snd_ctl_new1" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xff48b5b6, "snd_pcm_hw_constraint_minmax" },
	{ 0x8a5e4ed5, "snd_card_free" },
	{ 0xedc0f735, "snd_card_register" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xde3a8302, "snd_pcm_new" },
	{ 0xab75123b, "vmalloc_to_page" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x2d988d54, "snd_ctl_add" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xdbba0ea, "em28xx_audio_analog_set" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "em28xx,snd-pcm,snd");


MODULE_INFO(srcversion, "ABBA7DD885BD710168AE39A");

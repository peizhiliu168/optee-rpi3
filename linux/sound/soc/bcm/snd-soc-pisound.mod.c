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
	{ 0xedc86eeb, "kobject_put" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x3c68711b, "gpiod_direction_output" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4eeba42, "spi_setup" },
	{ 0x61e4ac4b, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fbc6d29, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x556b7f4f, "kobject_create_and_add" },
	{ 0xc9fad71f, "snd_pcm_hw_constraint_mask64" },
	{ 0xdcb764ad, "memset" },
	{ 0xeb35d3a, "snd_pcm_hw_constraint_list" },
	{ 0xc5850110, "printk" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0xbc6842e, "snd_rawmidi_transmit_peek" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2ba32d05, "gpiod_direction_input" },
	{ 0xc80f22d3, "spi_bus_type" },
	{ 0x53ba5c41, "snd_soc_unregister_card" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdee166c3, "bus_find_device" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x22b7c101, "spi_sync" },
	{ 0xf9e0cf41, "snd_soc_dai_set_bclk_ratio" },
	{ 0xab41133, "snd_rawmidi_transmit_ack" },
	{ 0xc7e5b20d, "gpiod_unexport" },
	{ 0xdded6c02, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdba8bef9, "snd_ctl_new1" },
	{ 0xb90110fa, "gpiod_get_value" },
	{ 0x9c16c5aa, "kernel_kobj" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x2b65b17e, "gpiod_export" },
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0xff48b5b6, "snd_pcm_hw_constraint_minmax" },
	{ 0x2518d06b, "gpiod_get_index" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2d988d54, "snd_ctl_add" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0xaf2cff7d, "snd_soc_register_card" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x20fe06e4, "gpiod_put" },
	{ 0x143eb036, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd-pcm,snd-soc-core,snd");

MODULE_ALIAS("of:N*T*Cblokaslabs,pisound");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisoundC*");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spi");
MODULE_ALIAS("of:N*T*Cblokaslabs,pisound-spiC*");

MODULE_INFO(srcversion, "46C425AC35C9F47C71E20AE");

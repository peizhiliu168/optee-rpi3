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
	{ 0xa1e549e1, "bus_register" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe947d7dd, "driver_register" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf46b3315, "snd_device_new" },
	{ 0x4830eca5, "device_del" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x31faa7fb, "device_add" },
	{ 0x66af638d, "bus_unregister" },
	{ 0xd566a98d, "bus_for_each_dev" },
	{ 0xdded6c02, "put_device" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x37a0cba, "kfree" },
	{ 0xa83b436e, "snd_seq_root" },
	{ 0x20e5ae24, "snd_info_free_entry" },
	{ 0x9f696742, "device_initialize" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2aaf9333, "snd_info_create_module_entry" },
	{ 0x593a7c7a, "snd_info_register" },
};

MODULE_INFO(depends, "snd");


MODULE_INFO(srcversion, "5DF8F9C058836CBA2E0F90D");

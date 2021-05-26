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
	{ 0xa1e549e1, "bus_register" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe947d7dd, "driver_register" },
	{ 0x4c5de0fb, "device_release_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xbb889b3b, "device_bind_driver" },
	{ 0x4830eca5, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x93925831, "device_attach" },
	{ 0x31faa7fb, "device_add" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x66af638d, "bus_unregister" },
	{ 0x5bee7acd, "module_put" },
	{ 0xdded6c02, "put_device" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ccf583, "__module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f696742, "device_initialize" },
	{ 0x52088916, "driver_attach" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x16ecf079, "driver_find" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6577D22A4F11336291FD55C");

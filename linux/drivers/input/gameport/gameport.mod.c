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
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4c5de0fb, "device_release_driver" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x131db64a, "system_long_wq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xbb889b3b, "device_bind_driver" },
	{ 0x4830eca5, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x5a921311, "strncmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x93925831, "device_attach" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x31faa7fb, "device_add" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x66af638d, "bus_unregister" },
	{ 0x5bee7acd, "module_put" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdded6c02, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x85ccf583, "__module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f696742, "device_initialize" },
	{ 0x52088916, "driver_attach" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x16ecf079, "driver_find" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xd2dd944b, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "08D3A2D120DA4DB5220C946");

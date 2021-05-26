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
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xb6e542fd, "cn_add_callback" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe947d7dd, "driver_register" },
	{ 0x7d51628b, "of_find_matching_node_and_match" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x3c49e4da, "hwmon_device_unregister" },
	{ 0x94ccdf71, "kobject_uevent" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xff5a8cfe, "cn_del_callback" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xc12ad67f, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x2512d80a, "hwmon_device_register_with_info" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x66af638d, "bus_unregister" },
	{ 0xa6c4041, "cn_netlink_send" },
	{ 0xf843c5d1, "flush_signals" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdded6c02, "put_device" },
	{ 0x4dd9d14d, "cn_netlink_send_mult" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd3243a15, "sysfs_create_groups" },
	{ 0x80d1c79f, "sysfs_remove_groups" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "cn");


MODULE_INFO(srcversion, "843007ADAB610557631C9D4");

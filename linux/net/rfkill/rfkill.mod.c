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
	{ 0x2d3385d3, "system_wq" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb64c2df9, "led_trigger_event" },
	{ 0x118fbaa, "stream_open" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x94ccdf71, "kobject_uevent" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x583d35c0, "input_unregister_handle" },
	{ 0xb0e61c38, "led_trigger_register" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb1f9341e, "input_register_handler" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb25e26d9, "misc_register" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xad63f4f4, "input_unregister_handler" },
	{ 0x4830eca5, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb0f26429, "input_close_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x784eeb6d, "led_trigger_unregister" },
	{ 0xb6c97aea, "class_unregister" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x15f7c775, "input_open_device" },
	{ 0x31faa7fb, "device_add" },
	{ 0x7247df5a, "__class_register" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc0d046be, "input_register_handle" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f696742, "device_initialize" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x25f70e91, "misc_deregister" },
	{ 0xe914e41e, "strcpy" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "202E75AD52C68E0AF3A1AD8");

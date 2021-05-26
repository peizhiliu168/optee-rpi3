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
	{ 0x48ea4ca1, "no_llseek" },
	{ 0xad63f4f4, "input_unregister_handler" },
	{ 0xb1f9341e, "input_register_handler" },
	{ 0x4829a47e, "memcpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x16cb4e4, "input_match_device_id" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xc2231be7, "cdev_device_add" },
	{ 0xe6f4fcc9, "cdev_init" },
	{ 0xc0d046be, "input_register_handle" },
	{ 0x9f696742, "device_initialize" },
	{ 0x86d28a6f, "input_class" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x8c10f4b5, "get_device" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0x15f7c775, "input_open_device" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x118fbaa, "stream_open" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x56470118, "__warn_printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2fbd08, "fasync_helper" },
	{ 0xdded6c02, "put_device" },
	{ 0x583d35c0, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x8c6e704e, "cdev_device_del" },
	{ 0xb0f26429, "input_close_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x20651803, "kill_fasync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "8F2ECAEAD99867414C85442");

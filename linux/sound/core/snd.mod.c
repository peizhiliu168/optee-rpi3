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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xc0c99561, "put_pid" },
	{ 0x53b954a2, "up_read" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xa4c47b95, "single_open" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x4c1bf001, "proc_symlink" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0x2f955d7b, "sound_class" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x626fd7fb, "pid_vnr" },
	{ 0x8b1f9945, "single_release" },
	{ 0x118fbaa, "stream_open" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x7594e9ec, "kobject_set_name" },
	{ 0x7bfc26d5, "__register_chrdev" },
	{ 0x4223f59c, "proc_set_size" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x457a3d90, "seq_read" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xbe112120, "proc_remove" },
	{ 0xf51135cb, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xdf6f93e, "PDE_DATA" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x7e894db6, "proc_mkdir" },
	{ 0x4830eca5, "device_del" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf77555cd, "__memcpy_toio" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xef2993f4, "_raw_read_unlock" },
	{ 0xf1e046cc, "panic" },
	{ 0xd2fbd08, "fasync_helper" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x634e201b, "input_set_capability" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xde0a8051, "noop_llseek" },
	{ 0xfa261e96, "init_uts_ns" },
	{ 0x31faa7fb, "device_add" },
	{ 0xce807a25, "up_write" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x61651be, "strcat" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x5bee7acd, "module_put" },
	{ 0x9d9252bd, "register_sound_special_device" },
	{ 0xa916b694, "strnlen" },
	{ 0xdded6c02, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xbe44924c, "dev_driver_string" },
	{ 0x67a246f3, "single_open_size" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcd6b74d8, "proc_create_data" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x9f696742, "device_initialize" },
	{ 0x27e782f6, "proc_mkdir_mode" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x96848186, "scnprintf" },
	{ 0x99c95fa5, "unregister_sound_special" },
	{ 0x20651803, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xce07cfe2, "__arch_copy_in_user" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C839381834C7DBC5BE5BDE3");

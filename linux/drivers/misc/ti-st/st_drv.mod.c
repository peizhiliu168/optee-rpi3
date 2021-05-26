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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0xa4c47b95, "single_open" },
	{ 0x8b1f9945, "single_release" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x1bf0704f, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0x457a3d90, "seq_read" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfd94814e, "complete_all" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0x21b00716, "tty_ldisc_flush" },
	{ 0x9166fada, "strncpy" },
	{ 0xebbbea1c, "gpiod_direction_output_raw" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x890d97d, "tty_driver_flush_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xbcee111f, "sysfs_notify" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xa61030bb, "stop_tty" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfe990052, "gpio_free" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x90629832, "gpiod_set_raw_value_cansleep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x23159f18, "tty_register_ldisc" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x5d4571b, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AEC16370F398604B404E0D9");

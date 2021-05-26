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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x9004909c, "send_sig" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x40ad664a, "atm_charge" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb195493c, "vcc_release_async" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25087745, "skb_trim" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0x81ade87, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xe6e6549c, "atm_dev_register" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x70165b76, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4df02057, "crc32_be" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x96848186, "scnprintf" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "D8EACBA47E67EFCB360A879");

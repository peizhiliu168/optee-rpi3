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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x23159f18, "tty_register_ldisc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd7eb2b04, "n_tty_ioctl_helper" },
	{ 0x84fe337e, "ppp_channel_index" },
	{ 0xc83612df, "tty_mode_ioctl" },
	{ 0xfcf89115, "ppp_unit_number" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x483ba15b, "ppp_output_wakeup" },
	{ 0x558e4b9f, "ppp_input" },
	{ 0xa808d36d, "ppp_input_error" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x963dcba1, "_raw_spin_trylock_bh" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x4829a47e, "memcpy" },
	{ 0x99cfb896, "skb_put" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x37a68b2a, "tty_unthrottle" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x25087745, "skb_trim" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xef2993f4, "_raw_read_unlock" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x692c810, "ppp_register_channel" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x37a0cba, "kfree" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0xaeaf006b, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x4ccd378a, "_raw_write_unlock_irq" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0x29361773, "complete" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ppp_generic");


MODULE_INFO(srcversion, "A72E539EA0EBC4BD96B74D8");

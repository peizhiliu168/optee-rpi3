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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x7ef9317b, "rt2x00lib_get_bssidx" },
	{ 0x56470118, "__warn_printk" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x7e9c8ea5, "rt2x00mac_conf_tx" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x26a9c835, "rt2x00lib_txdone" },
	{ 0x1d828886, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x884cc7f4, "rt2x00queue_get_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x6297fcd, "rt2x00lib_txdone_nomatch" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x9fed36bb, "ieee80211_restart_hw" },
	{ 0x9fc0ee0d, "rt2x00lib_txdone_noinfo" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7ca099ed, "rt2x00lib_set_mac_address" },
	{ 0xc23454e5, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x9de9d06e, "__skb_pad" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211,crc-ccitt");


MODULE_INFO(srcversion, "68D63FFE3F1D3C691BD02B8");

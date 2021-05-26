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
	{ 0x2e5382f9, "rtl_fill_dummy" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x96d97b09, "rtl_dm_diginit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0x7916451, "_rtl_dbg_trace" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x34f8020b, "rtl_fw_page_write" },
	{ 0xf446b72d, "_rtl_dbg_print_data" },
	{ 0x5eeee537, "rtl_cmd_send_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4829a47e, "memcpy" },
	{ 0xfe5c3e1d, "rtl_fw_block_write" },
	{ 0x99cfb896, "skb_put" },
};

MODULE_INFO(depends, "rtlwifi");


MODULE_INFO(srcversion, "8457E233D8A4F63288B1621");

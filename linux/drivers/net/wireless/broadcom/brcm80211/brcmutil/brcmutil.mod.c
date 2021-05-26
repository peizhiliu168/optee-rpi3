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
	{ 0x93007c53, "skb_queue_head" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x56470118, "__warn_printk" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xa356d9f3, "skb_unlink" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xfe00ca92, "skb_dequeue_tail" },
	{ 0xdcb764ad, "memset" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x99cfb896, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B3F119D70FB75A37C52A13E");

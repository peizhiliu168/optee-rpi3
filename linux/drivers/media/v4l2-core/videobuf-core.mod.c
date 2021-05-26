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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x53b954a2, "up_read" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x963d42aa, "__wake_up_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2f548802, "ns_to_timeval" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D55118EBB2C6E1AD1044250");

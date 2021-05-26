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
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x3e5a58c8, "hdlcdrv_unregister" },
	{ 0x59229554, "hdlcdrv_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0xd949ab24, "hdlcdrv_receiver" },
	{ 0x1b5ac767, "hdlcdrv_transmitter" },
	{ 0x3d219772, "hdlcdrv_arbitrate" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x349cba85, "strchr" },
	{ 0xc5850110, "printk" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "hdlcdrv");


MODULE_INFO(srcversion, "DCF3496ACFAEB016C43192B");

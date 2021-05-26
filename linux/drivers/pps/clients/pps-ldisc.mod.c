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
	{ 0x6c642e7a, "n_tty_inherit_ops" },
	{ 0x2dae1556, "pps_event" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x7db9d591, "pps_register_source" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe312ae0b, "pps_unregister_source" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xc618884c, "pps_lookup_dev" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "pps_core");


MODULE_INFO(srcversion, "9A402EA1A281C4D21A7030D");

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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc5850110, "printk" },
	{ 0xf1e046cc, "panic" },
	{ 0x5cb6e14f, "crypto_unregister_rng" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7a4497db, "kzfree" },
	{ 0x2c9a9728, "crypto_register_rng" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A38585F40227F3E03F16251");

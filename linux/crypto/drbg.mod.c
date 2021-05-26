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
	{ 0x5d79c33a, "crypto_unregister_rngs" },
	{ 0xa11d3d14, "crypto_register_rngs" },
	{ 0xd0e34285, "crypto_alloc_rng" },
	{ 0xea54b9c, "add_random_ready_callback" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc5850110, "printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x768c8c1a, "crypto_alloc_shash" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x577c7ba7, "del_random_ready_callback" },
	{ 0xe1c788b5, "crypto_shash_final" },
	{ 0x1b14ff22, "crypto_shash_update" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x905b7dfa, "crypto_shash_setkey" },
	{ 0x7a4497db, "kzfree" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x4829a47e, "memcpy" },
	{ 0x98cf60b3, "strlen" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "17182A597341647F87D6EE1");

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
	{ 0x44a2b3a6, "xt_unregister_target" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xbac58131, "gen_new_estimator" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4f7eab80, "xt_register_target" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4198ca95, "__do_once_done" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "49D6B6EE92BD00643C57A47");

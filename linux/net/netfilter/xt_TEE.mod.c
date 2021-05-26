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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x7299044b, "xt_unregister_targets" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xd4984feb, "xt_register_targets" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x8e92f7c4, "static_key_slow_inc" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x29a09ee6, "dev_get_by_name" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd43c0fb0, "nf_dup_ipv4" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xbcb6e6b3, "nf_dup_ipv6" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables,nf_dup_ipv4,nf_dup_ipv6");


MODULE_INFO(srcversion, "26459F75F8CD9F5E61EB421");

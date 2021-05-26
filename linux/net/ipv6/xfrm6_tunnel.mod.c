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
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x7aedefdf, "xfrm6_tunnel_deregister" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xd8465196, "xfrm_unregister_type" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0xdcc6b078, "skb_push" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x626d04ba, "xfrm_state_flush" },
	{ 0x3908a997, "xfrm_register_type" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x15b40ac7, "xfrm6_rcv_spi" },
	{ 0x659ded26, "xfrm_flush_gc" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x80451e40, "xfrm6_tunnel_register" },
};

MODULE_INFO(depends, "tunnel6,ipv6");


MODULE_INFO(srcversion, "721607F64C5B0E402A23B91");

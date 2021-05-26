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
	{ 0x75d7727d, "unregister_qdisc" },
	{ 0x9cf0f9a8, "register_qdisc" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x481c66fc, "skb_copy_bits" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x25087745, "skb_trim" },
	{ 0x20f01045, "nla_put_64bit" },
	{ 0x6bcb8f10, "nla_append" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x34fb5f82, "qdisc_offload_dump_helper" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc5850110, "printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xfc3131b, "rtnl_kfree_skbs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "69A5017740F75E74A81F965");

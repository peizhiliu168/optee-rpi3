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
	{ 0xc80c9601, "deregister_atm_ioctl" },
	{ 0xa9155401, "register_atm_ioctl" },
	{ 0xfcf89115, "ppp_unit_number" },
	{ 0x99e1970, "vcc_process_recv_queue" },
	{ 0x85ccf583, "__module_get" },
	{ 0x692c810, "ppp_register_channel" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x84fe337e, "ppp_channel_index" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x2a24a078, "skb_realloc_headroom" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x7481b148, "refcount_add_checked" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5bee7acd, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xaeaf006b, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xa808d36d, "ppp_input_error" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x558e4b9f, "ppp_input" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x483ba15b, "ppp_output_wakeup" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "atm,ppp_generic");


MODULE_INFO(srcversion, "DBB03B60EB8633699EE38B5");

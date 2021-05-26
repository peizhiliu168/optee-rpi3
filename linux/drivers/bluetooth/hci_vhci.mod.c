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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x25f70e91, "misc_deregister" },
	{ 0xb25e26d9, "misc_register" },
	{ 0x14d6fd2b, "hci_recv_frame" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x99cfb896, "skb_put" },
	{ 0xdda74f7c, "hci_register_dev" },
	{ 0xca96e9cd, "hci_alloc_dev" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x93007c53, "skb_queue_head" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2c486680, "skb_dequeue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe9eedf75, "nonseekable_open" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0xdcc6b078, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0xf10a24bc, "hci_free_dev" },
	{ 0x76a226fa, "hci_unregister_dev" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xcfdafeda, "skb_queue_purge" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "190B54CC3BC7791EF1FEA69");

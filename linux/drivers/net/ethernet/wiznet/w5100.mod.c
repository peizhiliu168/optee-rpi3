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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2136e7ce, "netdev_info" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x349cba85, "strchr" },
	{ 0x8ca01852, "napi_disable" },
	{ 0x7ae03454, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf52258a5, "netif_carrier_on" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0x16ba4b86, "netif_carrier_off" },
	{ 0x3637d228, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xdf7cac8f, "netif_rx_ni" },
	{ 0x5b6e95f7, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xef6a4539, "free_netdev" },
	{ 0x73ff4adf, "register_netdev" },
	{ 0xb0028e46, "netif_receive_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x5e95a8ad, "platform_get_resource" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0xd26a07c4, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc27bd86c, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d2ee0f4, "napi_complete_done" },
	{ 0x9560009a, "eth_type_trans" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3740a9c7, "eth_validate_addr" },
	{ 0x32950f86, "gpiod_to_irq" },
	{ 0xc9f11fd7, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe58cb6ec, "platform_get_irq" },
	{ 0x2cd86719, "consume_skb" },
	{ 0x2032c38d, "gpiod_get_raw_value" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x99cfb896, "skb_put" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3bdecad4, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FC34CF1A8A79BA59BDBA729");

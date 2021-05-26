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
	{ 0x9bec646, "sdio_writeb" },
	{ 0xc7526b20, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6f6fbb74, "__pm_runtime_idle" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe668680a, "lbs_resume" },
	{ 0xaf772e3a, "sdio_writesb" },
	{ 0x58609da3, "sdio_enable_func" },
	{ 0xae8da676, "sdio_claim_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf0954d0a, "__pm_runtime_resume" },
	{ 0xfdd1aa06, "lbs_stop_card" },
	{ 0xa02d4dfb, "netdev_alert" },
	{ 0x4b4aa032, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaa52bf42, "sdio_get_host_pm_caps" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x93b065b7, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc44fa3f0, "lbs_start_card" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xa8b130a, "lbs_queue_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf3d61da3, "lbs_get_firmware_async" },
	{ 0xb329219a, "lbs_cmd_copyback" },
	{ 0x3ca8b8df, "lbs_suspend" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x75d131e4, "sdio_readsb" },
	{ 0x8f9c7889, "sdio_unregister_driver" },
	{ 0x7f606e90, "lbs_remove_card" },
	{ 0x17af2f40, "sdio_f0_writeb" },
	{ 0x5e140da3, "sdio_set_host_pm_flags" },
	{ 0x1a11bd0d, "lbs_process_rxed_packet" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x9db82662, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1e56dd6, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2126dadf, "sdio_align_size" },
	{ 0x550ba772, "lbs_add_card" },
	{ 0xd7670bfa, "sdio_f0_readb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x1df33d5e, "mmc_add_host" },
	{ 0x126033ef, "netdev_err" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xdaa1afa7, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x97f7dce3, "sdio_register_driver" },
	{ 0x3ac9c1d7, "sdio_claim_host" },
	{ 0x99cfb896, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe75d97f9, "sdio_set_block_size" },
	{ 0x2d69666d, "sdio_disable_func" },
	{ 0x6eb90fb, "sdio_release_host" },
	{ 0x250a311c, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "574DD96A90F004DBC84B465");

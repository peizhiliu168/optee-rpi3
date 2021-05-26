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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x5514e15d, "mwifiex_cancel_hs" },
	{ 0xaf772e3a, "sdio_writesb" },
	{ 0x58609da3, "sdio_enable_func" },
	{ 0xae8da676, "sdio_claim_irq" },
	{ 0x92d25dce, "mmc_hw_reset" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x94776eb7, "mwifiex_disable_auto_ds" },
	{ 0x63731d39, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd48ce267, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0xa06d2b71, "mwifiex_main_process" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97c4da15, "mwifiex_prepare_fw_dump_info" },
	{ 0xaa52bf42, "sdio_get_host_pm_caps" },
	{ 0x25087745, "skb_trim" },
	{ 0xfd94814e, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x1f5161ac, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xdcb764ad, "memset" },
	{ 0x9c251131, "mwifiex_add_card" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x885ac16c, "of_match_node" },
	{ 0x524f1793, "mwifiex_shutdown_sw" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x75d131e4, "sdio_readsb" },
	{ 0x8f9c7889, "sdio_unregister_driver" },
	{ 0x5e140da3, "sdio_set_host_pm_flags" },
	{ 0x39cc6a7d, "mwifiex_dnld_fw" },
	{ 0x345eff32, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9db82662, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd7670bfa, "sdio_f0_readb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d5f134e, "mwifiex_reinit_sw" },
	{ 0x44a9083a, "mwifiex_handle_rx_packet" },
	{ 0x170f953, "mwifiex_deauthenticate_all" },
	{ 0x901c0dc6, "mwifiex_remove_card" },
	{ 0x3da2ff28, "mwifiex_enable_hs" },
	{ 0x2f92f509, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x97f7dce3, "sdio_register_driver" },
	{ 0x3ac9c1d7, "sdio_claim_host" },
	{ 0xa64e4bc, "mwifiex_drv_info_dump" },
	{ 0x99cfb896, "skb_put" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x15b7df22, "mwifiex_init_shutdown_fw" },
	{ 0xe75d97f9, "sdio_set_block_size" },
	{ 0x2d69666d, "sdio_disable_func" },
	{ 0x6eb90fb, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "03D0C5F08B254422C6884B7");

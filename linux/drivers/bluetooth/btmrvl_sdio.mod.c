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
	{ 0x8f9c7889, "sdio_unregister_driver" },
	{ 0x97f7dce3, "sdio_register_driver" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x394cf485, "btmrvl_register_hdev" },
	{ 0x1e289d48, "btmrvl_add_card" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x5157ca12, "irq_of_parse_and_map" },
	{ 0x885ac16c, "of_match_node" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xe75d97f9, "sdio_set_block_size" },
	{ 0xae8da676, "sdio_claim_irq" },
	{ 0x58609da3, "sdio_enable_func" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xaf772e3a, "sdio_writesb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x14d6fd2b, "hci_recv_frame" },
	{ 0xe853d497, "btmrvl_check_evtpkt" },
	{ 0xfec55ae1, "btmrvl_process_event" },
	{ 0x5dd61bae, "skb_pull" },
	{ 0x99cfb896, "skb_put" },
	{ 0x5eb54f48, "__alloc_skb" },
	{ 0x511768ac, "kfree_skb" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf80196b8, "btmrvl_send_module_cfg_cmd" },
	{ 0x333a5120, "btmrvl_remove_card" },
	{ 0x8d3c288e, "dev_coredumpv" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x98cf60b3, "strlen" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa6053753, "btmrvl_interrupt" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x75d131e4, "sdio_readsb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x2d69666d, "sdio_disable_func" },
	{ 0x9db82662, "sdio_release_irq" },
	{ 0x5e140da3, "sdio_set_host_pm_flags" },
	{ 0x95ecbda3, "btmrvl_enable_hs" },
	{ 0xfdff5437, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3e193b3b, "hci_resume_dev" },
	{ 0xaa52bf42, "sdio_get_host_pm_caps" },
	{ 0x718b8b7, "bt_info" },
	{ 0xc7526b20, "sdio_readb" },
	{ 0xd7670bfa, "sdio_f0_readb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x6eb90fb, "sdio_release_host" },
	{ 0x9bec646, "sdio_writeb" },
	{ 0x3ac9c1d7, "sdio_claim_host" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "btmrvl,bluetooth");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "65A0DDC0CEEF578B8FA3D9C");

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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x4829a47e, "memcpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x29361773, "complete" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x815588a6, "clk_enable" },
	{ 0x9356d417, "debugfs_create_u64" },
	{ 0x5d8b4591, "debugfs_create_dir" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xea35209d, "spi_register_controller" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe58cb6ec, "platform_get_irq" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x84f4659b, "devm_platform_ioremap_resource" },
	{ 0xd5109e75, "__devm_spi_alloc_controller" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbe44924c, "dev_driver_string" },
	{ 0x2b86ffe7, "dma_get_slave_caps" },
	{ 0x9d63b9a2, "dma_direct_map_page" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0xcac7ef12, "vmemmap" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x63a115ad, "dma_request_slave_channel" },
	{ 0x27e61d6, "of_get_address" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaf5e77d7, "spi_unregister_controller" },
	{ 0xc00c3a6c, "debugfs_remove_recursive" },
	{ 0xd9171401, "dma_direct_unmap_page" },
	{ 0x4e5b63e6, "dma_release_channel" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xfa4504be, "gpiochip_request_own_desc" },
	{ 0xf4bfb0ae, "gpiochip_find" },
	{ 0xb4923b80, "dma_direct_sync_single_for_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x273f2fb5, "spi_split_transfers_maxsize" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-spiC*");

MODULE_INFO(srcversion, "655798686E1207F61769176");

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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x815588a6, "clk_enable" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3637d228, "devm_ioremap_resource" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x63a115ad, "dma_request_slave_channel" },
	{ 0x9d63b9a2, "dma_direct_map_page" },
	{ 0x5e95a8ad, "platform_get_resource" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x27e61d6, "of_get_address" },
	{ 0xd9171401, "dma_direct_unmap_page" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbe44924c, "dev_driver_string" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4e5b63e6, "dma_release_channel" },
	{ 0x37a0cba, "kfree" },
	{ 0x365b5be7, "dma_wait_for_async_tx" },
	{ 0xcf2a6966, "up" },
	{ 0x9e8fe91f, "dmam_alloc_attrs" },
	{ 0x60f41d0a, "of_find_device_by_node" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x268ff222, "devm_kmalloc" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smiC*");

MODULE_INFO(srcversion, "BD4D3197D66512576DCCB4D");

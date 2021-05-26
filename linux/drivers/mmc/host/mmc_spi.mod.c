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
	{ 0x50d25699, "mmc_gpio_get_cd" },
	{ 0xb574ec91, "mmc_gpio_get_ro" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbe44924c, "dev_driver_string" },
	{ 0xd7f2b6f, "mmc_gpiod_request_cd_irq" },
	{ 0xfaaa2b7c, "mmc_gpiod_request_ro" },
	{ 0xfe7fa6f9, "mmc_gpiod_request_cd" },
	{ 0x1df33d5e, "mmc_add_host" },
	{ 0x7fda9356, "mmc_spi_get_pdata" },
	{ 0xe3fc769c, "mmc_alloc_host" },
	{ 0xdcb764ad, "memset" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x743ac95e, "mmc_request_done" },
	{ 0x5757e536, "spi_bus_unlock" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x87b8798d, "sg_next" },
	{ 0x9d63b9a2, "dma_direct_map_page" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xfc9e89ff, "spi_bus_lock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xba55d23e, "crc7_be" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4eeba42, "spi_setup" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5ff02136, "dma_direct_sync_single_for_cpu" },
	{ 0x530392d5, "spi_sync_locked" },
	{ 0xb4923b80, "dma_direct_sync_single_for_device" },
	{ 0x1e94d37a, "mmc_spi_put_pdata" },
	{ 0x9f3d2dec, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0xd9171401, "dma_direct_unmap_page" },
	{ 0xdaa1afa7, "mmc_remove_host" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x22b7c101, "spi_sync" },
	{ 0xe89b2eeb, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "of_mmc_spi,crc7");

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");

MODULE_INFO(srcversion, "2F740B5703CFE0E31CEE01B");

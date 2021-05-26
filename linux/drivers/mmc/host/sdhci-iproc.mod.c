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
	{ 0x81630505, "sdhci_pltfm_pmops" },
	{ 0xe97980ef, "sdhci_pltfm_unregister" },
	{ 0xa4bdb5ee, "sdhci_set_uhs_signaling" },
	{ 0x76fdbed4, "sdhci_reset" },
	{ 0x7eeb93a2, "sdhci_set_bus_width" },
	{ 0x7214297f, "sdhci_set_clock" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x23926815, "sdhci_add_host" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xcce91244, "devm_clk_get" },
	{ 0x8584e710, "sdhci_get_property" },
	{ 0x36d82794, "sdhci_pltfm_free" },
	{ 0xc36ec9ed, "mmc_of_parse" },
	{ 0xc6e93c0b, "sdhci_pltfm_init" },
	{ 0x4a226164, "device_get_match_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x4336e017, "sdhci_set_power_noreg" },
	{ 0xd1b38cdd, "sdhci_pltfm_clk_get_max_clock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BRCM5871:*");
MODULE_ALIAS("acpi*:BRCM5872:*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-sdhci");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-sdhciC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-emmc2");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2711-emmc2C*");
MODULE_ALIAS("of:N*T*Cbrcm,sdhci-iproc-cygnus");
MODULE_ALIAS("of:N*T*Cbrcm,sdhci-iproc-cygnusC*");
MODULE_ALIAS("of:N*T*Cbrcm,sdhci-iproc");
MODULE_ALIAS("of:N*T*Cbrcm,sdhci-iprocC*");

MODULE_INFO(srcversion, "EB60E0D904920989A261EA7");

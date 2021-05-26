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
	{ 0x4526606c, "component_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8cb00ab4, "vimc_ent_sd_register" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xf541e79b, "vimc_pix_map_by_code" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x10de7355, "vimc_ent_sd_unregister" },
	{ 0x89f115ee, "component_del" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "vimc");

MODULE_ALIAS("platform:vimc-debayer");

MODULE_INFO(srcversion, "CD2DB731CFC5CC3D635F5FB");

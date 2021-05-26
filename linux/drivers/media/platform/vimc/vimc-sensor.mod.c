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
	{ 0x2152277a, "v4l2_event_subdev_unsubscribe" },
	{ 0x915ef15a, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x49223d45, "v4l2_ctrl_subdev_log_status" },
	{ 0xce8159bb, "tpg_pattern_strings" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x999e8297, "vfree" },
	{ 0x756516e7, "tpg_s_fourcc" },
	{ 0x86b4ddf7, "tpg_reset_source" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x4526606c, "component_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3005a48, "tpg_alloc" },
	{ 0x4d1d285c, "tpg_init" },
	{ 0x8cb00ab4, "vimc_ent_sd_register" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0x39c22bba, "v4l2_ctrl_new_custom" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x7a5d8c0b, "tpg_update_mv_step" },
	{ 0x37a0cba, "kfree" },
	{ 0xc6110b6e, "tpg_free" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xcfe2c150, "vimc_pix_map_by_index" },
	{ 0xf541e79b, "vimc_pix_map_by_code" },
	{ 0x517e7ccd, "tpg_fill_plane_buffer" },
	{ 0x10de7355, "vimc_ent_sd_unregister" },
	{ 0x89f115ee, "component_del" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "videodev,v4l2-tpg,vimc");

MODULE_ALIAS("platform:vimc-sensor");

MODULE_INFO(srcversion, "640D272496CC9407F853703");

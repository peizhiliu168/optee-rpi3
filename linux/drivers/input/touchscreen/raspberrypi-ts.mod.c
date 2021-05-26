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
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x99119988, "input_register_polled_device" },
	{ 0x5bcbd09e, "input_mt_init_slots" },
	{ 0x7fb481f2, "touchscreen_parse_properties" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0xc77fa262, "devm_input_allocate_polled_device" },
	{ 0x50c2ae54, "rpi_firmware_property" },
	{ 0x424b97c4, "devm_add_action" },
	{ 0xcd3be9f4, "dma_alloc_attrs" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xded99c04, "of_node_put" },
	{ 0x391617cc, "rpi_firmware_get" },
	{ 0x415df55f, "of_get_parent" },
	{ 0xbf34e288, "dma_free_attrs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b2b01e3, "input_mt_sync_frame" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xda2dfc35, "touchscreen_report_pos" },
	{ 0xa27c2a09, "input_mt_report_slot_state" },
	{ 0xf51135cb, "input_event" },
	{ 0x5d112304, "__memcpy_fromio" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("of:N*T*Craspberrypi,firmware-ts");
MODULE_ALIAS("of:N*T*Craspberrypi,firmware-tsC*");

MODULE_INFO(srcversion, "4BA9F5B62A4FC944CDDD91B");

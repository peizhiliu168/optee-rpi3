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
	{ 0x34feded3, "mipi_dsi_driver_unregister" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x985a5971, "mipi_dsi_driver_register_full" },
	{ 0x53afd7b8, "drm_panel_add" },
	{ 0x89033add, "drm_panel_init" },
	{ 0x81d9e8a4, "mipi_dsi_device_register_full" },
	{ 0x3b88dc32, "of_graph_get_remote_port" },
	{ 0xded99c04, "of_node_put" },
	{ 0x3da92c57, "of_find_mipi_dsi_host_by_node" },
	{ 0x467811fe, "of_graph_get_remote_port_parent" },
	{ 0x3729fb45, "of_graph_get_next_endpoint" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x71442389, "mipi_dsi_generic_write" },
	{ 0xf443eb1e, "i2c_smbus_read_byte_data" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcea11c8b, "i2c_smbus_write_byte_data" },
	{ 0xdcca6d80, "mipi_dsi_attach" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xaf6cea1d, "drm_display_info_set_bus_formats" },
	{ 0x3daa90f1, "drm_mode_probed_add" },
	{ 0x8c2a17d8, "drm_mode_set_name" },
	{ 0x9b942e31, "drm_mode_duplicate" },
	{ 0x37a0cba, "kfree" },
	{ 0x93da234a, "mipi_dsi_device_unregister" },
	{ 0x11c9c6e5, "drm_panel_remove" },
	{ 0xcbf416dd, "mipi_dsi_detach" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "drm");

MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panel");
MODULE_ALIAS("of:N*T*Craspberrypi,7inch-touchscreen-panelC*");

MODULE_INFO(srcversion, "078EAA1C47D5AF7D4E497A5");

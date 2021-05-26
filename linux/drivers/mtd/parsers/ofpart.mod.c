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
	{ 0x4b390858, "deregister_mtd_parser" },
	{ 0x6cb4d5cc, "__register_mtd_parser" },
	{ 0x37a0cba, "kfree" },
	{ 0xded99c04, "of_node_put" },
	{ 0xc906095d, "of_n_size_cells" },
	{ 0xe7edbcdf, "of_n_addr_cells" },
	{ 0xb9a21ca3, "of_get_next_child" },
	{ 0xabb5c744, "of_device_is_compatible" },
	{ 0xb9c09ddc, "of_get_child_by_name" },
	{ 0x98cf60b3, "strlen" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x14d91d5f, "of_get_property" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "mtd");

MODULE_ALIAS("of:N*T*Cfixed-partitions");
MODULE_ALIAS("of:N*T*Cfixed-partitionsC*");

MODULE_INFO(srcversion, "06949DBF1206BE11BF87EA0");

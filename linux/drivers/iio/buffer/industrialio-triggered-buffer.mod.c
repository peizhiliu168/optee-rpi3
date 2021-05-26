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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xec2f9f70, "iio_kfifo_allocate" },
	{ 0xf6b523a2, "devres_alloc_node" },
	{ 0x6468af93, "devm_iio_device_match" },
	{ 0xc4bce89d, "iio_triggered_buffer_postenable" },
	{ 0x2b745bd2, "iio_device_attach_buffer" },
	{ 0x3fa66679, "devres_release" },
	{ 0xc03b018, "iio_triggered_buffer_predisable" },
	{ 0xd86bccef, "iio_kfifo_free" },
	{ 0x8eab9994, "devres_add" },
	{ 0x95e81b15, "iio_alloc_pollfunc" },
	{ 0x994426bf, "iio_dealloc_pollfunc" },
};

MODULE_INFO(depends, "kfifo_buf,industrialio");


MODULE_INFO(srcversion, "22C108E890DC32A58054AC2");

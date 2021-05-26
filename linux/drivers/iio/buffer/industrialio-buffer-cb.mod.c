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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x8fa05ce2, "iio_channel_release_all" },
	{ 0x19af8aa5, "iio_buffer_init" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x2fb00de4, "iio_update_buffers" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xba4adebd, "iio_channel_get_all" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x676a2bbc, "iio_buffer_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "0B50BA2F297191C8B3DFC1D");

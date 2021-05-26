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
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x5495392, "hid_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x40399a0c, "__hid_request" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x768e4443, "input_ff_create_memless" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0003g*v00002006p00000118");

MODULE_INFO(srcversion, "B97883601FD04E89CB313BA");

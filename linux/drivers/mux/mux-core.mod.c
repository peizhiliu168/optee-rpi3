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
	{ 0x204ac018, "class_find_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x36b6ebbf, "down_killable" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xf6b523a2, "devres_alloc_node" },
	{ 0x4830eca5, "device_del" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xc5850110, "printk" },
	{ 0xb6c97aea, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x31faa7fb, "device_add" },
	{ 0x7247df5a, "__class_register" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdded6c02, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8eab9994, "devres_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x9f696742, "device_initialize" },
	{ 0xcf2a6966, "up" },
	{ 0x9c1a9d2e, "of_parse_phandle_with_args" },
	{ 0x79c45236, "device_match_of_node" },
	{ 0x11151312, "of_property_match_string" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0xded99c04, "of_node_put" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "708AF91964D29E44FAACDA8");

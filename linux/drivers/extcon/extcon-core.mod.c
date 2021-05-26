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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0x94ccdf71, "kobject_uevent" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf6b523a2, "devres_alloc_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xc12ad67f, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xae038a9a, "kobject_uevent_env" },
	{ 0x3fa66679, "devres_release" },
	{ 0xdded6c02, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xdc9fa232, "raw_notifier_chain_register" },
	{ 0x8eab9994, "devres_add" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x37a0cba, "kfree" },
	{ 0x2878eef7, "class_destroy" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0xded99c04, "of_node_put" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xa851973a, "raw_notifier_call_chain" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9a775031, "__class_create" },
	{ 0xd06524ba, "raw_notifier_chain_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CD4B0431BD334007F4ED5CB");

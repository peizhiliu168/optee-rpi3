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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x80d68d3e, "fb_register_client" },
	{ 0x9d66c554, "of_parse_phandle" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf6b523a2, "devres_alloc_node" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xc12ad67f, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xae038a9a, "kobject_uevent_env" },
	{ 0x424b97c4, "devm_add_action" },
	{ 0x3fa66679, "devres_release" },
	{ 0xdded6c02, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0xbcee111f, "sysfs_notify" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x8eab9994, "devres_add" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x2878eef7, "class_destroy" },
	{ 0xb12cbacb, "fb_unregister_client" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0xded99c04, "of_node_put" },
	{ 0x9a775031, "__class_create" },
	{ 0x7b4da6ff, "__init_rwsem" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6D7E2EF9BD5B27700DB5D67");

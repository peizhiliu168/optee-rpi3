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
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x3abba0e5, "bus_unregister_notifier" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x1d8dbd7a, "i2c_for_each_dev" },
	{ 0x2878eef7, "class_destroy" },
	{ 0xfb211de2, "bus_register_notifier" },
	{ 0xe106f9fc, "i2c_bus_type" },
	{ 0x9a775031, "__class_create" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xdcb764ad, "memset" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b6ea44, "i2c_smbus_xfer" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc5850110, "printk" },
	{ 0xc2231be7, "cdev_device_add" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0x9f696742, "device_initialize" },
	{ 0xe6f4fcc9, "cdev_init" },
	{ 0xdded6c02, "put_device" },
	{ 0x8c6e704e, "cdev_device_del" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xeb28179e, "i2c_verify_client" },
	{ 0x9e345af2, "device_for_each_child" },
	{ 0xd2a52c39, "i2c_adapter_type" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xcd362865, "i2c_get_adapter" },
	{ 0x61c16d7b, "i2c_put_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "61F542EB2F961D0651830E1");

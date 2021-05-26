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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x8932da54, "hid_add_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xb99f246, "hid_parse_report" },
	{ 0xe64f444f, "dev_printk" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5495392, "hid_debug" },
	{ 0x5b4d7b61, "hid_input_report" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3488e9bd, "i2c_smbus_read_byte" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd98de7e4, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x50bac3c, "device_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x7da99514, "hid_destroy_device" },
	{ 0xb3eaea63, "hid_allocate_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:hid");
MODULE_ALIAS("i2c:hid-over-i2c");
MODULE_ALIAS("of:N*T*Chid-over-i2c");
MODULE_ALIAS("of:N*T*Chid-over-i2cC*");

MODULE_INFO(srcversion, "7D2C083597412F9C1B7A3F3");

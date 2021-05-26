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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0xf93e3a26, "fb_sys_read" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xaffff91a, "backlight_device_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf00a7749, "register_framebuffer" },
	{ 0xb40fef94, "pwm_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x880c64c1, "fb_deferred_io_init" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0xc56a41e6, "vabits_actual" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x3011f33c, "of_find_property" },
	{ 0xd6d8eed4, "of_property_read_variable_u8_array" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x52e413fe, "of_device_get_match_data" },
	{ 0x6cdcc468, "framebuffer_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34890429, "pwm_apply_state" },
	{ 0xb8c8b2c1, "pwm_put" },
	{ 0x996253b3, "framebuffer_release" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x1ba7c500, "physvirt_offset" },
	{ 0x23fb8477, "fb_deferred_io_cleanup" },
	{ 0x64087647, "unregister_framebuffer" },
	{ 0x6815f2b7, "backlight_device_unregister" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x53a02354, "sys_fillrect" },
	{ 0xbd19916c, "sys_copyarea" },
	{ 0x30dd9ae, "sys_imageblit" },
	{ 0xdcb764ad, "memset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "fb_sys_fops,backlight,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("i2c:ssd1305fb");
MODULE_ALIAS("i2c:ssd1306fb");
MODULE_ALIAS("i2c:ssd1307fb");
MODULE_ALIAS("i2c:ssd1309fb");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1305fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2cC*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2c");
MODULE_ALIAS("of:N*T*Csolomon,ssd1309fb-i2cC*");

MODULE_INFO(srcversion, "04490A26F94E4038A78574F");

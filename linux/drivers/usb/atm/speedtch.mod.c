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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0x71022091, "usbatm_usb_disconnect" },
	{ 0x69de0ba8, "param_ops_byte" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x5d4571b, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdd9970ad, "usb_driver_claim_interface" },
	{ 0x77075c44, "atm_dev_signal_change" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xc567ea26, "usb_driver_release_interface" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x81ade87, "usb_string" },
	{ 0xc5850110, "printk" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb38e97c7, "usbatm_usb_probe" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "830063AB5B56DA3DC21842C");

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
	{ 0x1e326b5e, "param_array_ops" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0xa96f1213, "param_ops_uint" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf2122dcb, "usb_bulk_msg" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x6a21acf6, "freezing_slow_path" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x81ade87, "usb_string" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x77075c44, "atm_dev_signal_change" },
	{ 0xb38e97c7, "usbatm_usb_probe" },
	{ 0x2116d007, "request_firmware_nowait" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x5a921311, "strncmp" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xf8a10579, "kernel_param_unlock" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x6a86dfdb, "kernel_param_lock" },
	{ 0x4df02057, "crc32_be" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdd9970ad, "usb_driver_claim_interface" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x1000e51, "schedule" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37a0cba, "kfree" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x71022091, "usbatm_usb_disconnect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "atm,usbatm");

MODULE_ALIAS("usb:v1110p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p900Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1110p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2131d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2130d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1039p2120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3351d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3352d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3353d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3362d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3363d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00FAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00F7d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "878D09613A1BD8C5F49D652");

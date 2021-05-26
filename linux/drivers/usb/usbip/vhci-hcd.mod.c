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
	{ 0xbe0b7b02, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x560fa5bb, "usb_create_shared_hcd" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x93b5383a, "kernel_sendmsg" },
	{ 0x5b9c946a, "sockfd_lookup" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x2d5baa01, "usb_add_hcd" },
	{ 0x349cba85, "strchr" },
	{ 0x429d879e, "usb_remove_hcd" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xaa7d06ae, "usb_create_hcd" },
	{ 0xea59f91d, "usb_hcd_poll_rh_status" },
	{ 0xd4220c36, "usbip_alloc_iso_desc_pdu" },
	{ 0x87b8798d, "sg_next" },
	{ 0xd4e4b749, "usb_hcd_giveback_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4e16d794, "sysfs_remove_group" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x88edbbbc, "usb_put_hcd" },
	{ 0x4fe91093, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x215dc2c6, "usb_hcd_is_primary_hcd" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xc3a4ec78, "usb_hcd_link_urb_to_ep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x27596190, "sysfs_create_group" },
	{ 0x8ce9d8f6, "platform_device_del" },
	{ 0x7a30a4e2, "platform_device_alloc" },
	{ 0x466c1007, "platform_device_add" },
	{ 0x5dcedb23, "kernel_sock_shutdown" },
	{ 0xe897ab9c, "usbip_stop_eh" },
	{ 0xa474f1e, "dev_attr_usbip_debug" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x54d65f25, "sysfs_remove_link" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4260eb07, "fput" },
	{ 0x984575d7, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc27d37c5, "usbip_pad_iso" },
	{ 0x8d5ca9af, "usb_hcd_check_unlink_urb" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xb5c5c408, "usbip_dump_urb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x3eb2d47b, "usbip_recv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x87ddbe5d, "platform_bus" },
	{ 0x3400f4a6, "platform_device_add_data" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a25be7a, "usbip_recv_xbuff" },
	{ 0x98cd98a8, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x2accbdeb, "usb_hcd_unlink_urb_from_ep" },
	{ 0x267ce206, "usb_hcd_resume_root_hub" },
	{ 0xef2622f1, "usbip_start_eh" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3cebedf4, "usbip_pack_pdu" },
	{ 0x2ceb6c90, "platform_device_put" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "BB7D416D2CA2313C409FEF1");

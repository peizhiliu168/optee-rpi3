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
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xbe0b7b02, "usbip_event_happened" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x840342c6, "sgl_free" },
	{ 0xd02753dc, "usbip_header_correct_endian" },
	{ 0x93b5383a, "kernel_sendmsg" },
	{ 0x5b9c946a, "sockfd_lookup" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x1b57c983, "usb_set_configuration" },
	{ 0xd4220c36, "usbip_alloc_iso_desc_pdu" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe13f3409, "usb_hub_claim_port" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4fe91093, "usbip_event_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe1ea0586, "usbip_dump_header" },
	{ 0xdcb764ad, "memset" },
	{ 0xf90a7cc2, "usbip_in_eh" },
	{ 0xb0d8628e, "usb_lock_device_for_reset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x1175683f, "usb_register_device_driver" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5dcedb23, "kernel_sock_shutdown" },
	{ 0x93925831, "device_attach" },
	{ 0xe897ab9c, "usbip_stop_eh" },
	{ 0xa474f1e, "dev_attr_usbip_debug" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x4260eb07, "fput" },
	{ 0x984575d7, "usbip_recv_iso" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0xb5c5c408, "usbip_dump_urb" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x3a13f54a, "sgl_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x55873e9d, "driver_create_file" },
	{ 0x3eb2d47b, "usbip_recv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x214bf271, "usb_deregister_device_driver" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a25be7a, "usbip_recv_xbuff" },
	{ 0x51ad4396, "usb_hub_release_port" },
	{ 0x98cd98a8, "__put_task_struct" },
	{ 0x78b72f44, "usbip_debug_flag" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x88e79a3a, "driver_remove_file" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xef2622f1, "usbip_start_eh" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x3cebedf4, "usbip_pack_pdu" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbip-core");


MODULE_INFO(srcversion, "A706755C3797B38D095777B");

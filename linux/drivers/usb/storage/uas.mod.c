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
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x519bbea6, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5cef41fb, "scsi_host_alloc" },
	{ 0xf8b1185a, "usb_stor_adjust_quirks" },
	{ 0x1bc3edc2, "usb_stor_sense_invalidCDB" },
	{ 0xf2d42df5, "usb_unlink_urb" },
	{ 0xb1755aef, "sdev_prefix_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ad89746, "usb_unanchor_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x39f12b4d, "blk_queue_max_hw_sectors" },
	{ 0xfb3e3eb7, "blk_queue_update_dma_alignment" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb0d8628e, "usb_lock_device_for_reset" },
	{ 0x70c4b51, "scsi_host_put" },
	{ 0x3880da16, "scsi_remove_host" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9f4611f6, "scsi_report_bus_reset" },
	{ 0x788d0b01, "usb_alloc_streams" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0xbf35235d, "usb_get_urb" },
	{ 0x6d040bb5, "scsi_change_queue_depth" },
	{ 0xbd5caa83, "scsi_is_host_device" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9b48b020, "scsi_scan_host" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x562ca9f6, "scsi_print_command" },
	{ 0x32841735, "scmd_printk" },
	{ 0xc21174bb, "scsi_unblock_requests" },
	{ 0xe64f444f, "dev_printk" },
	{ 0x1e274462, "scsi_block_requests" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x15af7f4, "system_state" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf0122fb2, "usb_free_streams" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v054Cp087Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v059Fp105Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0984p0301d0128dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC2p331Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13FDp3940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0539d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0567d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v152Dp0578d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v154BpF00Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2537p1068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v357Dp7788d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p1012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4971p8024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip50in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic08isc06ip62in*");

MODULE_INFO(srcversion, "772E35D05A66EDC659368D2");

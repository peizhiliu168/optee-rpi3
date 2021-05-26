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
	{ 0x65853570, "usb_register_driver" },
	{ 0x87b8798d, "sg_next" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b48b020, "scsi_scan_host" },
	{ 0x519bbea6, "scsi_add_host_with_dma" },
	{ 0x5cef41fb, "scsi_host_alloc" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xee3cfb58, "usb_reset_device" },
	{ 0xb0d8628e, "usb_lock_device_for_reset" },
	{ 0x989d4cfb, "blk_queue_dma_alignment" },
	{ 0x37a0cba, "kfree" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x70c4b51, "scsi_host_put" },
	{ 0x3880da16, "scsi_remove_host" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v04CEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0094d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80A3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp80ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp00B6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "19B461DE370B25545499B57");

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
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x9edaa2ff, "fb_sys_write" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x47905a9b, "device_create_bin_file" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0xf00a7749, "register_framebuffer" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf93e3a26, "fb_sys_read" },
	{ 0x6cdcc468, "framebuffer_alloc" },
	{ 0xd36760ef, "__usb_get_extra_descriptor" },
	{ 0xb856306, "usb_get_descriptor" },
	{ 0x30df632e, "usb_get_dev" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x20d65e40, "fb_find_nearest_mode" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x880c64c1, "fb_deferred_io_init" },
	{ 0x23fb8477, "fb_deferred_io_cleanup" },
	{ 0xdcb764ad, "memset" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x996253b3, "framebuffer_release" },
	{ 0x6ee2f27b, "usb_put_dev" },
	{ 0xc9561772, "fb_destroy_modelist" },
	{ 0x999e8297, "vfree" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0x53a02354, "sys_fillrect" },
	{ 0xbd19916c, "sys_copyarea" },
	{ 0x30dd9ae, "sys_imageblit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x49690b22, "remap_pfn_range" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x64087647, "unregister_framebuffer" },
	{ 0xe029333c, "device_remove_bin_file" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x37a0cba, "kfree" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6626afca, "down" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcf2a6966, "up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "7DBFD2A27B24702D870455F");

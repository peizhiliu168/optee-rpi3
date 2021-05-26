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
	{ 0x8851b7f4, "drm_release" },
	{ 0x7f6fd135, "drm_prime_gem_destroy" },
	{ 0x4011a3e6, "dma_direct_unmap_sg" },
	{ 0x5d85f9cb, "drm_fb_helper_set_par" },
	{ 0x97ccd49a, "drm_fb_helper_ioctl" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x7816b16e, "drm_crtc_helper_set_config" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x3b0789cb, "drm_dev_register" },
	{ 0x63bcfe7c, "drm_compat_ioctl" },
	{ 0xd5e58293, "drm_gem_put_pages" },
	{ 0x8436d729, "drm_fb_helper_initial_config" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x2df13ed8, "drm_gem_dmabuf_release" },
	{ 0xadfb2164, "drm_mode_config_cleanup" },
	{ 0xab1d2bf6, "drm_fb_helper_unlink_fbi" },
	{ 0x75fb9062, "arch_timer_read_counter" },
	{ 0xcf562bd2, "dma_buf_detach" },
	{ 0xb5fff5ab, "drm_fb_helper_debug_leave" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x74fd8dac, "drm_helper_probe_single_connector_modes" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3864191f, "drm_gem_free_mmap_offset" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc94d9682, "drm_encoder_init" },
	{ 0xde84e815, "drm_dev_fini" },
	{ 0xad176873, "drm_connector_cleanup" },
	{ 0xca5a4fb6, "drm_do_get_edid" },
	{ 0xfde59f4a, "drm_fb_helper_unregister_fbi" },
	{ 0xddbe3be7, "dma_buf_vunmap" },
	{ 0xb856306, "usb_get_descriptor" },
	{ 0x65b10a42, "drm_fb_helper_pan_display" },
	{ 0xcd946ca8, "drm_connector_update_edid_property" },
	{ 0x2e42ec50, "drm_helper_connector_dpms" },
	{ 0xd6cb6ec5, "drm_dev_put" },
	{ 0xdcb764ad, "memset" },
	{ 0x3744cf36, "vmalloc_to_pfn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xab1f9db, "drm_prime_pages_to_sg" },
	{ 0xe8a034df, "drm_dev_exit" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6d5279b0, "drm_helper_mode_fill_fb_struct" },
	{ 0xc5850110, "printk" },
	{ 0x89525453, "drm_gem_handle_create" },
	{ 0x5f5ea134, "vmap" },
	{ 0x3dadb9aa, "drm_gem_object_put_unlocked" },
	{ 0x88c477cb, "dma_buf_put" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdc408eff, "drm_gem_object_release" },
	{ 0x6626afca, "down" },
	{ 0xe9681d82, "drm_read" },
	{ 0xde0a8051, "noop_llseek" },
	{ 0x29d490e5, "drm_add_edid_modes" },
	{ 0xdf0bfb02, "dma_buf_unmap_attachment" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0xcd8b879a, "drm_err" },
	{ 0x2793a942, "drm_connector_init" },
	{ 0x8be4a162, "drm_kms_helper_poll_enable" },
	{ 0x9ce7ae04, "drm_dev_unplug" },
	{ 0x87dafca7, "drm_fb_helper_prepare" },
	{ 0x3f7a9ab6, "drm_gem_vm_open" },
	{ 0x2498ea33, "vm_insert_page" },
	{ 0x336c0823, "drm_gem_vm_close" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x9bc7dc52, "drm_gem_prime_fd_to_handle" },
	{ 0x7a72981b, "dma_buf_begin_cpu_access" },
	{ 0x94d1228, "drm_ioctl" },
	{ 0xb2dac156, "drm_fb_helper_sys_imageblit" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x7435d608, "drm_gem_mmap" },
	{ 0x5627d3e7, "dma_buf_map_attachment" },
	{ 0x6b0c50d0, "drm_gem_dmabuf_export" },
	{ 0xed536f5, "drm_framebuffer_unregister_private" },
	{ 0xdded6c02, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa3009367, "drm_fb_helper_check_var" },
	{ 0xb4d1cef6, "drm_fb_helper_blank" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0x7c306609, "drm_dev_init" },
	{ 0x99a89bc3, "drm_connector_attach_encoder" },
	{ 0xa0f55256, "drm_crtc_send_vblank_event" },
	{ 0xbcf0a7d5, "drm_gem_object_lookup" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xa671419, "drm_fb_helper_alloc_fbi" },
	{ 0x4e002e26, "drm_crtc_init" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x44bcc61e, "dma_buf_attach" },
	{ 0x2980e7f1, "drm_gem_prime_handle_to_fd" },
	{ 0x8c10f4b5, "get_device" },
	{ 0xb11e0bc5, "drm_connector_unregister" },
	{ 0x1c5687df, "drm_gem_object_init" },
	{ 0x40b8f549, "drm_encoder_cleanup" },
	{ 0x23fb8477, "fb_deferred_io_cleanup" },
	{ 0x880c64c1, "fb_deferred_io_init" },
	{ 0xcb7c4aeb, "drm_gem_create_mmap_offset" },
	{ 0x9acab25e, "drm_fb_helper_fill_info" },
	{ 0x6160f6ec, "drm_crtc_cleanup" },
	{ 0xa66b78cf, "drm_mode_config_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0xd8cec48c, "dma_direct_map_sg" },
	{ 0x49690b22, "remap_pfn_range" },
	{ 0x4829a47e, "memcpy" },
	{ 0x13d18183, "drm_fb_helper_deferred_io" },
	{ 0xcf2a6966, "up" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x41a2b84e, "drm_fb_helper_fini" },
	{ 0x428c2cdc, "drm_modeset_lock_all" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0x2c91e17c, "vm_get_page_prot" },
	{ 0x250af5a9, "drm_prime_sg_to_page_addr_arrays" },
	{ 0x887166c2, "drm_fb_helper_sys_fillrect" },
	{ 0x16404b1c, "drm_modeset_unlock_all" },
	{ 0x4c89c246, "drm_helper_disable_unused_functions" },
	{ 0x8e3d7f35, "dma_buf_end_cpu_access" },
	{ 0xc0ef0308, "drm_fb_helper_setcmap" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x41c74c80, "drm_framebuffer_init" },
	{ 0x161f2a13, "drm_kms_helper_poll_init" },
	{ 0x36b8c32e, "dma_buf_vmap" },
	{ 0x5f5f978c, "drm_fb_helper_sys_copyarea" },
	{ 0x3dcd20aa, "drm_gem_get_pages" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x987c581, "drm_connector_register" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x29f078d1, "drm_mode_legacy_fb_format" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x92e683f5, "down_timeout" },
	{ 0xb3727a33, "drm_kms_helper_poll_disable" },
	{ 0xdf6cc68e, "drm_mode_object_find" },
	{ 0x5ea554a1, "drm_dev_enter" },
	{ 0x253b1b9c, "drm_fb_helper_debug_enter" },
	{ 0xa4e0a02, "drm_poll" },
	{ 0x91f0c1d, "drm_fb_helper_init" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0x3f82bdb, "drm_open" },
	{ 0x26641ccf, "drm_kms_helper_poll_fini" },
	{ 0x3f4650c4, "drm_framebuffer_cleanup" },
};

MODULE_INFO(depends, "drm,drm_kms_helper");

MODULE_ALIAS("usb:v17E9p*d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "6705FEC1559EF1C1E4CB73B");
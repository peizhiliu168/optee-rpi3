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
	{ 0xf93e3a26, "fb_sys_read" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x9edaa2ff, "fb_sys_write" },
	{ 0x53a02354, "sys_fillrect" },
	{ 0xbd19916c, "sys_copyarea" },
	{ 0x30dd9ae, "sys_imageblit" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5850110, "printk" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xf00a7749, "register_framebuffer" },
	{ 0x880c64c1, "fb_deferred_io_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0x6cdcc468, "framebuffer_alloc" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xbeea249e, "rpisense_get_dev" },
	{ 0x6cd97dd, "rpisense_block_write" },
	{ 0x999e8297, "vfree" },
	{ 0x996253b3, "framebuffer_release" },
	{ 0x23fb8477, "fb_deferred_io_cleanup" },
	{ 0x64087647, "unregister_framebuffer" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "fb_sys_fops,sysfillrect,syscopyarea,sysimgblt,rpisense-core");

MODULE_ALIAS("platform:rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fbC*");

MODULE_INFO(srcversion, "BA8465552677687B0951966");

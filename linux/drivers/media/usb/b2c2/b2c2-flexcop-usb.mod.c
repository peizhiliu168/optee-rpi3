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
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x80eeb598, "flexcop_device_initialize" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x45f13558, "flexcop_device_kfree" },
	{ 0x8eeb59a5, "flexcop_sram_ctrl" },
	{ 0xdcb764ad, "memset" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x24741b76, "usb_set_interface" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa532f903, "flexcop_device_kmalloc" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x850c0a40, "flexcop_sram_set_dest" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4716522f, "flexcop_pass_dmx_packets" },
	{ 0x9bb30b4a, "flexcop_wan_set_speed" },
	{ 0x4829a47e, "memcpy" },
	{ 0x65853570, "usb_register_driver" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0xb9565207, "flexcop_device_exit" },
	{ 0x9a244485, "usb_alloc_urb" },
};

MODULE_INFO(depends, "b2c2-flexcop");

MODULE_ALIAS("usb:v0AF7p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A105277B7B1F1A42FA1D7CC");

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
	{ 0xe4a4a8a3, "param_ops_short" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x245234cc, "__spi_register_driver" },
	{ 0xdcb764ad, "memset" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeba9e7a2, "spi_write_then_read" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb93f6cee, "dvb_unregister_frontend" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x8f68bcf, "dvb_frontend_detach" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2078c73, "dvb_unregister_adapter" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x1581dd4c, "dvb_dmxdev_release" },
	{ 0xe75e4602, "dvb_dmxdev_init" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xfbc250fe, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x7f677d33, "dvb_register_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x22b7c101, "spi_sync" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("spi:cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880C*");

MODULE_INFO(srcversion, "C076ED5E5B64F579E3768E8");

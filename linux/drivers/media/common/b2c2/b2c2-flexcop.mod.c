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
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x3e7eb1bf, "s5h1420_get_tuner_i2c_adapter" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0xd2078c73, "dvb_unregister_adapter" },
	{ 0x222e12ad, "cx24113_agc_callback" },
	{ 0xfbc250fe, "dvb_register_frontend" },
	{ 0x4d739ad, "cx24123_get_tuner_i2c_adapter" },
	{ 0xb93f6cee, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x358c88a8, "dvb_net_release" },
	{ 0xd9bdc079, "i2c_add_adapter" },
	{ 0x8f68bcf, "dvb_frontend_detach" },
	{ 0xe4a4a8a3, "param_ops_short" },
	{ 0x1581dd4c, "dvb_dmxdev_release" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xe27258a7, "dvb_net_init" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x868784cb, "__symbol_get" },
	{ 0x4afb2df7, "i2c_del_adapter" },
	{ 0xdcf60586, "dvb_dmx_swfilter_packets" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f677d33, "dvb_register_adapter" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e326b5e, "param_array_ops" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xe75e4602, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "s5h1420,dvb-core,cx24113,cx24123");


MODULE_INFO(srcversion, "99DAA093927433C0AB79241");

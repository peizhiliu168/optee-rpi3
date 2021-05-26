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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x68366d32, "media_device_register_entity" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x4829a47e, "memcpy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xdcb764ad, "memset" },
	{ 0x79ca02c, "media_device_unregister_entity" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "mc");

MODULE_ALIAS("i2c:si2157");
MODULE_ALIAS("i2c:si2146");
MODULE_ALIAS("i2c:si2141");
MODULE_ALIAS("i2c:si2177");

MODULE_INFO(srcversion, "B63523AFE49E311818346A0");

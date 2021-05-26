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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x38eeb66b, "rc_keydown" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x494547e3, "rc_free_device" },
	{ 0x562e4fb1, "rc_allocate_device" },
	{ 0xbe57027c, "rc_register_device" },
	{ 0xf27e214b, "i2c_new_dummy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x61fc71a0, "rc_unregister_device" },
	{ 0xea2d52de, "i2c_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");

MODULE_INFO(srcversion, "C7BAC560E4355A93A5A1B7B");

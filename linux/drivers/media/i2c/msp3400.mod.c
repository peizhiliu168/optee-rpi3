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
	{ 0x3ea4f9b2, "v4l2_ctrl_cluster" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0xe64f444f, "dev_printk" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x6a21acf6, "freezing_slow_path" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0xafe0b81f, "v4l2_ctrl_handler_log_status" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:msp3400");

MODULE_INFO(srcversion, "F5DE939C8DE475FFCDBDFD0");

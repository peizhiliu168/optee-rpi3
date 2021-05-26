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
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x3ea4f9b2, "v4l2_ctrl_cluster" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x69c8e36a, "v4l2_subdev_call_wrappers" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0x68d55e7d, "v4l2_ctrl_handler_free" },
	{ 0xdfbe60ec, "v4l2_ctrl_new_std" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x63c1180f, "param_ops_charp" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd2e4462b, "v4l2_ctrl_handler_setup" },
	{ 0xafe0b81f, "v4l2_ctrl_handler_log_status" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x7af67cfe, "v4l2_ctrl_handler_init_class" },
	{ 0xb0d6e3b5, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5d4571b, "release_firmware" },
	{ 0xb243a923, "v4l2_i2c_subdev_init" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:cx25840");

MODULE_INFO(srcversion, "1013273EBF495E98A1DFEE4");

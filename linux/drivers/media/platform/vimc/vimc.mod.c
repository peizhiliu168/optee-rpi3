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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xac66e908, "component_unbind_all" },
	{ 0x69c8e36a, "v4l2_subdev_call_wrappers" },
	{ 0x19841a93, "v4l2_device_unregister" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xd87fd63e, "__v4l2_device_register_subdev_nodes" },
	{ 0xbae17db0, "component_bind_all" },
	{ 0x8f7e38a4, "component_match_add_release" },
	{ 0xc6d9be53, "component_master_del" },
	{ 0x5682f894, "platform_device_register_full" },
	{ 0xdd64e639, "strscpy" },
	{ 0xc75fc85f, "kthread_create_on_node" },
	{ 0x7811aea7, "__platform_driver_register" },
	{ 0x20514a9, "v4l2_device_register" },
	{ 0xdcb764ad, "memset" },
	{ 0x6a21acf6, "freezing_slow_path" },
	{ 0xc5850110, "printk" },
	{ 0xf9af0ed, "kthread_stop" },
	{ 0x3296ee6b, "media_entity_pads_init" },
	{ 0x132a8a60, "platform_device_unregister" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x339d3f2b, "v4l2_device_unregister_subdev" },
	{ 0x932e23e9, "media_device_cleanup" },
	{ 0x6a0f681d, "platform_device_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xa3a4578, "v4l2_device_register_subdev" },
	{ 0xb9a388a2, "media_create_pad_link" },
	{ 0x85771c4f, "wake_up_process" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf955c66a, "v4l2_subdev_init" },
	{ 0xd9d444b9, "__media_device_register" },
	{ 0x96a2234f, "media_entity_remote_pad" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x879d9284, "component_master_add_with_match" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeb7af7d1, "media_device_init" },
	{ 0x5133306b, "platform_driver_unregister" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x9fd65ad8, "media_device_unregister" },
};

MODULE_INFO(depends, "videodev,mc");


MODULE_INFO(srcversion, "1201E530A742D2A15A5913D");

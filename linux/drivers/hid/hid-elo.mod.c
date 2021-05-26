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
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x1c86974c, "usb_hub_find_child" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xf51135cb, "input_event" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000004E7p00000009");
MODULE_ALIAS("hid:b0003g*v000004E7p00000030");

MODULE_INFO(srcversion, "B38ED4C6CF0C8BD6B558AE4");

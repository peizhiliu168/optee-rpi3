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
	{ 0x2d3385d3, "system_wq" },
	{ 0x24ad04cd, "em28xx_read_reg" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x61fc71a0, "rc_unregister_device" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0xa530a8dd, "em28xx_write_regs" },
	{ 0xe64f444f, "dev_printk" },
	{ 0xe675c49a, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x22fea119, "em28xx_register_extension" },
	{ 0x562e4fb1, "rc_allocate_device" },
	{ 0xf51135cb, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfdff995c, "em28xx_find_led" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x494547e3, "rc_free_device" },
	{ 0xfdc2d3a5, "em28xx_toggle_reg_bits" },
	{ 0x38eeb66b, "rc_keydown" },
	{ 0x99c64a74, "em28xx_unregister_extension" },
	{ 0xbe57027c, "rc_register_device" },
	{ 0x11dca099, "em28xx_write_reg_bits" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x84a68123, "input_register_device" },
	{ 0xf7acc44b, "input_free_device" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x4e9303af, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0xa4f4a217, "input_unregister_device" },
	{ 0x72f113, "i2c_probe_func_quick_read" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdcfd406a, "em28xx_write_reg" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0x687ead44, "input_allocate_device" },
};

MODULE_INFO(depends, "em28xx");


MODULE_INFO(srcversion, "E094AB33D95D0157684DA56");

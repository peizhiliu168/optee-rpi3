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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x1a598530, "devm_gpiod_get_index_optional" },
	{ 0x98cf60b3, "strlen" },
	{ 0x996253b3, "framebuffer_release" },
	{ 0xf93e3a26, "fb_sys_read" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0xbd19916c, "sys_copyarea" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfb71b138, "of_prop_next_u32" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3011f33c, "of_find_property" },
	{ 0x5bc5eb45, "of_property_read_string" },
	{ 0xf00a7749, "register_framebuffer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x1b861648, "of_match_device" },
	{ 0x22b7c101, "spi_sync" },
	{ 0x61651be, "strcat" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x53a02354, "sys_fillrect" },
	{ 0xfe916dc6, "hex_dump_to_buffer" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x30dd9ae, "sys_imageblit" },
	{ 0x9edaa2ff, "fb_sys_write" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6cdcc468, "framebuffer_alloc" },
	{ 0x23fb8477, "fb_deferred_io_cleanup" },
	{ 0x880c64c1, "fb_deferred_io_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x77bc13a0, "strim" },
	{ 0x1e948421, "of_property_read_variable_u32_array" },
	{ 0x9fde53ed, "gpiod_set_value" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xb3aef6f8, "param_ops_ulong" },
	{ 0xd262dfcb, "vscnprintf" },
	{ 0x64087647, "unregister_framebuffer" },
};

MODULE_INFO(depends, "fb_sys_fops,syscopyarea,sysfillrect,sysimgblt");


MODULE_INFO(srcversion, "4AC44AC72B5FC07EFAEC5E7");

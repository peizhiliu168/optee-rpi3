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
	{ 0xa96f1213, "param_ops_uint" },
	{ 0xdd0d8bc0, "seq_release_private" },
	{ 0x457a3d90, "seq_read" },
	{ 0x2f227be4, "seq_lseek" },
	{ 0x7b712f1a, "xt_unregister_matches" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0xc66de8bf, "xt_register_matches" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x609bcd98, "in6_pton" },
	{ 0x4841bdee, "strnchr" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd90acd41, "proc_set_user" },
	{ 0xcd6b74d8, "proc_create_data" },
	{ 0xdf025f1b, "make_kgid" },
	{ 0x1d0b1bd7, "make_kuid" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0xe914e41e, "strcpy" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x4198ca95, "__do_once_done" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x48012e28, "xt_check_proc_name" },
	{ 0xdc3fcbc9, "__sw_hweight8" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x7e894db6, "proc_mkdir" },
	{ 0xa7e6919c, "remove_proc_entry" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xfeb6a68d, "seq_putc" },
	{ 0x203ec0aa, "seq_printf" },
	{ 0xdf6f93e, "PDE_DATA" },
	{ 0xd76a876f, "__seq_open_private" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "9FFFEB64ADA80356865A9C9");

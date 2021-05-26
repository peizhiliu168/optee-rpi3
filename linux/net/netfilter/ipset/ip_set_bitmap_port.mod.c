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
	{ 0x590eba0f, "ip_set_type_unregister" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x3dd2a711, "ip_set_type_register" },
	{ 0x24d273d1, "add_timer" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5792f848, "strlcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x25087745, "skb_trim" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xeef9338c, "ip_set_put_extensions" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xdcb764ad, "memset" },
	{ 0xa09b56e9, "ip_set_extensions" },
	{ 0x397f6231, "ip_set_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0xf3b4d4ae, "ip_set_alloc" },
	{ 0xed766ef6, "ip_set_elem_len" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0xbc64d615, "ip_set_get_ip_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4f9a1598, "ip_set_get_extensions" },
	{ 0x6768a05b, "ip_set_match_extensions" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "03CB5AE0A1CECF152C9A537");

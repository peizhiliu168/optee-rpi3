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

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x54230ab0, "module_layout" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x58d07c94, "ip_local_out" },
	{ 0xc944ae01, "dst_release" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x511768ac, "kfree_skb" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x2e2e38, "__pskb_copy_fclone" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xf4d6524d, "ip_route_output_flow" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D349050B58ADAABC15B08A7");

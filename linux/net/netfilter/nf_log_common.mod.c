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
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0xbde9b7ce, "from_kuid_munged" },
	{ 0xa7cfd637, "init_user_ns" },
	{ 0xc7371ca5, "from_kgid_munged" },
	{ 0x54db874d, "nf_log_packet" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x481c66fc, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3D0792CD41834DE026D6080");

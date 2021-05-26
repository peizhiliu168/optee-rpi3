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
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0x8187bcc3, "sock_no_sendmsg" },
	{ 0x286208d4, "sock_no_getsockopt" },
	{ 0x212daac9, "sock_no_setsockopt" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0xab090f50, "sock_no_ioctl" },
	{ 0xeea11058, "sock_no_getname" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x4d353002, "sock_no_connect" },
	{ 0x7c94bf92, "sock_no_bind" },
	{ 0x3861f386, "af_alg_release" },
	{ 0x506d9f26, "af_alg_unregister_type" },
	{ 0x8eb140bb, "af_alg_register_type" },
	{ 0xd0e34285, "crypto_alloc_rng" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0x5ccb5047, "crypto_rng_reset" },
	{ 0x804f811a, "af_alg_release_parent" },
	{ 0xfc4a35f5, "sock_kfree_s" },
	{ 0xcf9fec1a, "sock_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdcddd379, "_copy_to_iter" },
	{ 0xdcb764ad, "memset" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "1A9116B6AA57428816DF37E");

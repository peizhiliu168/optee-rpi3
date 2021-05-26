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
	{ 0xf777be58, "sock_no_mmap" },
	{ 0x286208d4, "sock_no_getsockopt" },
	{ 0x212daac9, "sock_no_setsockopt" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0xab090f50, "sock_no_ioctl" },
	{ 0xb3e029c, "af_alg_poll" },
	{ 0xeea11058, "sock_no_getname" },
	{ 0xfae77caa, "sock_no_accept" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x4d353002, "sock_no_connect" },
	{ 0x7c94bf92, "sock_no_bind" },
	{ 0x3861f386, "af_alg_release" },
	{ 0x506d9f26, "af_alg_unregister_type" },
	{ 0x8eb140bb, "af_alg_register_type" },
	{ 0xe0520f38, "af_alg_sendpage" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x427e4478, "sk_free" },
	{ 0x52fc9fbf, "crypto_skcipher_decrypt" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x9d0602bf, "release_sock" },
	{ 0xfc62250a, "af_alg_wmem_wakeup" },
	{ 0xeea08361, "af_alg_free_resources" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0xc6525b4a, "crypto_skcipher_encrypt" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x36e39030, "af_alg_count_tsgl" },
	{ 0x99c406d, "af_alg_get_rsgl" },
	{ 0x90d1e598, "af_alg_alloc_areq" },
	{ 0xef35edb7, "af_alg_wait_for_data" },
	{ 0x307dabe3, "crypto_req_done" },
	{ 0x8e9e6338, "af_alg_async_cb" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0x33264da6, "crypto_alloc_skcipher" },
	{ 0x5703599e, "crypto_destroy_tfm" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0xcf9fec1a, "sock_kmalloc" },
	{ 0x804f811a, "af_alg_release_parent" },
	{ 0xfc4a35f5, "sock_kfree_s" },
	{ 0x2ce1545f, "sock_kzfree_s" },
	{ 0x52f0ef24, "af_alg_pull_tsgl" },
	{ 0x61231d1f, "af_alg_sendmsg" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "97B54A2A24C20E31F6AD696");

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
	{ 0x9d0602bf, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xac5fcf2f, "sock_init_data" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x53b954a2, "up_read" },
	{ 0x286208d4, "sock_no_getsockopt" },
	{ 0xab090f50, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xeea11058, "sock_no_getname" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x4152a967, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0xf777be58, "sock_no_mmap" },
	{ 0xa742422e, "sock_no_recvmsg" },
	{ 0xdcb764ad, "memset" },
	{ 0x9a7dd51a, "sock_no_socketpair" },
	{ 0x63b9347c, "sk_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xd34c5340, "lock_sock_nested" },
	{ 0xd6f7a76e, "iov_iter_get_pages" },
	{ 0x3a74663c, "sock_no_listen" },
	{ 0xbc9af18e, "sock_wake_async" },
	{ 0x427e4478, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xfc4a35f5, "sock_kfree_s" },
	{ 0xa08a2126, "sock_no_shutdown" },
	{ 0x5bee7acd, "module_put" },
	{ 0x399bb8c0, "__wake_up_sync_key" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x1b9b2f64, "proto_register" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4528f305, "sock_register" },
	{ 0x8e2aebcc, "proto_unregister" },
	{ 0xfa1e9bf6, "_copy_from_iter_full" },
	{ 0xcf9fec1a, "sock_kmalloc" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x4d353002, "sock_no_connect" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x8187bcc3, "sock_no_sendmsg" },
	{ 0x2ce1545f, "sock_kzfree_s" },
	{ 0x6c337917, "iov_iter_advance" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xfe9c94f2, "__put_page" },
	{ 0xd2dd944b, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D3E82012C8CBAA95B21A937");

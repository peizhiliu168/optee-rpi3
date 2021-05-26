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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x29d2e9f7, "blk_put_request" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfa1eed8f, "scsi_cmd_blk_ioctl" },
	{ 0x16d05b2c, "blk_rq_unmap_user" },
	{ 0xaee4c2f, "invalidate_bdev" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69b99ede, "blk_rq_map_user" },
	{ 0x319d493d, "proc_dostring" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x59e24fa9, "blk_execute_rq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x736c8f46, "blk_get_request" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4E9E3D94D6E3FFCE4E0FB3C");

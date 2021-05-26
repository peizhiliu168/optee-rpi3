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
	{ 0xa8bfbcd2, "sock_recvmsg" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf09bcb10, "iov_iter_kvec" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5a9f1d63, "memmove" },
	{ 0xb3aef6f8, "param_ops_ulong" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6182D927EC25095CB08619C");

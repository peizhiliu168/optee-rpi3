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
	{ 0x63a22796, "param_ops_string" },
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe84b1e7a, "unregister_console" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2a2f26a, "netpoll_cleanup" },
	{ 0xb180cf33, "register_console" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x85df9b6c, "strsep" },
	{ 0xdbff6199, "netpoll_setup" },
	{ 0xc6961301, "netpoll_parse_options" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xa916b694, "strnlen" },
	{ 0xc5850110, "printk" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x3ccd79b5, "__netpoll_cleanup" },
	{ 0x96848186, "scnprintf" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa07a37f0, "memchr" },
	{ 0x607e8803, "netpoll_send_udp" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "59AB6DED122C4E32C764A4A");

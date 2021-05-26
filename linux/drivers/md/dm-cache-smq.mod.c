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
	{ 0x1fdc7df2, "_mcount" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xefbca4c, "btracker_promotion_already_present" },
	{ 0xa2365f44, "btracker_issue" },
	{ 0x999e8297, "vfree" },
	{ 0xbf1a2968, "btracker_create" },
	{ 0x79db4f75, "dm_cache_policy_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xdcb764ad, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5adc2807, "btracker_destroy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xccfe6409, "btracker_nr_demotions_queued" },
	{ 0x96848186, "scnprintf" },
	{ 0xa7eadcb5, "btracker_complete" },
	{ 0xfcdbfed7, "dm_cache_policy_unregister" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x87bee547, "btracker_queue" },
};

MODULE_INFO(depends, "dm-cache");


MODULE_INFO(srcversion, "33859D75F46E08088EA25E2");

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
	{ 0x2b0e328, "dmaengine_unmap_put" },
	{ 0x1a480eb4, "async_tx_submit" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x51bc9995, "dmaengine_get_unmap_data" },
	{ 0x9d63b9a2, "dma_direct_map_page" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xa38e431a, "__async_tx_find_channel" },
	{ 0xc40cd94e, "async_tx_quiesce" },
	{ 0x4829a47e, "memcpy" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xf229424a, "preempt_count_add" },
};

MODULE_INFO(depends, "async_tx");


MODULE_INFO(srcversion, "6B1E7FF95EAC2758C9CD924");

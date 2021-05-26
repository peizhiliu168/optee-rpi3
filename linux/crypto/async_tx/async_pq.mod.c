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
	{ 0xb0d904b7, "raid6_empty_zero_page" },
	{ 0x6708db7, "__alloc_pages_nodemask" },
	{ 0x2b0e328, "dmaengine_unmap_put" },
	{ 0x2b30f429, "raid6_call" },
	{ 0x1a480eb4, "async_tx_submit" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x51bc9995, "dmaengine_get_unmap_data" },
	{ 0x9d63b9a2, "dma_direct_map_page" },
	{ 0xa38e431a, "__async_tx_find_channel" },
	{ 0x8d7a9644, "__free_pages" },
	{ 0x974b79b8, "async_xor" },
	{ 0xc40cd94e, "async_tx_quiesce" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17f54263, "raid6_gfexp" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
};

MODULE_INFO(depends, "raid6_pq,async_tx,async_xor");


MODULE_INFO(srcversion, "7FE9F4C429C4B7E7C97A511");

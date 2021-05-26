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
	{ 0x65da995c, "__fib_lookup" },
	{ 0xd1838b29, "nft_register_expr" },
	{ 0x37db9a70, "inet_dev_addr_type" },
	{ 0x332ab9c3, "nft_fib_validate" },
	{ 0x3077e598, "nft_fib_store_result" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4fd7586d, "nft_unregister_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x251b91a8, "fib_info_nh_uses_dev" },
	{ 0xe8bf0dbf, "nft_fib_init" },
	{ 0x5aae2aa, "fib_table_lookup" },
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0x22117f86, "nft_fib_dump" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x481c66fc, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "210EF046EC2824F4622D288");

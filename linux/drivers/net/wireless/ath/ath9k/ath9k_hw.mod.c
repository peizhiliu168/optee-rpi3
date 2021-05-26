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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1d77e9fe, "gpio_to_desc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x435a50ed, "ath_printk" },
	{ 0xdcb764ad, "memset" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xe91fbc50, "ath_hw_get_listen_time" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c451018, "ath_hw_cycle_counters_update" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xbcc8bbf, "ath_hw_setbssidmask" },
	{ 0xfe990052, "gpio_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4ea3c593, "gpiod_set_raw_value" },
	{ 0x96848186, "scnprintf" },
	{ 0x2032c38d, "gpiod_get_raw_value" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9e7d6bd0, "__udelay" },
};

MODULE_INFO(depends, "ath");


MODULE_INFO(srcversion, "81772195230BE94CB83F5C4");

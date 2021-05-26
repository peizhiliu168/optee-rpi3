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
	{ 0x4b82bb56, "tpm1_getcap" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x8c051f2a, "tpm2_probe" },
	{ 0x6a21acf6, "freezing_slow_path" },
	{ 0x6754104a, "tpmm_chip_alloc" },
	{ 0xbb9aee65, "tpm_get_timeouts" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2e835921, "tpm_chip_stop" },
	{ 0x9fd579ee, "tpm_chip_register" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x801fbd02, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x78fba30b, "tpm_calc_ordinal_duration" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x85f22cc4, "tpm2_get_tpm_pt" },
	{ 0xedc03953, "iounmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc1ed12c1, "tpm_chip_start" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "tpm");


MODULE_INFO(srcversion, "ED4B0C02326BF4EF253E94C");

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
	{ 0xdd1df433, "param_ops_bool" },
	{ 0x9bdd93d2, "param_get_uint" },
	{ 0x87e0bf91, "hid_unregister_driver" },
	{ 0xa8ed4744, "__hid_register_driver" },
	{ 0x65b19e5f, "input_alloc_absinfo" },
	{ 0x8f9bc776, "input_set_abs_params" },
	{ 0x5bcbd09e, "input_mt_init_slots" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xecb06ef, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x4785936b, "hid_register_report" },
	{ 0xee3812d1, "hid_hw_start" },
	{ 0x94c1e0c8, "hid_open_report" },
	{ 0x268ff222, "devm_kmalloc" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x9b2b01e3, "input_mt_sync_frame" },
	{ 0x9850ce6, "input_mt_report_pointer_emulation" },
	{ 0xa27c2a09, "input_mt_report_slot_state" },
	{ 0xf51135cb, "input_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");
MODULE_ALIAS("hid:b0005g*v0000004Cp00000265");
MODULE_ALIAS("hid:b0003g*v000005ACp00000265");

MODULE_INFO(srcversion, "AA8EBF2133E5E987CCAC14B");

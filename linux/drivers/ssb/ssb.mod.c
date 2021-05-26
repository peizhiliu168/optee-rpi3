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
	{ 0xa1e549e1, "bus_register" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xe947d7dd, "driver_register" },
	{ 0x56470118, "__warn_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1b6b83c, "_dev_emerg" },
	{ 0xc12ad67f, "device_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x279ab61b, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6b4b2933, "__ioremap" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x66af638d, "bus_unregister" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xdded6c02, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3d8560e4, "cpu_hwcaps" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8c10f4b5, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xa9d355c7, "device_unregister" },
	{ 0xb34f5dc6, "dev_set_name" },
	{ 0xb2ead97c, "kimage_vaddr" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A1CFFD11D9C31A1051A978B");

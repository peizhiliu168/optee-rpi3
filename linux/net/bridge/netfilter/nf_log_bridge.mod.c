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
	{ 0x69c407f6, "nf_log_unregister" },
	{ 0xec2b4abd, "unregister_pernet_subsys" },
	{ 0x2a0d84b9, "nf_log_register" },
	{ 0xfffd808c, "register_pernet_subsys" },
	{ 0x39e61495, "nf_logger_request_module" },
	{ 0xd6b82264, "nf_log_set" },
	{ 0x805cb58b, "nf_log_unset" },
	{ 0x2e45d182, "nf_log_l2packet" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "nf_log_common");


MODULE_INFO(srcversion, "D84460C958661675F869594");

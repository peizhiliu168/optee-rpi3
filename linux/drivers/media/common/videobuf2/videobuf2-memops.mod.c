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
	{ 0xa1dee5f1, "frame_vector_create" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xff903b43, "frame_vector_destroy" },
	{ 0x655611bf, "get_vaddr_frames" },
	{ 0x568f2f3f, "put_vaddr_frames" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0DBE03B418DC2F927372C9A");

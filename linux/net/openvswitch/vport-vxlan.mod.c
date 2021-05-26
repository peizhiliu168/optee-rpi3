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
	{ 0x29223775, "dev_queue_xmit" },
	{ 0xcbd388a7, "ovs_netdev_tunnel_destroy" },
	{ 0xec5fe333, "ovs_vport_ops_unregister" },
	{ 0xeddc609a, "__ovs_vport_ops_register" },
	{ 0xb2e98882, "ovs_netdev_link" },
	{ 0x974b5afb, "ovs_vport_free" },
	{ 0xc6606672, "rtnl_delete_link" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x49077ce9, "dev_change_flags" },
	{ 0x2d3eba1b, "vxlan_dev_create" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xab34a84, "ovs_vport_alloc" },
	{ 0xcd279169, "nla_find" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb2ff6b0e, "nla_put" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "openvswitch,vxlan");


MODULE_INFO(srcversion, "A5F47DD0AB5A51CE11CBA9D");

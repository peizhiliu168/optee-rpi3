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
	{ 0x54c09cdd, "v4l2_async_register_subdev" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x3bfeacae, "fwnode_graph_get_remote_port_parent" },
	{ 0xcc9c220f, "fwnode_handle_put" },
	{ 0x41da6ae5, "of_node_name_eq" },
	{ 0x44220af7, "v4l2_async_subdev_notifier_register" },
	{ 0x985cdb47, "v4l2_async_notifier_cleanup" },
	{ 0xc006bc06, "v4l2_async_notifier_init" },
	{ 0x661e7895, "fwnode_get_next_parent" },
	{ 0xd29e15fa, "fwnode_device_is_available" },
	{ 0x2632ac91, "v4l2_async_notifier_add_subdev" },
	{ 0x1ccbd29c, "fwnode_property_present" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x2260326f, "v4l2_async_notifier_add_fwnode_subdev" },
	{ 0xa75d52a5, "fwnode_property_read_u64_array" },
	{ 0x1aa19561, "fwnode_property_read_u32_array" },
	{ 0x5af6c370, "fwnode_graph_parse_endpoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x521a54f7, "fwnode_get_parent" },
	{ 0x182eee96, "fwnode_property_get_reference_args" },
	{ 0x55dfc4d6, "fwnode_graph_get_port_parent" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ed99946, "fwnode_graph_get_next_endpoint" },
	{ 0x156d3265, "dev_fwnode" },
	{ 0x7997e802, "fwnode_graph_get_remote_endpoint" },
	{ 0x3f7bed98, "v4l2_async_notifier_unregister" },
	{ 0x2ac0c65f, "of_fwnode_ops" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "FED221F250A286BCF458CDD");

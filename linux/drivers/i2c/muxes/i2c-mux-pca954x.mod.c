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
	{ 0xb48d92a0, "i2c_del_driver" },
	{ 0x80e99c53, "i2c_register_driver" },
	{ 0x4a741a83, "_dev_err" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0xc072da86, "devm_request_threaded_irq" },
	{ 0x5bc4f4c3, "i2c_mux_add_adapter" },
	{ 0xd5f0638c, "irq_set_chip_and_handler_name" },
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x3d85e8e1, "irq_create_mapping_affinity" },
	{ 0xee0101fd, "handle_simple_irq" },
	{ 0x7789d53b, "__irq_domain_add" },
	{ 0x9dc70e21, "irq_domain_simple_ops" },
	{ 0x3011f33c, "of_find_property" },
	{ 0xcd9a0191, "i2c_smbus_write_byte" },
	{ 0x1bd2bd0d, "i2c_get_device_id" },
	{ 0x52e413fe, "of_device_get_match_data" },
	{ 0x15314362, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe21031c4, "devm_gpiod_get_optional" },
	{ 0x96cb70f6, "i2c_mux_alloc" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x3488e9bd, "i2c_smbus_read_byte" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7ef55cd6, "__i2c_smbus_xfer" },
	{ 0x60376207, "i2c_mux_del_adapters" },
	{ 0xffee68a9, "irq_domain_remove" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0x56e9277f, "irq_find_mapping" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "i2c-mux");

MODULE_ALIAS("of:N*T*Cnxp,pca9540");
MODULE_ALIAS("of:N*T*Cnxp,pca9540C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9542");
MODULE_ALIAS("of:N*T*Cnxp,pca9542C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9543");
MODULE_ALIAS("of:N*T*Cnxp,pca9543C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9544");
MODULE_ALIAS("of:N*T*Cnxp,pca9544C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9545");
MODULE_ALIAS("of:N*T*Cnxp,pca9545C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9546");
MODULE_ALIAS("of:N*T*Cnxp,pca9546C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9547");
MODULE_ALIAS("of:N*T*Cnxp,pca9547C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9548");
MODULE_ALIAS("of:N*T*Cnxp,pca9548C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9846");
MODULE_ALIAS("of:N*T*Cnxp,pca9846C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9847");
MODULE_ALIAS("of:N*T*Cnxp,pca9847C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9848");
MODULE_ALIAS("of:N*T*Cnxp,pca9848C*");
MODULE_ALIAS("of:N*T*Cnxp,pca9849");
MODULE_ALIAS("of:N*T*Cnxp,pca9849C*");
MODULE_ALIAS("i2c:pca9540");
MODULE_ALIAS("i2c:pca9542");
MODULE_ALIAS("i2c:pca9543");
MODULE_ALIAS("i2c:pca9544");
MODULE_ALIAS("i2c:pca9545");
MODULE_ALIAS("i2c:pca9546");
MODULE_ALIAS("i2c:pca9547");
MODULE_ALIAS("i2c:pca9548");
MODULE_ALIAS("i2c:pca9846");
MODULE_ALIAS("i2c:pca9847");
MODULE_ALIAS("i2c:pca9848");
MODULE_ALIAS("i2c:pca9849");

MODULE_INFO(srcversion, "76FE7E77C9AD5840DBE20C8");

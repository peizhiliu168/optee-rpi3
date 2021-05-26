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
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x88e69f9a, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xae0162e7, "put_tty_driver" },
	{ 0xc5ba782a, "tty_unregister_driver" },
	{ 0x65853570, "usb_register_driver" },
	{ 0x99084a5f, "tty_register_driver" },
	{ 0x2441b780, "tty_set_operations" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x68acdcaa, "__tty_alloc_driver" },
	{ 0x8dfa0619, "tty_flip_buffer_push" },
	{ 0x6b912fd1, "tty_insert_flip_string_fixed_flag" },
	{ 0x57622d66, "tty_port_tty_wakeup" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4b50cb71, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6e5c8168, "usb_clear_halt" },
	{ 0xa6f1fa12, "_dev_warn" },
	{ 0xb53ed649, "tty_port_register_device" },
	{ 0xdd9970ad, "usb_driver_claim_interface" },
	{ 0x9bd00fa, "_dev_info" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7a9e6ebc, "device_create_file" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x9a244485, "usb_alloc_urb" },
	{ 0xe83dbd5b, "usb_alloc_coherent" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x91221da3, "usb_get_intf" },
	{ 0x41faacbe, "tty_port_init" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0x415b62f3, "usb_ifnum_to_if" },
	{ 0x7286a048, "cdc_parse_cdc_header" },
	{ 0x4293e687, "usb_control_msg" },
	{ 0xab6b7c4f, "usb_get_from_anchor" },
	{ 0xd88da404, "usb_autopm_get_interface_no_resume" },
	{ 0xc567ea26, "usb_driver_release_interface" },
	{ 0x49c08bfb, "usb_free_urb" },
	{ 0x677e804a, "tty_unregister_device" },
	{ 0xb555309c, "tty_kref_put" },
	{ 0x6f1655f0, "tty_vhangup" },
	{ 0xa2403464, "tty_port_tty_get" },
	{ 0x7eb9ff06, "device_remove_file" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe31ef465, "usb_kill_urb" },
	{ 0x52557f9, "tty_standard_install" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x20978fb9, "idr_find" },
	{ 0x6c1fca85, "tty_port_open" },
	{ 0x9d2e6a90, "tty_port_close" },
	{ 0x19ceba44, "usb_anchor_urb" },
	{ 0x3670a1b8, "usb_autopm_get_interface_async" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x695a79fa, "usb_autopm_put_interface" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xc5664491, "_raw_spin_unlock_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x1e3d9244, "usb_autopm_get_interface" },
	{ 0xfc535947, "tty_port_hangup" },
	{ 0xc6cbbc89, "capable" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x37a0cba, "kfree" },
	{ 0x93dbddd9, "usb_put_intf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeee3b1bd, "tty_port_tty_hangup" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x4829a47e, "memcpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6d5c77ef, "tty_port_put" },
	{ 0xa661c1a4, "usb_free_coherent" },
	{ 0xbefb941c, "usb_autopm_put_interface_async" },
	{ 0x4a741a83, "_dev_err" },
	{ 0x78f2d3cd, "usb_submit_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1fdc7df2, "_mcount" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0424p274Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v076Dp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0870p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Bp023Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Bp0248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Bp024Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp3329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0482p0203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v11CAp0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1965p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p7000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0803p3095d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1324d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20DFp0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2184p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p6425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D91d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D92d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D93d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D95d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D96d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D97d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D99d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v22B8p2D9Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p1340d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05F9p4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1BBBp0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1576p03B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09D8p0320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CA6pA050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2912p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0421p042Dd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04D8d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04C9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0419d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p044Dd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0001d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0475d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0508d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0418d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0425d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0486d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04DFd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p000Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0445d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p042Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p048Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0420d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04E6d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04B2d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0134d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p046Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p002Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0088d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00FCd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0042d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00B0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00ABd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0481d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0007d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0071d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04F0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0070d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0099d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0128d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p008Fd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00A0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p007Bd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0094d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p003Ad*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p00E9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0108d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01F5d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p02E3d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0178d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p010Ed*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p02D9d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01D0d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0223d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0275d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p026Cd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0154d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p04CEd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p01D4d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0302d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p0335d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v0421p03CDd*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v04E7p6651d*dc*dsc*dp*ic02isc02ipFFin*");
MODULE_ALIAS("usb:v03EBp0030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04D8p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p685Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v058Bp0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v108Cp0159d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v108Cp0168d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v108Cp0169d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1BC7p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1BC7p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip02in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip03in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip04in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip05in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc02ip06in*");
MODULE_ALIAS("usb:v1519p0452d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B128C942F2E75A4D518D7ED");

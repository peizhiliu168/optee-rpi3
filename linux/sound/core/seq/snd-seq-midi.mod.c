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
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0x8150b379, "snd_midi_event_reset_encode" },
	{ 0x1f7da17e, "param_ops_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x734e4fba, "snd_midi_event_encode_byte" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x465c33, "snd_rawmidi_kernel_release" },
	{ 0x4aeb43e, "snd_seq_create_kernel_client" },
	{ 0xd2750a24, "snd_rawmidi_kernel_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0xe9e77491, "snd_rawmidi_input_params" },
	{ 0xc88c0dde, "__snd_seq_driver_register" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0xdcb764ad, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xa1028520, "snd_rawmidi_drain_output" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0xfd1f800d, "snd_rawmidi_kernel_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3fd747dc, "snd_rawmidi_kernel_read" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0xaf6e9fc8, "snd_rawmidi_output_params" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x1f13cf7b, "snd_seq_driver_unregister" },
	{ 0xde0528de, "snd_rawmidi_info_select" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device");


MODULE_INFO(srcversion, "AD53094BDFCFEA672729D41");

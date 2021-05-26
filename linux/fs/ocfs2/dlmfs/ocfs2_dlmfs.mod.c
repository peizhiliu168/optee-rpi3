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
	{ 0xc854b83b, "kmem_cache_destroy" },
	{ 0x8672319a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x301fa007, "_raw_spin_unlock" },
	{ 0x2ff5979e, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9507547f, "ocfs2_cluster_disconnect" },
	{ 0x573e90e1, "simple_lookup" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3ba54c7, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x9908c82f, "inc_nlink" },
	{ 0x76f40744, "ocfs2_dlm_lvb" },
	{ 0x44635330, "igrab" },
	{ 0x90b83dca, "mount_nodev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0xdc9f3ede, "kill_litter_super" },
	{ 0x3b52e4ee, "default_llseek" },
	{ 0xc5850110, "printk" },
	{ 0x5792f848, "strlcpy" },
	{ 0x62544ebf, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1b1281f6, "setattr_copy" },
	{ 0xc5196999, "ocfs2_dlm_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1475f64b, "ocfs2_dlm_lvb_valid" },
	{ 0xaf969565, "ocfs2_dlm_lock" },
	{ 0x60504312, "inode_init_once" },
	{ 0xcc802ce2, "simple_getattr" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x85c70137, "kmem_cache_alloc" },
	{ 0xd344e4ee, "ocfs2_stack_glue_set_max_proto_version" },
	{ 0xb7a60bec, "simple_unlink" },
	{ 0x1ddb403d, "simple_dir_operations" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2f301a75, "kmem_cache_create" },
	{ 0xc5186841, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xb782ddc2, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd70459db, "current_time" },
	{ 0xcafdd707, "ocfs2_dlm_lock_status" },
	{ 0xf2ce30fd, "d_make_root" },
	{ 0x4d12319f, "simple_statfs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xafd30039, "unregister_filesystem" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcfd3fc5, "ocfs2_cluster_connect_agnostic" },
	{ 0x47b36e7c, "new_inode" },
	{ 0x382b9b3d, "clear_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x57fc15af, "d_instantiate" },
	{ 0xbdc95d88, "simple_rmdir" },
	{ 0x2b2b31bf, "setattr_prepare" },
	{ 0xf52ca203, "inode_init_owner" },
};

MODULE_INFO(depends, "ocfs2_stackglue,ocfs2_nodemanager");


MODULE_INFO(srcversion, "4733B99A121831128B030BC");

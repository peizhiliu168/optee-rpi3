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
	{ 0xf317d94d, "drop_nlink" },
	{ 0x1fdc7df2, "_mcount" },
	{ 0x7410aba2, "strreplace" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe7c2272f, "efivar_entry_delete" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc9895e68, "get_tree_single" },
	{ 0x465e24ff, "ucs2_utf8size" },
	{ 0x573e90e1, "simple_lookup" },
	{ 0x48ea4ca1, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xc3ba54c7, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xf9d5f12e, "dput" },
	{ 0x9908c82f, "inc_nlink" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0xbc134da5, "d_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x967763b1, "d_delete" },
	{ 0xf729cb4a, "inode_owner_or_capable" },
	{ 0xdc9f3ede, "kill_litter_super" },
	{ 0x11089ac7, "_ctype" },
	{ 0x365607c8, "efivar_entry_remove" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xcc6e5d45, "efivar_entry_size" },
	{ 0xad5737fc, "efivar_init" },
	{ 0x74eb1bb3, "vfs_ioc_setflags_prepare" },
	{ 0x1dd80e82, "simple_open" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa0f493d9, "efi" },
	{ 0x301b4968, "efivar_entry_set_get_size" },
	{ 0x429579cf, "mnt_drop_write_file" },
	{ 0x1ddb403d, "simple_dir_operations" },
	{ 0x1ddb41a, "d_alloc" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa98435ea, "efivar_entry_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd93a5cb1, "efivar_variable_is_removable" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xd414d833, "mnt_want_write_file" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe62f3c77, "kmem_cache_alloc_trace" },
	{ 0xc5186841, "register_filesystem" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xb782ddc2, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb5ab90b3, "efivar_entry_add" },
	{ 0xd70459db, "current_time" },
	{ 0xf4232dc9, "always_delete_dentry" },
	{ 0xf2ce30fd, "d_make_root" },
	{ 0x4d12319f, "simple_statfs" },
	{ 0xa02a0357, "inode_set_flags" },
	{ 0xafd30039, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x47b36e7c, "new_inode" },
	{ 0xf70d7089, "__efivar_entry_iter" },
	{ 0x382b9b3d, "clear_inode" },
	{ 0x57fc15af, "d_instantiate" },
	{ 0x9ac6b194, "efivars_kobject" },
	{ 0x4336fcca, "ucs2_as_utf8" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "04552D0F5E60FF18549BA6F");

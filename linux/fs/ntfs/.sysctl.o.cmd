cmd_fs/ntfs/sysctl.o := /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-gcc -Wp,-MD,fs/ntfs/.sysctl.o.d  -nostdinc -isystem /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/toolchains/aarch64/bin/../lib/gcc/aarch64-none-linux-gnu/9.2.1/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT=3 -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Wno-format-security -std=gnu89 -mgeneral-regs-only -DCONFIG_AS_LSE=1 -DCONFIG_CC_HAS_K_CONSTRAINT=1 -fno-asynchronous-unwind-tables -Wno-psabi -mabi=lp64 -mbranch-protection=none -DKASAN_SHADOW_SCALE_SHIFT=3 -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 --param=allow-store-data-races=0 -Wframe-larger-than=2048 -fstack-protector-strong -Wno-unused-but-set-variable -Wimplicit-fallthrough -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=./= -Wno-packed-not-aligned -mstack-protector-guard=sysreg -mstack-protector-guard-reg=sp_el0 -mstack-protector-guard-offset=1304 -DNTFS_VERSION=\"2.1.32\" -DNTFS_RW  -DMODULE  -DKBUILD_BASENAME='"sysctl"' -DKBUILD_MODNAME='"ntfs"' -c -o fs/ntfs/sysctl.o fs/ntfs/sysctl.c

source_fs/ntfs/sysctl.o := fs/ntfs/sysctl.c

deps_fs/ntfs/sysctl.o := \
    $(wildcard include/config/sysctl.h) \
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \

fs/ntfs/sysctl.o: $(deps_fs/ntfs/sysctl.o)

$(deps_fs/ntfs/sysctl.o):

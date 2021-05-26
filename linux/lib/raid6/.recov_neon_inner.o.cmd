cmd_lib/raid6/recov_neon_inner.o := /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-gcc -Wp,-MD,lib/raid6/.recov_neon_inner.o.d  -nostdinc -isystem /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/toolchains/aarch64/bin/../lib/gcc/aarch64-none-linux-gnu/9.2.1/include -I./arch/arm64/include -I./arch/arm64/include/generated  -I./include -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT=3 -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Wno-format-security -std=gnu89 -DCONFIG_AS_LSE=1 -DCONFIG_CC_HAS_K_CONSTRAINT=1 -fno-asynchronous-unwind-tables -Wno-psabi -mabi=lp64 -mbranch-protection=none -DKASAN_SHADOW_SCALE_SHIFT=3 -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 --param=allow-store-data-races=0 -Wframe-larger-than=2048 -fstack-protector-strong -Wno-unused-but-set-variable -Wimplicit-fallthrough -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -fmacro-prefix-map=./= -Wno-packed-not-aligned -mstack-protector-guard=sysreg -mstack-protector-guard-reg=sp_el0 -mstack-protector-guard-offset=1304 -ffreestanding  -DMODULE  -DKBUILD_BASENAME='"recov_neon_inner"' -DKBUILD_MODNAME='"raid6_pq"' -c -o lib/raid6/recov_neon_inner.o lib/raid6/recov_neon_inner.c

source_lib/raid6/recov_neon_inner.o := lib/raid6/recov_neon_inner.c

deps_lib/raid6/recov_neon_inner.o := \
    $(wildcard include/config/arm.h) \
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
  /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/toolchains/aarch64/lib/gcc/aarch64-none-linux-gnu/9.2.1/include/arm_neon.h \
  /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/toolchains/aarch64/lib/gcc/aarch64-none-linux-gnu/9.2.1/include/stdint.h \
  /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/toolchains/aarch64/lib/gcc/aarch64-none-linux-gnu/9.2.1/include/stdint-gcc.h \
  /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/toolchains/aarch64/lib/gcc/aarch64-none-linux-gnu/9.2.1/include/arm_fp16.h \

lib/raid6/recov_neon_inner.o: $(deps_lib/raid6/recov_neon_inner.o)

$(deps_lib/raid6/recov_neon_inner.o):

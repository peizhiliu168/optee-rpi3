	.arch armv8-a
	.file	"asm-offsets.c"
// GNU C11 (GNU Toolchain for the A-profile Architecture 9.2-2019.12 (arm-9.10)) version 9.2.1 20191025 (aarch64-none-linux-gnu)
//	compiled by GNU C version 4.8.1, GMP version 4.3.2, MPFR version 3.1.6, MPC version 1.0.3, isl version isl-0.15-1-g835ea3a-GMP

// GGC heuristics: --param ggc-min-expand=100 --param ggc-min-heapsize=131072
// options passed:  -nostdinc -I include -I ./arch/arm/include
// -I ./arch/arm/mach-bcm283x/include
// -iprefix /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/toolchains/aarch64/bin/../lib/gcc/aarch64-none-linux-gnu/9.2.1/
// -isysroot /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/toolchains/aarch64/bin/../aarch64-none-linux-gnu/libc
// -D __KERNEL__ -D __UBOOT__ -D __ARM__ -D __LINUX_ARM_ARCH__=8
// -D DO_DEPS_ONLY -D KBUILD_STR(s)=#s
// -D KBUILD_BASENAME=KBUILD_STR(asm_offsets)
// -D KBUILD_MODNAME=KBUILD_STR(asm_offsets)
// -isystem /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/toolchains/aarch64/bin/../lib/gcc/aarch64-none-linux-gnu/9.2.1/include
// -include ./include/linux/kconfig.h -MD arch/arm/lib/.asm-offsets.s.d
// arch/arm/lib/asm-offsets.c -mstrict-align -march=armv8-a -mlittle-endian
// -mabi=lp64 -auxbase-strip arch/arm/lib/asm-offsets.s -g -Os -Wall
// -Wstrict-prototypes -Wno-format-security -Wno-format-nonliteral
// -Werror=date-time -std=gnu11 -fno-builtin -ffreestanding -fshort-wchar
// -fno-strict-aliasing -fno-stack-protector
// -fno-delete-null-pointer-checks -fmacro-prefix-map=./= -fstack-usage
// -fno-pic -ffunction-sections -fdata-sections -ffixed-r9 -fno-common
// -ffixed-x18 -fverbose-asm
// options enabled:  -faggressive-loop-optimizations -fassume-phsa
// -fasynchronous-unwind-tables -fauto-inc-dec -fbranch-count-reg
// -fcaller-saves -fcode-hoisting -fcombine-stack-adjustments
// -fcompare-elim -fcprop-registers -fcrossjumping -fcse-follow-jumps
// -fdata-sections -fdefer-pop -fdevirtualize -fdevirtualize-speculatively
// -fdwarf2-cfi-asm -fearly-inlining -feliminate-unused-debug-types
// -fexpensive-optimizations -fforward-propagate -ffp-int-builtin-inexact
// -ffunction-cse -ffunction-sections -fgcse -fgcse-lm -fgnu-runtime
// -fgnu-unique -fguess-branch-probability -fhoist-adjacent-loads -fident
// -fif-conversion -fif-conversion2 -findirect-inlining -finline
// -finline-atomics -finline-functions -finline-functions-called-once
// -finline-small-functions -fipa-bit-cp -fipa-cp -fipa-icf
// -fipa-icf-functions -fipa-icf-variables -fipa-profile -fipa-pure-const
// -fipa-ra -fipa-reference -fipa-reference-addressable -fipa-sra
// -fipa-stack-alignment -fipa-vrp -fira-hoist-pressure
// -fira-share-save-slots -fira-share-spill-slots
// -fisolate-erroneous-paths-dereference -fivopts -fkeep-static-consts
// -fleading-underscore -flifetime-dse -flra-remat -flto-odr-type-merging
// -fmath-errno -fmerge-constants -fmerge-debug-strings
// -fmove-loop-invariants -fomit-frame-pointer -foptimize-sibling-calls
// -fpartial-inlining -fpeephole -fpeephole2 -fplt -fprefetch-loop-arrays
// -free -freg-struct-return -freorder-blocks -freorder-functions
// -frerun-cse-after-loop -fsched-critical-path-heuristic
// -fsched-dep-count-heuristic -fsched-group-heuristic -fsched-interblock
// -fsched-last-insn-heuristic -fsched-pressure -fsched-rank-heuristic
// -fsched-spec -fsched-spec-insn-heuristic -fsched-stalled-insns-dep
// -fschedule-fusion -fschedule-insns2 -fsection-anchors
// -fsemantic-interposition -fshow-column -fshrink-wrap
// -fshrink-wrap-separate -fsigned-zeros -fsplit-ivs-in-unroller
// -fsplit-wide-types -fssa-backprop -fssa-phiopt -fstdarg-opt
// -fstore-merging -fstrict-volatile-bitfields -fsync-libcalls
// -fthread-jumps -ftoplevel-reorder -ftrapping-math -ftree-bit-ccp
// -ftree-builtin-call-dce -ftree-ccp -ftree-ch -ftree-coalesce-vars
// -ftree-copy-prop -ftree-cselim -ftree-dce -ftree-dominator-opts
// -ftree-dse -ftree-forwprop -ftree-fre -ftree-loop-if-convert
// -ftree-loop-im -ftree-loop-ivcanon -ftree-loop-optimize
// -ftree-parallelize-loops= -ftree-phiprop -ftree-pre -ftree-pta
// -ftree-reassoc -ftree-scev-cprop -ftree-sink -ftree-slsr -ftree-sra
// -ftree-switch-conversion -ftree-tail-merge -ftree-ter -ftree-vrp
// -funit-at-a-time -funwind-tables -fvar-tracking
// -fvar-tracking-assignments -fverbose-asm -fzero-initialized-in-bss
// -mfix-cortex-a53-835769 -mfix-cortex-a53-843419 -mglibc -mlittle-endian
// -momit-leaf-frame-pointer -mpc-relative-literal-loads -mstrict-align

	.text
.Ltext0:
	.section	.text.startup.main,"ax",@progbits
	.align	2
	.global	main
	.type	main, %function
main:
.LFB164:
	.file 1 "arch/arm/lib/asm-offsets.c"
	.loc 1 24 1 view -0
	.cfi_startproc
	.loc 1 208 2 view .LVU1
// arch/arm/lib/asm-offsets.c:209: }
	.loc 1 209 1 is_stmt 0 view .LVU2
	mov	w0, 0	//,
	ret	
	.cfi_endproc
.LFE164:
	.size	main, .-main
	.text
.Letext0:
	.file 2 "include/common.h"
	.file 3 "include/asm-generic/int-ll64.h"
	.file 4 "./arch/arm/include/asm/types.h"
	.file 5 "include/linux/types.h"
	.file 6 "include/errno.h"
	.file 7 "include/linux/string.h"
	.file 8 "include/efi.h"
	.file 9 "include/ide.h"
	.file 10 "include/part.h"
	.file 11 "include/flash.h"
	.file 12 "include/lmb.h"
	.file 13 "include/asm-generic/u-boot.h"
	.file 14 "./arch/arm/include/asm/u-boot-arm.h"
	.file 15 "include/image.h"
	.file 16 "include/init.h"
	.file 17 "include/net.h"
	.file 18 "include/environment.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.4byte	0x9ee
	.2byte	0x4
	.4byte	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.4byte	.LASF148
	.byte	0xc
	.4byte	.LASF149
	.4byte	.LASF150
	.4byte	.Ldebug_ranges0+0
	.8byte	0
	.4byte	.Ldebug_line0
	.uleb128 0x2
	.4byte	.LASF8
	.byte	0x2
	.byte	0xc
	.byte	0x18
	.4byte	0x35
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.4byte	.LASF0
	.uleb128 0x4
	.4byte	0x35
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.4byte	.LASF1
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.4byte	.LASF2
	.uleb128 0x5
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.4byte	.LASF3
	.uleb128 0x6
	.byte	0x8
	.4byte	0x63
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.4byte	.LASF4
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.4byte	.LASF5
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.4byte	.LASF6
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.4byte	.LASF7
	.uleb128 0x2
	.4byte	.LASF9
	.byte	0x3
	.byte	0x13
	.byte	0x17
	.4byte	0x35
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.4byte	.LASF10
	.uleb128 0x2
	.4byte	.LASF11
	.byte	0x3
	.byte	0x19
	.byte	0x16
	.4byte	0x6a
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.4byte	.LASF12
	.uleb128 0x7
	.string	"u8"
	.byte	0x3
	.byte	0x24
	.byte	0xf
	.4byte	0x7f
	.uleb128 0x4
	.4byte	0xa5
	.uleb128 0x7
	.string	"u32"
	.byte	0x3
	.byte	0x28
	.byte	0xf
	.4byte	0x92
	.uleb128 0x2
	.4byte	.LASF13
	.byte	0x4
	.byte	0x14
	.byte	0x1c
	.4byte	0x9e
	.uleb128 0x2
	.4byte	.LASF14
	.byte	0x4
	.byte	0x15
	.byte	0x1c
	.4byte	0x9e
	.uleb128 0x2
	.4byte	.LASF15
	.byte	0x5
	.byte	0x59
	.byte	0x19
	.4byte	0x48
	.uleb128 0x2
	.4byte	.LASF16
	.byte	0x5
	.byte	0x5b
	.byte	0x18
	.4byte	0x41
	.uleb128 0x2
	.4byte	.LASF17
	.byte	0x5
	.byte	0x69
	.byte	0x10
	.4byte	0x7f
	.uleb128 0x2
	.4byte	.LASF18
	.byte	0x5
	.byte	0x90
	.byte	0x19
	.4byte	0x92
	.uleb128 0x8
	.4byte	.LASF19
	.byte	0x6
	.byte	0xb
	.byte	0xc
	.4byte	0x4f
	.uleb128 0x9
	.byte	0x8
	.uleb128 0x8
	.4byte	.LASF20
	.byte	0x7
	.byte	0xb
	.byte	0xf
	.4byte	0x5d
	.uleb128 0x3
	.byte	0x1
	.byte	0x2
	.4byte	.LASF21
	.uleb128 0xa
	.4byte	0x63
	.4byte	0x135
	.uleb128 0xb
	.byte	0
	.uleb128 0xc
	.4byte	.LASF22
	.byte	0x8
	.2byte	0x178
	.byte	0xd
	.4byte	0x12a
	.uleb128 0xc
	.4byte	.LASF23
	.byte	0x8
	.2byte	0x17b
	.byte	0xd
	.4byte	0x12a
	.uleb128 0xc
	.4byte	.LASF24
	.byte	0x8
	.2byte	0x17b
	.byte	0x29
	.4byte	0x12a
	.uleb128 0xa
	.4byte	0xe5
	.4byte	0x167
	.uleb128 0xb
	.byte	0
	.uleb128 0x8
	.4byte	.LASF25
	.byte	0x9
	.byte	0xf
	.byte	0xe
	.4byte	0x15c
	.uleb128 0xa
	.4byte	0x35
	.4byte	0x183
	.uleb128 0xd
	.4byte	0x41
	.byte	0x5
	.byte	0
	.uleb128 0xe
	.4byte	.LASF28
	.byte	0x10
	.byte	0xa
	.byte	0xe
	.byte	0x8
	.4byte	0x1ab
	.uleb128 0xf
	.4byte	.LASF26
	.byte	0xa
	.byte	0xf
	.byte	0x8
	.4byte	0x5d
	.byte	0
	.uleb128 0xf
	.4byte	.LASF27
	.byte	0xa
	.byte	0x10
	.byte	0x8
	.4byte	0x1c4
	.byte	0x8
	.byte	0
	.uleb128 0x4
	.4byte	0x183
	.uleb128 0x10
	.4byte	0x4f
	.4byte	0x1c4
	.uleb128 0x11
	.4byte	0x4f
	.uleb128 0x11
	.4byte	0x4f
	.byte	0
	.uleb128 0x6
	.byte	0x8
	.4byte	0x1b0
	.uleb128 0xa
	.4byte	0x1ab
	.4byte	0x1d5
	.uleb128 0xb
	.byte	0
	.uleb128 0x4
	.4byte	0x1ca
	.uleb128 0x8
	.4byte	.LASF28
	.byte	0xa
	.byte	0xda
	.byte	0x20
	.4byte	0x1d5
	.uleb128 0x12
	.2byte	0x1218
	.byte	0xb
	.byte	0x12
	.byte	0x9
	.4byte	0x233
	.uleb128 0xf
	.4byte	.LASF29
	.byte	0xb
	.byte	0x13
	.byte	0x8
	.4byte	0xe5
	.byte	0
	.uleb128 0xf
	.4byte	.LASF30
	.byte	0xb
	.byte	0x14
	.byte	0x9
	.4byte	0xd9
	.byte	0x8
	.uleb128 0xf
	.4byte	.LASF31
	.byte	0xb
	.byte	0x15
	.byte	0x8
	.4byte	0xe5
	.byte	0x10
	.uleb128 0xf
	.4byte	.LASF32
	.byte	0xb
	.byte	0x16
	.byte	0x8
	.4byte	0x233
	.byte	0x18
	.uleb128 0x13
	.4byte	.LASF33
	.byte	0xb
	.byte	0x17
	.byte	0x8
	.4byte	0x244
	.2byte	0x1018
	.byte	0
	.uleb128 0xa
	.4byte	0xe5
	.4byte	0x244
	.uleb128 0x14
	.4byte	0x41
	.2byte	0x1ff
	.byte	0
	.uleb128 0xa
	.4byte	0x29
	.4byte	0x255
	.uleb128 0x14
	.4byte	0x41
	.2byte	0x1ff
	.byte	0
	.uleb128 0x2
	.4byte	.LASF34
	.byte	0xb
	.byte	0x36
	.byte	0x3
	.4byte	0x1e6
	.uleb128 0xa
	.4byte	0x255
	.4byte	0x26c
	.uleb128 0xb
	.byte	0
	.uleb128 0x8
	.4byte	.LASF35
	.byte	0xb
	.byte	0x38
	.byte	0x15
	.4byte	0x261
	.uleb128 0x3
	.byte	0x10
	.byte	0x4
	.4byte	.LASF36
	.uleb128 0xe
	.4byte	.LASF37
	.byte	0x10
	.byte	0xc
	.byte	0xf
	.byte	0x8
	.4byte	0x2a7
	.uleb128 0xf
	.4byte	.LASF38
	.byte	0xc
	.byte	0x10
	.byte	0xe
	.4byte	0xc1
	.byte	0
	.uleb128 0xf
	.4byte	.LASF29
	.byte	0xc
	.byte	0x11
	.byte	0xe
	.4byte	0xcd
	.byte	0x8
	.byte	0
	.uleb128 0xe
	.4byte	.LASF39
	.byte	0xa0
	.byte	0xc
	.byte	0x14
	.byte	0x8
	.4byte	0x2dc
	.uleb128 0x15
	.string	"cnt"
	.byte	0xc
	.byte	0x15
	.byte	0x10
	.4byte	0x41
	.byte	0
	.uleb128 0xf
	.4byte	.LASF29
	.byte	0xc
	.byte	0x16
	.byte	0xe
	.4byte	0xcd
	.byte	0x8
	.uleb128 0xf
	.4byte	.LASF40
	.byte	0xc
	.byte	0x17
	.byte	0x16
	.4byte	0x2dc
	.byte	0x10
	.byte	0
	.uleb128 0xa
	.4byte	0x27f
	.4byte	0x2ec
	.uleb128 0xd
	.4byte	0x41
	.byte	0x8
	.byte	0
	.uleb128 0x16
	.string	"lmb"
	.2byte	0x140
	.byte	0xc
	.byte	0x1a
	.byte	0x8
	.4byte	0x315
	.uleb128 0xf
	.4byte	.LASF41
	.byte	0xc
	.byte	0x1b
	.byte	0x14
	.4byte	0x2a7
	.byte	0
	.uleb128 0xf
	.4byte	.LASF42
	.byte	0xc
	.byte	0x1c
	.byte	0x14
	.4byte	0x2a7
	.byte	0xa0
	.byte	0
	.uleb128 0x17
	.string	"lmb"
	.byte	0xc
	.byte	0x1f
	.byte	0x13
	.4byte	0x2ec
	.uleb128 0x18
	.byte	0x10
	.byte	0xd
	.byte	0x59
	.byte	0x2
	.4byte	0x345
	.uleb128 0xf
	.4byte	.LASF32
	.byte	0xd
	.byte	0x5a
	.byte	0xf
	.4byte	0xc1
	.byte	0
	.uleb128 0xf
	.4byte	.LASF29
	.byte	0xd
	.byte	0x5b
	.byte	0xf
	.4byte	0xcd
	.byte	0x8
	.byte	0
	.uleb128 0xe
	.4byte	.LASF43
	.byte	0x98
	.byte	0xd
	.byte	0x1a
	.byte	0x10
	.4byte	0x44a
	.uleb128 0xf
	.4byte	.LASF44
	.byte	0xd
	.byte	0x1b
	.byte	0x10
	.4byte	0x41
	.byte	0
	.uleb128 0xf
	.4byte	.LASF45
	.byte	0xd
	.byte	0x1c
	.byte	0xe
	.4byte	0xcd
	.byte	0x8
	.uleb128 0xf
	.4byte	.LASF46
	.byte	0xd
	.byte	0x1d
	.byte	0x10
	.4byte	0x41
	.byte	0x10
	.uleb128 0xf
	.4byte	.LASF47
	.byte	0xd
	.byte	0x1e
	.byte	0x10
	.4byte	0x41
	.byte	0x18
	.uleb128 0xf
	.4byte	.LASF48
	.byte	0xd
	.byte	0x1f
	.byte	0x10
	.4byte	0x41
	.byte	0x20
	.uleb128 0xf
	.4byte	.LASF49
	.byte	0xd
	.byte	0x20
	.byte	0x10
	.4byte	0x41
	.byte	0x28
	.uleb128 0xf
	.4byte	.LASF50
	.byte	0xd
	.byte	0x21
	.byte	0x10
	.4byte	0x41
	.byte	0x30
	.uleb128 0xf
	.4byte	.LASF51
	.byte	0xd
	.byte	0x23
	.byte	0x10
	.4byte	0x41
	.byte	0x38
	.uleb128 0xf
	.4byte	.LASF52
	.byte	0xd
	.byte	0x24
	.byte	0x10
	.4byte	0x41
	.byte	0x40
	.uleb128 0xf
	.4byte	.LASF53
	.byte	0xd
	.byte	0x25
	.byte	0x10
	.4byte	0x41
	.byte	0x48
	.uleb128 0xf
	.4byte	.LASF54
	.byte	0xd
	.byte	0x30
	.byte	0x10
	.4byte	0x41
	.byte	0x50
	.uleb128 0xf
	.4byte	.LASF55
	.byte	0xd
	.byte	0x31
	.byte	0x10
	.4byte	0x41
	.byte	0x58
	.uleb128 0xf
	.4byte	.LASF56
	.byte	0xd
	.byte	0x32
	.byte	0x10
	.4byte	0x173
	.byte	0x60
	.uleb128 0xf
	.4byte	.LASF57
	.byte	0xd
	.byte	0x33
	.byte	0x11
	.4byte	0x48
	.byte	0x66
	.uleb128 0xf
	.4byte	.LASF58
	.byte	0xd
	.byte	0x34
	.byte	0x10
	.4byte	0x41
	.byte	0x68
	.uleb128 0xf
	.4byte	.LASF59
	.byte	0xd
	.byte	0x35
	.byte	0x10
	.4byte	0x41
	.byte	0x70
	.uleb128 0xf
	.4byte	.LASF60
	.byte	0xd
	.byte	0x56
	.byte	0x10
	.4byte	0xe5
	.byte	0x78
	.uleb128 0xf
	.4byte	.LASF61
	.byte	0xd
	.byte	0x57
	.byte	0x10
	.4byte	0xe5
	.byte	0x80
	.uleb128 0xf
	.4byte	.LASF62
	.byte	0xd
	.byte	0x5c
	.byte	0x4
	.4byte	0x44a
	.byte	0x88
	.byte	0
	.uleb128 0xa
	.4byte	0x321
	.4byte	0x45a
	.uleb128 0xd
	.4byte	0x41
	.byte	0
	.byte	0
	.uleb128 0x2
	.4byte	.LASF63
	.byte	0xd
	.byte	0x5e
	.byte	0x3
	.4byte	0x345
	.uleb128 0x8
	.4byte	.LASF64
	.byte	0xe
	.byte	0x12
	.byte	0xe
	.4byte	0xe5
	.uleb128 0x8
	.4byte	.LASF65
	.byte	0xe
	.byte	0x13
	.byte	0xe
	.4byte	0xe5
	.uleb128 0x8
	.4byte	.LASF66
	.byte	0xe
	.byte	0x14
	.byte	0xe
	.4byte	0xe5
	.uleb128 0x8
	.4byte	.LASF67
	.byte	0xe
	.byte	0x15
	.byte	0xe
	.4byte	0xe5
	.uleb128 0x8
	.4byte	.LASF68
	.byte	0xe
	.byte	0x16
	.byte	0xe
	.4byte	0xe5
	.uleb128 0x8
	.4byte	.LASF69
	.byte	0xe
	.byte	0x17
	.byte	0xe
	.4byte	0xe5
	.uleb128 0x8
	.4byte	.LASF70
	.byte	0xe
	.byte	0x18
	.byte	0xe
	.4byte	0xe5
	.uleb128 0x19
	.4byte	.LASF71
	.byte	0x40
	.byte	0xf
	.2byte	0x13f
	.byte	0x10
	.4byte	0x571
	.uleb128 0x1a
	.4byte	.LASF72
	.byte	0xf
	.2byte	0x140
	.byte	0xa
	.4byte	0xfd
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF73
	.byte	0xf
	.2byte	0x141
	.byte	0xa
	.4byte	0xfd
	.byte	0x4
	.uleb128 0x1a
	.4byte	.LASF74
	.byte	0xf
	.2byte	0x142
	.byte	0xa
	.4byte	0xfd
	.byte	0x8
	.uleb128 0x1a
	.4byte	.LASF75
	.byte	0xf
	.2byte	0x143
	.byte	0xa
	.4byte	0xfd
	.byte	0xc
	.uleb128 0x1a
	.4byte	.LASF76
	.byte	0xf
	.2byte	0x144
	.byte	0xa
	.4byte	0xfd
	.byte	0x10
	.uleb128 0x1a
	.4byte	.LASF77
	.byte	0xf
	.2byte	0x145
	.byte	0xa
	.4byte	0xfd
	.byte	0x14
	.uleb128 0x1a
	.4byte	.LASF78
	.byte	0xf
	.2byte	0x146
	.byte	0xa
	.4byte	0xfd
	.byte	0x18
	.uleb128 0x1a
	.4byte	.LASF79
	.byte	0xf
	.2byte	0x147
	.byte	0xb
	.4byte	0xf1
	.byte	0x1c
	.uleb128 0x1a
	.4byte	.LASF80
	.byte	0xf
	.2byte	0x148
	.byte	0xb
	.4byte	0xf1
	.byte	0x1d
	.uleb128 0x1a
	.4byte	.LASF81
	.byte	0xf
	.2byte	0x149
	.byte	0xb
	.4byte	0xf1
	.byte	0x1e
	.uleb128 0x1a
	.4byte	.LASF82
	.byte	0xf
	.2byte	0x14a
	.byte	0xb
	.4byte	0xf1
	.byte	0x1f
	.uleb128 0x1a
	.4byte	.LASF83
	.byte	0xf
	.2byte	0x14b
	.byte	0xb
	.4byte	0x571
	.byte	0x20
	.byte	0
	.uleb128 0xa
	.4byte	0xf1
	.4byte	0x581
	.uleb128 0xd
	.4byte	0x41
	.byte	0x1f
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF84
	.byte	0xf
	.2byte	0x14c
	.byte	0x3
	.4byte	0x4ba
	.uleb128 0x19
	.4byte	.LASF85
	.byte	0x30
	.byte	0xf
	.2byte	0x14e
	.byte	0x10
	.4byte	0x61a
	.uleb128 0x1a
	.4byte	.LASF32
	.byte	0xf
	.2byte	0x14f
	.byte	0x9
	.4byte	0xe5
	.byte	0
	.uleb128 0x1c
	.string	"end"
	.byte	0xf
	.2byte	0x14f
	.byte	0x10
	.4byte	0xe5
	.byte	0x8
	.uleb128 0x1a
	.4byte	.LASF86
	.byte	0xf
	.2byte	0x150
	.byte	0x9
	.4byte	0xe5
	.byte	0x10
	.uleb128 0x1a
	.4byte	.LASF87
	.byte	0xf
	.2byte	0x150
	.byte	0x16
	.4byte	0xe5
	.byte	0x18
	.uleb128 0x1a
	.4byte	.LASF88
	.byte	0xf
	.2byte	0x151
	.byte	0x9
	.4byte	0xe5
	.byte	0x20
	.uleb128 0x1a
	.4byte	.LASF89
	.byte	0xf
	.2byte	0x152
	.byte	0xb
	.4byte	0xf1
	.byte	0x28
	.uleb128 0x1a
	.4byte	.LASF90
	.byte	0xf
	.2byte	0x152
	.byte	0x11
	.4byte	0xf1
	.byte	0x29
	.uleb128 0x1c
	.string	"os"
	.byte	0xf
	.2byte	0x152
	.byte	0x17
	.4byte	0xf1
	.byte	0x2a
	.uleb128 0x1a
	.4byte	.LASF91
	.byte	0xf
	.2byte	0x153
	.byte	0xb
	.4byte	0xf1
	.byte	0x2b
	.byte	0
	.uleb128 0x1b
	.4byte	.LASF92
	.byte	0xf
	.2byte	0x154
	.byte	0x3
	.4byte	0x58e
	.uleb128 0x1d
	.4byte	.LASF93
	.2byte	0x218
	.byte	0xf
	.2byte	0x15a
	.byte	0x10
	.4byte	0x723
	.uleb128 0x1a
	.4byte	.LASF94
	.byte	0xf
	.2byte	0x160
	.byte	0x12
	.4byte	0x723
	.byte	0
	.uleb128 0x1a
	.4byte	.LASF95
	.byte	0xf
	.2byte	0x161
	.byte	0x11
	.4byte	0x581
	.byte	0x8
	.uleb128 0x1a
	.4byte	.LASF96
	.byte	0xf
	.2byte	0x162
	.byte	0x9
	.4byte	0xe5
	.byte	0x48
	.uleb128 0x1c
	.string	"os"
	.byte	0xf
	.2byte	0x179
	.byte	0xf
	.4byte	0x61a
	.byte	0x50
	.uleb128 0x1c
	.string	"ep"
	.byte	0xf
	.2byte	0x17a
	.byte	0x9
	.4byte	0xe5
	.byte	0x80
	.uleb128 0x1a
	.4byte	.LASF97
	.byte	0xf
	.2byte	0x17c
	.byte	0x9
	.4byte	0xe5
	.byte	0x88
	.uleb128 0x1a
	.4byte	.LASF98
	.byte	0xf
	.2byte	0x17c
	.byte	0x13
	.4byte	0xe5
	.byte	0x90
	.uleb128 0x1a
	.4byte	.LASF99
	.byte	0xf
	.2byte	0x17e
	.byte	0x9
	.4byte	0x5d
	.byte	0x98
	.uleb128 0x1a
	.4byte	.LASF100
	.byte	0xf
	.2byte	0x17f
	.byte	0x9
	.4byte	0xe5
	.byte	0xa0
	.uleb128 0x1a
	.4byte	.LASF101
	.byte	0xf
	.2byte	0x181
	.byte	0x9
	.4byte	0xe5
	.byte	0xa8
	.uleb128 0x1a
	.4byte	.LASF102
	.byte	0xf
	.2byte	0x182
	.byte	0x9
	.4byte	0xe5
	.byte	0xb0
	.uleb128 0x1a
	.4byte	.LASF103
	.byte	0xf
	.2byte	0x183
	.byte	0x9
	.4byte	0xe5
	.byte	0xb8
	.uleb128 0x1a
	.4byte	.LASF104
	.byte	0xf
	.2byte	0x184
	.byte	0x9
	.4byte	0xe5
	.byte	0xc0
	.uleb128 0x1c
	.string	"kbd"
	.byte	0xf
	.2byte	0x185
	.byte	0x9
	.4byte	0x729
	.byte	0xc8
	.uleb128 0x1a
	.4byte	.LASF105
	.byte	0xf
	.2byte	0x188
	.byte	0x7
	.4byte	0x4f
	.byte	0xd0
	.uleb128 0x1a
	.4byte	.LASF106
	.byte	0xf
	.2byte	0x195
	.byte	0x7
	.4byte	0x4f
	.byte	0xd4
	.uleb128 0x1c
	.string	"lmb"
	.byte	0xf
	.2byte	0x198
	.byte	0xd
	.4byte	0x2ec
	.byte	0xd8
	.byte	0
	.uleb128 0x6
	.byte	0x8
	.4byte	0x581
	.uleb128 0x6
	.byte	0x8
	.4byte	0x45a
	.uleb128 0x1b
	.4byte	.LASF107
	.byte	0xf
	.2byte	0x19a
	.byte	0x3
	.4byte	0x627
	.uleb128 0xc
	.4byte	.LASF108
	.byte	0xf
	.2byte	0x19c
	.byte	0x18
	.4byte	0x72f
	.uleb128 0xa
	.4byte	0x63
	.4byte	0x759
	.uleb128 0xd
	.4byte	0x41
	.byte	0x1f
	.byte	0
	.uleb128 0x8
	.4byte	.LASF109
	.byte	0x10
	.byte	0x81
	.byte	0xe
	.4byte	0xe5
	.uleb128 0xa
	.4byte	0xa5
	.4byte	0x770
	.uleb128 0xb
	.byte	0
	.uleb128 0x8
	.4byte	.LASF110
	.byte	0x2
	.byte	0x5f
	.byte	0xb
	.4byte	0x765
	.uleb128 0x8
	.4byte	.LASF111
	.byte	0x2
	.byte	0x60
	.byte	0xb
	.4byte	0x765
	.uleb128 0x8
	.4byte	.LASF112
	.byte	0x2
	.byte	0x87
	.byte	0xe
	.4byte	0xe5
	.uleb128 0x8
	.4byte	.LASF113
	.byte	0x2
	.byte	0x88
	.byte	0xe
	.4byte	0xe5
	.uleb128 0x8
	.4byte	.LASF114
	.byte	0x2
	.byte	0x89
	.byte	0xe
	.4byte	0xe5
	.uleb128 0xe
	.4byte	.LASF115
	.byte	0x4
	.byte	0x11
	.byte	0x2f
	.byte	0x8
	.4byte	0x7c7
	.uleb128 0xf
	.4byte	.LASF116
	.byte	0x11
	.byte	0x30
	.byte	0x9
	.4byte	0xfd
	.byte	0
	.byte	0
	.uleb128 0x6
	.byte	0x8
	.4byte	0x29
	.uleb128 0x1e
	.4byte	0x7dd
	.uleb128 0x11
	.4byte	0x115
	.uleb128 0x11
	.4byte	0x4f
	.byte	0
	.uleb128 0xc
	.4byte	.LASF117
	.byte	0x11
	.2byte	0x11c
	.byte	0xf
	.4byte	0x7ea
	.uleb128 0x6
	.byte	0x8
	.4byte	0x7cd
	.uleb128 0xa
	.4byte	0xa5
	.4byte	0x800
	.uleb128 0xd
	.4byte	0x41
	.byte	0x5
	.byte	0
	.uleb128 0xc
	.4byte	.LASF118
	.byte	0x11
	.2byte	0x1fc
	.byte	0x17
	.4byte	0x7ac
	.uleb128 0xc
	.4byte	.LASF119
	.byte	0x11
	.2byte	0x1fd
	.byte	0x17
	.4byte	0x7ac
	.uleb128 0xc
	.4byte	.LASF120
	.byte	0x11
	.2byte	0x1ff
	.byte	0x17
	.4byte	0x7ac
	.uleb128 0xc
	.4byte	.LASF121
	.byte	0x11
	.2byte	0x204
	.byte	0xd
	.4byte	0x749
	.uleb128 0xc
	.4byte	.LASF122
	.byte	0x11
	.2byte	0x205
	.byte	0xd
	.4byte	0x749
	.uleb128 0xa
	.4byte	0x63
	.4byte	0x851
	.uleb128 0xd
	.4byte	0x41
	.byte	0x3f
	.byte	0
	.uleb128 0xc
	.4byte	.LASF123
	.byte	0x11
	.2byte	0x206
	.byte	0xd
	.4byte	0x841
	.uleb128 0xc
	.4byte	.LASF124
	.byte	0x11
	.2byte	0x208
	.byte	0xc
	.4byte	0x7f0
	.uleb128 0xc
	.4byte	.LASF125
	.byte	0x11
	.2byte	0x209
	.byte	0xc
	.4byte	0x7f0
	.uleb128 0xc
	.4byte	.LASF126
	.byte	0x11
	.2byte	0x20a
	.byte	0x17
	.4byte	0x7ac
	.uleb128 0xc
	.4byte	.LASF127
	.byte	0x11
	.2byte	0x20b
	.byte	0x17
	.4byte	0x7ac
	.uleb128 0xc
	.4byte	.LASF128
	.byte	0x11
	.2byte	0x20c
	.byte	0x10
	.4byte	0x7c7
	.uleb128 0xa
	.4byte	0x7c7
	.4byte	0x8af
	.uleb128 0xd
	.4byte	0x41
	.byte	0x3
	.byte	0
	.uleb128 0xc
	.4byte	.LASF129
	.byte	0x11
	.2byte	0x20d
	.byte	0x10
	.4byte	0x89f
	.uleb128 0xc
	.4byte	.LASF130
	.byte	0x11
	.2byte	0x20e
	.byte	0x10
	.4byte	0x7c7
	.uleb128 0xc
	.4byte	.LASF131
	.byte	0x11
	.2byte	0x20f
	.byte	0xd
	.4byte	0x4f
	.uleb128 0xa
	.4byte	0xb0
	.4byte	0x8e6
	.uleb128 0xd
	.4byte	0x41
	.byte	0x5
	.byte	0
	.uleb128 0x4
	.4byte	0x8d6
	.uleb128 0xc
	.4byte	.LASF132
	.byte	0x11
	.2byte	0x210
	.byte	0x12
	.4byte	0x8e6
	.uleb128 0xc
	.4byte	.LASF133
	.byte	0x11
	.2byte	0x211
	.byte	0x12
	.4byte	0x8e6
	.uleb128 0xc
	.4byte	.LASF134
	.byte	0x11
	.2byte	0x215
	.byte	0x10
	.4byte	0xd9
	.uleb128 0xc
	.4byte	.LASF135
	.byte	0x11
	.2byte	0x216
	.byte	0x10
	.4byte	0xd9
	.uleb128 0xc
	.4byte	.LASF136
	.byte	0x11
	.2byte	0x218
	.byte	0xd
	.4byte	0x4f
	.uleb128 0xa
	.4byte	0x63
	.4byte	0x93d
	.uleb128 0x14
	.4byte	0x41
	.2byte	0x3ff
	.byte	0
	.uleb128 0xc
	.4byte	.LASF137
	.byte	0x11
	.2byte	0x21f
	.byte	0xd
	.4byte	0x92c
	.uleb128 0xc
	.4byte	.LASF138
	.byte	0x11
	.2byte	0x221
	.byte	0xd
	.4byte	0x123
	.uleb128 0xc
	.4byte	.LASF139
	.byte	0x11
	.2byte	0x223
	.byte	0xc
	.4byte	0xb5
	.uleb128 0xc
	.4byte	.LASF140
	.byte	0x11
	.2byte	0x225
	.byte	0xc
	.4byte	0xb5
	.uleb128 0xc
	.4byte	.LASF141
	.byte	0x11
	.2byte	0x22d
	.byte	0x17
	.4byte	0x7ac
	.uleb128 0x1f
	.4byte	.LASF151
	.byte	0x7
	.byte	0x4
	.4byte	0x6a
	.byte	0x11
	.2byte	0x285
	.byte	0x6
	.4byte	0x9aa
	.uleb128 0x20
	.4byte	.LASF142
	.byte	0
	.uleb128 0x20
	.4byte	.LASF143
	.byte	0x1
	.uleb128 0x20
	.4byte	.LASF144
	.byte	0x2
	.uleb128 0x20
	.4byte	.LASF145
	.byte	0x3
	.byte	0
	.uleb128 0xc
	.4byte	.LASF146
	.byte	0x11
	.2byte	0x28b
	.byte	0x1c
	.4byte	0x97e
	.uleb128 0xa
	.4byte	0x3c
	.4byte	0x9c2
	.uleb128 0xb
	.byte	0
	.uleb128 0x4
	.4byte	0x9b7
	.uleb128 0x8
	.4byte	.LASF147
	.byte	0x12
	.byte	0x9f
	.byte	0x1c
	.4byte	0x9c2
	.uleb128 0x21
	.4byte	.LASF152
	.byte	0x1
	.byte	0x17
	.byte	0x5
	.4byte	0x4f
	.8byte	.LFB164
	.8byte	.LFE164-.LFB164
	.uleb128 0x1
	.byte	0x9c
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x1
	.byte	0x1
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x21
	.byte	0
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x13
	.byte	0x1
	.uleb128 0xb
	.uleb128 0x5
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x13
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0x5
	.byte	0
	.byte	0
	.uleb128 0x14
	.uleb128 0x21
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2f
	.uleb128 0x5
	.byte	0
	.byte	0
	.uleb128 0x15
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x16
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0xb
	.uleb128 0x5
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x17
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3c
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x18
	.uleb128 0x13
	.byte	0x1
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x19
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1a
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x1b
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1c
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x1d
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0x5
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1e
	.uleb128 0x15
	.byte	0x1
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x1f
	.uleb128 0x4
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0x5
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x20
	.uleb128 0x28
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x21
	.uleb128 0x2e
	.byte	0
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.4byte	0x2c
	.2byte	0x2
	.4byte	.Ldebug_info0
	.byte	0x8
	.byte	0
	.2byte	0
	.2byte	0
	.8byte	.LFB164
	.8byte	.LFE164-.LFB164
	.8byte	0
	.8byte	0
	.section	.debug_ranges,"",@progbits
.Ldebug_ranges0:
	.8byte	.LFB164
	.8byte	.LFE164
	.8byte	0
	.8byte	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF16:
	.string	"ulong"
.LASF61:
	.string	"bi_boot_params"
.LASF118:
	.string	"net_gateway"
.LASF145:
	.string	"NETLOOP_FAIL"
.LASF45:
	.string	"bi_memsize"
.LASF76:
	.string	"ih_load"
.LASF148:
	.ascii	"GNU C11 9.2.1 20191025 -mstrict-align -march=armv8-"
	.string	"a -mlittle-endian -mabi=lp64 -g -Os -std=gnu11 -fno-builtin -ffreestanding -fshort-wchar -fno-strict-aliasing -fno-stack-protector -fno-delete-null-pointer-checks -fstack-usage -fno-pic -ffunction-sections -fdata-sections -ffixed-r9 -fno-common -ffixed-x18"
.LASF120:
	.string	"net_dns_server"
.LASF143:
	.string	"NETLOOP_RESTART"
.LASF90:
	.string	"type"
.LASF89:
	.string	"comp"
.LASF27:
	.string	"select_hwpart"
.LASF65:
	.string	"FIQ_STACK_START"
.LASF133:
	.string	"net_null_ethaddr"
.LASF12:
	.string	"long long unsigned int"
.LASF24:
	.string	"_binary_u_boot_bin_end"
.LASF37:
	.string	"lmb_property"
.LASF122:
	.string	"net_hostname"
.LASF6:
	.string	"long long int"
.LASF7:
	.string	"signed char"
.LASF72:
	.string	"ih_magic"
.LASF60:
	.string	"bi_arch_number"
.LASF94:
	.string	"legacy_hdr_os"
.LASF102:
	.string	"initrd_end"
.LASF93:
	.string	"bootm_headers"
.LASF108:
	.string	"images"
.LASF106:
	.string	"state"
.LASF3:
	.string	"long int"
.LASF18:
	.string	"__be32"
.LASF69:
	.string	"_datarelro_start_ofs"
.LASF25:
	.string	"ide_bus_offset"
.LASF92:
	.string	"image_info_t"
.LASF111:
	.string	"__dtb_dt_spl_begin"
.LASF134:
	.string	"net_our_vlan"
.LASF22:
	.string	"image_base"
.LASF30:
	.string	"sector_count"
.LASF144:
	.string	"NETLOOP_SUCCESS"
.LASF131:
	.string	"net_rx_packet_len"
.LASF105:
	.string	"verify"
.LASF23:
	.string	"_binary_u_boot_bin_start"
.LASF150:
	.string	"/home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/u-boot"
.LASF140:
	.string	"net_boot_file_expected_size_in_blocks"
.LASF119:
	.string	"net_netmask"
.LASF149:
	.string	"arch/arm/lib/asm-offsets.c"
.LASF112:
	.string	"load_addr"
.LASF41:
	.string	"memory"
.LASF135:
	.string	"net_native_vlan"
.LASF70:
	.string	"IRQ_STACK_START_IN"
.LASF5:
	.string	"unsigned int"
.LASF81:
	.string	"ih_type"
.LASF77:
	.string	"ih_ep"
.LASF63:
	.string	"bd_t"
.LASF121:
	.string	"net_nis_domain"
.LASF99:
	.string	"ft_addr"
.LASF9:
	.string	"__u8"
.LASF1:
	.string	"long unsigned int"
.LASF11:
	.string	"__u32"
.LASF59:
	.string	"bi_busfreq"
.LASF26:
	.string	"name"
.LASF78:
	.string	"ih_dcrc"
.LASF54:
	.string	"bi_bootflags"
.LASF29:
	.string	"size"
.LASF2:
	.string	"short unsigned int"
.LASF138:
	.string	"net_boot_file_name_explicit"
.LASF116:
	.string	"s_addr"
.LASF101:
	.string	"initrd_start"
.LASF91:
	.string	"arch"
.LASF95:
	.string	"legacy_hdr_os_copy"
.LASF35:
	.string	"flash_info"
.LASF55:
	.string	"bi_ip_addr"
.LASF85:
	.string	"image_info"
.LASF56:
	.string	"bi_enetaddr"
.LASF151:
	.string	"net_loop_state"
.LASF19:
	.string	"errno"
.LASF88:
	.string	"load"
.LASF38:
	.string	"base"
.LASF132:
	.string	"net_bcast_ethaddr"
.LASF114:
	.string	"save_size"
.LASF123:
	.string	"net_root_path"
.LASF79:
	.string	"ih_os"
.LASF113:
	.string	"save_addr"
.LASF51:
	.string	"bi_arm_freq"
.LASF43:
	.string	"bd_info"
.LASF15:
	.string	"ushort"
.LASF84:
	.string	"image_header_t"
.LASF107:
	.string	"bootm_headers_t"
.LASF42:
	.string	"reserved"
.LASF8:
	.string	"uchar"
.LASF20:
	.string	"___strtok"
.LASF46:
	.string	"bi_flashstart"
.LASF139:
	.string	"net_boot_file_size"
.LASF86:
	.string	"image_start"
.LASF39:
	.string	"lmb_region"
.LASF146:
	.string	"net_state"
.LASF82:
	.string	"ih_comp"
.LASF100:
	.string	"ft_len"
.LASF62:
	.string	"bi_dram"
.LASF21:
	.string	"_Bool"
.LASF64:
	.string	"IRQ_STACK_START"
.LASF0:
	.string	"unsigned char"
.LASF75:
	.string	"ih_size"
.LASF127:
	.string	"net_server_ip"
.LASF97:
	.string	"rd_start"
.LASF126:
	.string	"net_ip"
.LASF10:
	.string	"short int"
.LASF50:
	.string	"bi_sramsize"
.LASF98:
	.string	"rd_end"
.LASF96:
	.string	"legacy_hdr_valid"
.LASF130:
	.string	"net_rx_packet"
.LASF110:
	.string	"__dtb_dt_begin"
.LASF52:
	.string	"bi_dsp_freq"
.LASF109:
	.string	"monitor_flash_len"
.LASF125:
	.string	"net_server_ethaddr"
.LASF67:
	.string	"_datarelrolocal_start_ofs"
.LASF66:
	.string	"_datarel_start_ofs"
.LASF36:
	.string	"long double"
.LASF4:
	.string	"char"
.LASF47:
	.string	"bi_flashsize"
.LASF71:
	.string	"image_header"
.LASF147:
	.string	"default_environment"
.LASF13:
	.string	"phys_addr_t"
.LASF49:
	.string	"bi_sramstart"
.LASF87:
	.string	"image_len"
.LASF31:
	.string	"flash_id"
.LASF74:
	.string	"ih_time"
.LASF124:
	.string	"net_ethaddr"
.LASF57:
	.string	"bi_ethspeed"
.LASF28:
	.string	"block_drvr"
.LASF40:
	.string	"region"
.LASF136:
	.string	"net_restart_wrap"
.LASF142:
	.string	"NETLOOP_CONTINUE"
.LASF58:
	.string	"bi_intfreq"
.LASF104:
	.string	"cmdline_end"
.LASF14:
	.string	"phys_size_t"
.LASF34:
	.string	"flash_info_t"
.LASF137:
	.string	"net_boot_file_name"
.LASF73:
	.string	"ih_hcrc"
.LASF17:
	.string	"uint8_t"
.LASF33:
	.string	"protect"
.LASF141:
	.string	"net_ping_ip"
.LASF129:
	.string	"net_rx_packets"
.LASF83:
	.string	"ih_name"
.LASF53:
	.string	"bi_ddr_freq"
.LASF44:
	.string	"bi_memstart"
.LASF32:
	.string	"start"
.LASF152:
	.string	"main"
.LASF80:
	.string	"ih_arch"
.LASF48:
	.string	"bi_flashoffset"
.LASF68:
	.string	"_datarellocal_start_ofs"
.LASF117:
	.string	"push_packet"
.LASF128:
	.string	"net_tx_packet"
.LASF103:
	.string	"cmdline_start"
.LASF115:
	.string	"in_addr"
	.ident	"GCC: (GNU Toolchain for the A-profile Architecture 9.2-2019.12 (arm-9.10)) 9.2.1 20191025"
	.section	.note.GNU-stack,"",@progbits

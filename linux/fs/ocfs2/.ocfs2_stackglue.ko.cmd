cmd_fs/ocfs2/ocfs2_stackglue.ko := /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-ld -r  -EL  -maarch64elf  --build-id  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds -o fs/ocfs2/ocfs2_stackglue.ko fs/ocfs2/ocfs2_stackglue.o fs/ocfs2/ocfs2_stackglue.mod.o;  true
cmd_fs/isofs/isofs.ko := /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-ld -r  -EL  -maarch64elf  --build-id  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds -o fs/isofs/isofs.ko fs/isofs/isofs.o fs/isofs/isofs.mod.o;  true
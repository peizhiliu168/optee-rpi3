cmd_drivers/bluetooth/bfusb.ko := /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-ld -r  -EL  -maarch64elf  --build-id  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds -o drivers/bluetooth/bfusb.ko drivers/bluetooth/bfusb.o drivers/bluetooth/bfusb.mod.o;  true
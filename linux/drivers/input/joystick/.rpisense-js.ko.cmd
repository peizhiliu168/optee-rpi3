cmd_drivers/input/joystick/rpisense-js.ko := /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-ld -r  -EL  -maarch64elf  --build-id  -T ./scripts/module-common.lds -T ./arch/arm64/kernel/module.lds -o drivers/input/joystick/rpisense-js.ko drivers/input/joystick/rpisense-js.o drivers/input/joystick/rpisense-js.mod.o;  true
cmd_drivers/firmware/efi/libstub/lib-fdt_rw.stub.o := /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-strip --strip-debug -o drivers/firmware/efi/libstub/lib-fdt_rw.stub.o drivers/firmware/efi/libstub/lib-fdt_rw.o; if /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-objdump -r drivers/firmware/efi/libstub/lib-fdt_rw.stub.o | grep R_AARCH64_ABS; then echo "drivers/firmware/efi/libstub/lib-fdt_rw.stub.o: absolute symbol references not allowed in the EFI stub" >&2; /bin/false; fi; /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-objcopy --prefix-alloc-sections=.init --prefix-symbols=__efistub_ drivers/firmware/efi/libstub/lib-fdt_rw.o drivers/firmware/efi/libstub/lib-fdt_rw.stub.o
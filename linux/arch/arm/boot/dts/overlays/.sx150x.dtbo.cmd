cmd_arch/arm64/boot/dts/overlays/sx150x.dtbo := mkdir -p arch/arm64/boot/dts/overlays/ ; /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-gcc -E -Wp,-MD,arch/arm64/boot/dts/overlays/.sx150x.dtbo.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm64/boot/dts/overlays/.sx150x.dtbo.dts.tmp arch/arm64/boot/dts/overlays/sx150x-overlay.dts ; ./scripts/dtc/dtc -@ -H epapr -O dtb -o arch/arm64/boot/dts/overlays/sx150x.dtbo -b 0 -i arch/arm64/boot/dts/overlays/ -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-gpios_property -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg  -Wno-interrupts_property -d arch/arm64/boot/dts/overlays/.sx150x.dtbo.d.dtc.tmp arch/arm64/boot/dts/overlays/.sx150x.dtbo.dts.tmp ; cat arch/arm64/boot/dts/overlays/.sx150x.dtbo.d.pre.tmp arch/arm64/boot/dts/overlays/.sx150x.dtbo.d.dtc.tmp > arch/arm64/boot/dts/overlays/.sx150x.dtbo.d

source_arch/arm64/boot/dts/overlays/sx150x.dtbo := arch/arm64/boot/dts/overlays/sx150x-overlay.dts

deps_arch/arm64/boot/dts/overlays/sx150x.dtbo := \

arch/arm64/boot/dts/overlays/sx150x.dtbo: $(deps_arch/arm64/boot/dts/overlays/sx150x.dtbo)

$(deps_arch/arm64/boot/dts/overlays/sx150x.dtbo):

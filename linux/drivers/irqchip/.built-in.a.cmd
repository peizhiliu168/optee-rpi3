cmd_drivers/irqchip/built-in.a := rm -f drivers/irqchip/built-in.a; /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-ar cDPrST drivers/irqchip/built-in.a drivers/irqchip/irqchip.o drivers/irqchip/irq-bcm2835.o drivers/irqchip/irq-bcm2836.o drivers/irqchip/irq-gic.o drivers/irqchip/irq-gic-common.o drivers/irqchip/irq-gic-v3.o drivers/irqchip/irq-gic-v3-mbi.o drivers/irqchip/irq-gic-v3-its.o drivers/irqchip/irq-gic-v3-its-platform-msi.o drivers/irqchip/irq-gic-v4.o drivers/irqchip/irq-partition-percpu.o
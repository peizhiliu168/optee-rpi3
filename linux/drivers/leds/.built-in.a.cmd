cmd_drivers/leds/built-in.a := rm -f drivers/leds/built-in.a; /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-ar cDPrST drivers/leds/built-in.a drivers/leds/led-core.o drivers/leds/led-class.o drivers/leds/led-triggers.o drivers/leds/leds-gpio.o drivers/leds/trigger/built-in.a
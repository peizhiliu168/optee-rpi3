cmd_drivers/char/hw_random/built-in.a := rm -f drivers/char/hw_random/built-in.a; /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-ar cDPrST drivers/char/hw_random/built-in.a drivers/char/hw_random/core.o drivers/char/hw_random/bcm2835-rng.o drivers/char/hw_random/iproc-rng200.o drivers/char/hw_random/optee-rng.o
cmd_drivers/cpuidle/built-in.a := rm -f drivers/cpuidle/built-in.a; /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-ar cDPrST drivers/cpuidle/built-in.a drivers/cpuidle/cpuidle.o drivers/cpuidle/driver.o drivers/cpuidle/governor.o drivers/cpuidle/sysfs.o drivers/cpuidle/governors/built-in.a drivers/cpuidle/dt_idle_states.o drivers/cpuidle/cpuidle-arm.o
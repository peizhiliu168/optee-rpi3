cmd_kernel/rcu/built-in.a := rm -f kernel/rcu/built-in.a; /usr/bin/ccache /home/peizhiliu/Documents/Synced/2021_Spring_Classes/CS446/optee-rpi3b-test/build/../toolchains/aarch64/bin/aarch64-linux-gnu-ar cDPrST kernel/rcu/built-in.a kernel/rcu/update.o kernel/rcu/sync.o kernel/rcu/srcutree.o kernel/rcu/tree.o kernel/rcu/rcu_segcblist.o
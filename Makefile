obj-m += hello-1.o
obj-m += hello-2.o
obj-m += hello-3.o
obj-m += hello-4.o
obj-m += hello-5.o
obj-m += startstop.o
startstop-objs := start.o stop.o

PWD := $(CURDIR)
# all:
# 	make -C /lib/modules/5.16.0-11444-gc2c94b3b187d/build M=$(PWD) modules
# clean:
# 	make -C /lib/modules/5.16.0-11444-gc2c94b3b187d/build M=$(PWD) clean
all:
	make -C /lib/modules/5.16.2-1-MANJARO/build M=$(PWD) modules
clean:
	make -C /lib/modules/5.16.2-1-MANJARO/build M=$(PWD) clean
# all:
# 	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
# clean:
# 	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

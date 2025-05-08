obj-m := hello.o

KERNELDIR ?= /kernel-dev/linux  # Path inside the linuxkit/kernel container
PWD := $(shell pwd)

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean

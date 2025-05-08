obj-m := hello.o

KERNELDIR ?= /usr/src/linux-headers-5.15.0-76-generic  # Example
PWD := $(shell pwd)

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean

obj-m += hello-1.o

all:
	make -C/lib/modules/$(shell uname -r)/build m=$(PWD) modules

clean:
	make -C/lib/modules/$(shell uname -r)/build m=$(PWD) clean
	
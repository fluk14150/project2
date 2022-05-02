obj-m += firewall_c_module.o

oall:	firewall_c firewall_cmod

firewall_c:	firewall_c.c firewall_c.h
	gcc -Wall -o firewall_c firewall_c.c

firewall_cmod:	
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	rm -f firewall_c firewall_c_file
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

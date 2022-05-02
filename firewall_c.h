#ifndef _firewall_c_H_
#define _firewall_c_H_

#include <linux/types.h>

#define DEVICE_INTF_NAME "firewall_c_file"
#define DEVICE_MAJOR_NUM 100


/* Mode of an instruction */
enum firewall_c_mode {
	firewall_c_NONE = 0,
	firewall_c_ADD = 1,
	firewall_c_REMOVE = 2,
	firewall_c_VIEW = 3
};


/* Filter rule of MiniFirewall */
struct firewall_c_rule {
	uint32_t in;
	uint32_t s_ip;
	uint32_t s_mask;
	uint16_t s_port;
	uint32_t d_ip;
	uint32_t d_mask;
	uint16_t d_port;
	uint8_t proto;
};


/* Control instruction */
struct firewall_c_ctl {
	enum firewall_c_mode mode;
	struct firewall_c_rule rule;
};

#endif

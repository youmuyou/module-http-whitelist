/*
 * misc.h
 *
 *  Created on: 2015年3月16日
 *      Author: Fifi Lyu
 */

#ifndef COMMON_MISC_H_
#define COMMON_MISC_H_

#include <linux/ip.h>
#include <linux/tcp.h>

#define NULL_BYTE_SIZE 1 // '\0'

bool read_cfg(const char *path, char ** data, loff_t *size);

bool validate_ipv4_address(const char *ip);

void byte_to_binary(int x, char *b);

void tok_str(char **s, char delim);

int get_line_count(const char *s, loff_t size);

unsigned char *get_tcp_data(
        struct sk_buff *skb, struct iphdr *iph, struct tcphdr *tcph);

#endif /* COMMON_MISC_H_ */

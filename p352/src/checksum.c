/*
 ============================================================================
 Name        : p352.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "checksum.h"
int checksum(char *message)
{
int c = 0;
	while (*message) {
			c += c ^ (int)(*message);
			message++;
	}
	return c;
}

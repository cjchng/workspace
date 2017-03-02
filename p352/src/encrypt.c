/*
 ============================================================================
 Name        : p352.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include "encrypt.h"

void encrypt(char *message)
{
	while (*message) {
		*message = *message ^ 31;    //supposed *message is '1'
		// ascii code of '1' is 0011-0001
		// *message ^ 00001111
		//  0011-1110
		message++;
	}
}

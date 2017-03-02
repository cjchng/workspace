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
#include "checksum.h"
int main()
{
	char s[] ="123456"; // "Speak friend and enter";
	encrypt(s);
	printf("Encrypted to '%s'\n", s);
	printf("Checksum is %i\n", checksum(s));
	printf("---------------------------\n") ;
	encrypt(s);
	printf("Decrypted back to '%s'\n", s);
	printf("Checksum is %i\n", checksum(s));
	return 0;
}

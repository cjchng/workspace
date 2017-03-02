/*
 ============================================================================
 Name        : p089.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s0[] = "dysfunctional";
	char s1[] = "fun";
	if (strstr(s0, s1))
	  puts("I found the fun in dysfunctional!");
	return EXIT_SUCCESS;
}

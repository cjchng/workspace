/*
 ============================================================================
 Name        : P074.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sub1(char p[]){}
void sub2(char *) {}
int main(void) {
	sub1("123");
	sub2("abx");
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}

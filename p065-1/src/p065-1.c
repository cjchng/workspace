/*
 ============================================================================
 Name        : p065.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[10];
	printf("Enter your name: ");
	//fflush(stdout);
	scanf("%09s", name);
	printf("%s",name);
	return EXIT_SUCCESS;
}

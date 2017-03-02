/*
 ============================================================================
 Name        : p065-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char first_name[20];
	char last_name[20];
	printf("Enter first and last name: ");
	fflush(stdout);
	scanf("%19s %19s", first_name, last_name);
	//scanf("%19s", first_name);
	//scanf("%%19s", last_name);
	printf("First: %s Last:%s\n", first_name, last_name);
	return EXIT_SUCCESS;
}

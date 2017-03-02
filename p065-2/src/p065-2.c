/*
 ============================================================================
 Name        : p065-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int age;
	printf("Enter your age: ");
	fflush(stdout);
	scanf("%i", &age);
	printf("input is %i",age);
	return EXIT_SUCCESS;
}

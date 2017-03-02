/*
 ============================================================================
 Name        : P066.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {
	char food[5];
	printf("Enter favorite food: ");
	scanf("%s", food);
	printf("Favorite food: %s\n", food);
	return EXIT_SUCCESS;
}

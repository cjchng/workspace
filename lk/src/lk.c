/*
 ============================================================================
 Name        : lk.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i=0 ;
	int sum=0 ;
	for(i=1; i<argc; i++)
		sum +=atoi(argv[i]);
	printf("%d",sum);
	return EXIT_SUCCESS;
}

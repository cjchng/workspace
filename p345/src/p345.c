/*
 ============================================================================
 Name        : p345.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdarg.h>


void print_ints(int args, ...)
{
	va_list ap;
	va_start(ap, args);    //key:value
	int i;
	for (i = 1; i < args; i++) {
		printf("argument: %i\n", va_arg(ap, int));
	}
	va_end(ap);
}

int main(){
	print_ints(5, , "acbd", 79, 101, 32, 100) ;
}

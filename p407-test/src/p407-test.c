/*
 ============================================================================
 Name        : p407-test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>

int main(void) {
	puts("hello") ;
	//return EXIT_SUCCESS;
	char *my_env[] = {"JUICE=peach and apple!", NULL};

	//not worked next statements
	//execle("../../p407/Debug/p407", "../../p407/Debug/p407", "4", NULL, my_env);
	execle("/cygdrive/c/Users/Chuang-Jan/workspace/p407/Debug/p407",
		   "/cygdrive/c/Users/Chuang-Jan/workspace/p407/Debug/p407", "4", NULL, my_env);
	//puts(strerror(errno));
	puts("hello") ;
	puts(strerror(errno));
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : p407.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  printf("Diners: %s\n", argv[1]);
  printf("Juice: %s\n", getenv("JUICE"));
  return 0;
}

/*
 ============================================================================
 Name        : qBasic-05.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main() {
   float a=3.14;
   char *j;
   j = (char*)&a;
   printf("%d\n", *j);
   return 0;
}


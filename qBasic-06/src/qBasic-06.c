/*
 ============================================================================
 Name        : qBasic-06.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main() {
   int a=10, *j;
   void *k;
   j=k=&a;
   printf("%u %u\n", j, k);
   j++;
   k++;
   printf("%u %u\n", j, k);
   return 0;
}


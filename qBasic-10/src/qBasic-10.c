/*
 ============================================================================
 Name        : qBasic-10.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main() {
   char str[] = "Nagpur";
   str[0]='K';
   printf("%s, ", str);
   str = "Kanpur";
   printf("%s", str+1);
   return 0;
}


/*
 ============================================================================
 Name        : q1-9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main() {
   char ch = 'A';
   char ch2 = 'B' ;
   char ab[10]="ab";
   char *ab_p= ab;
   printf("%d, %d, %d\n", sizeof(ch),  sizeof('A'), sizeof(3.14f));
   printf("%d, %d, %d",   sizeof(ab), sizeof(ab_p), sizeof("ab"));
   return 0;
}

/*
 ============================================================================
 Name        : qBasic-12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main() {
  FILE *fp;
  char ch;
  int i=1;
  fp = fopen("src/qBasic-12.c", "r");
  while((ch=getc(fp))!=EOF)
  {
  if(ch == '\n')
    i++;
  }
  printf("[%i]", i);
  fclose(fp);
  return 0;
}


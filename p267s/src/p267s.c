/*
 ============================================================================
 Name        : p267s.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>

int int_f() //not used in this programe
{
   int a=11;
   return a;
}

int * ptr_fun()
{
     int ap=11;   //a is allocated inside the call frame of the process stack
     printf("inside ptr_fun [%p]\n", &ap) ;
     return (&ap) ;
}



int main(void)
{
   int a ;
   int *ret=&a ;
   printf("org_ret:[%p]\n", ret) ;

   ret = ptr_fun();
   {
	   int idx ;
	   char buf[16]={0} ;
	   printf("buf:[%p]\n", buf) ;
	   for(idx=0; idx<16; idx++) buf[idx]='0' ;

	   printf("ret_new:[%p], %d",ret, *ret) ;
   }
   return 0 ;
}

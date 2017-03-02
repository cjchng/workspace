/*
 ============================================================================
 Name        : p621.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

int main()
{
	double  nums[] = {1, 2, 3};
	double *pt ;
	pt= nums ;     //decay
	//nums=pt ;    //not permit

	printf("1 nums is at %p\n", nums);
	printf("&nums[0] is %p\n", &nums[0]);
	printf("&nums is %p\n", &nums);
	printf("2 nums + 1 is at %p\n", nums + 1);
	printf("3 nums + 1 is at %p\n", &1[nums]);
	printf("4 sizeof(int) is %i", sizeof(int));;
	printf("5 sizeof(nums) is %i", sizeof(nums));;
	printf("6 sizeof(pt) is %i", sizeof(pt));;

  return 0;
}

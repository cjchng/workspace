/*
 ============================================================================
 Name        : p254.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

typedef union {
  float weight;
  int count;
} cupcake;
int main()
{

  cupcake order = {.count=2};
  printf("Cupcakes quantity: %i\n", order.count);

  cupcake order2 = {2};
  printf("Cupcakes quantity: %f\n", order2.weight);
  return 0;
}

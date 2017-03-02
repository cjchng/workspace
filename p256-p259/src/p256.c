/*
 ============================================================================
 Name        : p256.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
typedef enum {
  COUNT, POUNDS, PINTS
} unit_of_measure;
typedef union {
  short count;
  float weight;
  float volume;
} quantity;
typedef struct {
  const char *name;
  const char *country;
  quantity amount;
  unit_of_measure units;
} fruit_order;
void display(fruit_order order)
{
  printf("This order contains ");
  if (               == PINTS)
    printf("%2.2f pints of %s\n", order.amount.               , order.name);
  else if (                ==                )
     printf("%2.2f lbs of %s\n", order.amount.weight, order.name);
   else
     printf("%i %s\n", order.amount.                , order.name);
 }
 int main()
 {
   fruit_order apples = {"apples", "England", .amount.count=144,               };
   fruit_order strawberries = {"strawberries", "Spain", .amount.        =17.6, POUNDS};
   fruit_order oj = {"orange juice", "U.S.A.", .amount.volume=10.5,               };
   display(apples);
   display(strawberries);
   display(oj);
   return 0;
 }

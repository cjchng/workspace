/*
 ============================================================================
 Name        : P069.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  const char *cards = "JQK";
  //char cards[] = "JQK";
  char a_card = cards[2];
  cards[2] = cards[1];   //JQQ
  cards[1] = cards[0];   //JJQ
  cards[0] = cards[2];   //
  cards[2] = cards[1];   //
  cards[1] = a_card;     //
  puts(cards);
  return EXIT_SUCCESS;
}

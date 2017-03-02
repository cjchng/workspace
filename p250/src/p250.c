/*
 ============================================================================
 Name        : p250.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef union {
  float lemon;
  int lime_pieces;
} lemon_lime;

typedef struct {
  float tequila;
  float cointreau;
  lemon_lime citrus;
} margarita;

void pr(margarita arg_m){
	printf("%2.1f measures of tequila\n", arg_m.tequila );
	printf("%2.1f measures of cointreau\n",arg_m.cointreau ) ;
	printf("%2.1f measures of juice\n\n",arg_m.citrus.lemon) ;
}

void pr2(margarita arg_m){
	printf("%2.1f measures of tequila\n", arg_m.tequila );
	printf("%2.1f measures of cointreau\n",arg_m.cointreau ) ;
	printf("%i measures of juice\n\n",arg_m.citrus.lime_pieces) ;
}
int main(void) {
	margarita m1 = {2.0, 1.0, {.lemon=3.2}};
	pr(m1) ;

	m1.citrus.lime_pieces=3 ;
	pr2(m1);

	margarita m2 = {2.0, 1.0, {.lime_pieces=2}};
	pr2(m2) ;
	return EXIT_SUCCESS;
}

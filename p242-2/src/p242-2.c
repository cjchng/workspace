/*
 ============================================================================
 Name        : p242.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	const char *i_description;   //
	float i_value;
} swag_t;

typedef struct {
	swag_t *i_swag;  //pointer to struct data
	const char *i_sequence;
} combination_t;

typedef struct {
	combination_t i_numbers;   //struct data
	const char *i_make;
} safe_t;

int main(void) {
	swag_t gold = {"GOLD!", 1000000.0};
	combination_t combi = {&gold, "6502"};
	safe_t s = {combi, "RAMACON250"};

	printf("%s\n", s.i_make) ;
	printf("%s\n", s.i_numbers.i_sequence) ;
	printf("%s\n", s.i_numbers.i_swag->i_description) ;
	printf("%s\n", s.i_numbers.i_swag->i_description) ;
	printf("Contents = %s\n", s.i_numbers.i_swag->i_description) ;

	return EXIT_SUCCESS;
}

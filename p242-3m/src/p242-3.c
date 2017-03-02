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
	const char *i_description;
	float i_value;
} t_swag;

typedef struct {
	t_swag /* * */i_swag;  //not pointer to struct data
	const char *i_sequence;
} t_combination;

typedef struct {
	t_combination i_numbers;   //struct data
	const char *i_make;
} t_safe;

int main(void) {
	t_swag gold = {"GOLD!", 1000000.0};
	t_combination combi = {/*&*/gold, "6502"};
	t_safe s = {combi, "RAMACON250"};

	printf("%s\n", s.i_make) ;
	printf("%s\n", s.i_numbers.i_sequence) ;
	printf("%s\n", s.i_numbers.i_swag.i_description) ;
	printf("%s\n", s.i_numbers.i_swag.i_description) ;
	printf("Contents = %s\n", s.i_numbers.i_swag.i_description) ;

	return EXIT_SUCCESS;
}

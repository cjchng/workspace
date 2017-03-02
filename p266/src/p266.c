/*
 ============================================================================
 Name        : p266.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  unsigned int first_visit: 1     ;   //ovfb  //1
  unsigned int come_again:  1    ;     //unf
  unsigned int fingers_lost:  4    ;
  unsigned int shark_attack:  1    ;    //zero
  unsigned int days_a_week:   3   ;
} survey;

typedef union {
	unsigned svy_word;
	survey svy_bits ;
}t_s;

int main(void) {
	survey svy;
	svy.first_visit = 1;
	//svy.come_again = 0;
	//svy.fingers_lost= 15;
	svy.shark_attack=1 ;
	svy.days_a_week = 7 ;

	t_s s;
	s.svy_bits = svy ;
	printf("s bundled: %x",s.svy_word) ;
	printf("s bundled: %x",s.shark_attack) ;
	//0x380 0011-1000-0000   //first bit field is 2
	//0x381 0011-1000-0001   //first bit field is 3
	//0x381 0011-1000-0001   //first bit field is 1

	return EXIT_SUCCESS;
}

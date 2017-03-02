/*
 ============================================================================
 Name        : p263.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct {
  unsigned int first_visit:  1    ;
  unsigned int come_again:   1   ;
  unsigned int fingers_lost: 4     ;
  unsigned int shark_attack: 1    ;
  unsigned int days_a_week:  3   ;
} t_survey;

typedef union  {
	unsigned int wrd;
	t_survey bt ;
}t_status;

int main(void) {

	t_status flag= {3} ;

	printf("days_a_week: %d\n", flag.bt.days_a_week ) ;
	printf("first_visit: %d\n", flag.bt.first_visit ) ;

	flag.bt.fingers_lost = 5 ;
	printf("shark_attack: 0X%x\n", flag.wrd) ;

	return EXIT_SUCCESS;
}

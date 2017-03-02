/*
 ============================================================================
 Name        : p274.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

/*
typedef struct island{
  char *name;
  char *opens;
  char *closes;
  struct island * next ;
} island_t;
*/

struct island{
  char *name;
  char *opens;
  char *closes;
  struct island * next ;
};

typedef struct island island_t ;

void display(island_t *start)
{
	island_t *i = start ;
	island_t *next = NULL;
	for(; i!=NULL; i= next){
		printf("Name:%s", i->name);
		printf("Open: %s-%s\n", i->opens, i->closes);
		next = i->next ;
	}
}

int main(void) {
	island_t amity = {"Amity", "09:00", "17:00", NULL};
	island_t craggy = {"Craggy", "09:00", "17:00", NULL};
	island_t isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
	island_t shutter = {"Shutter", "09:00", "17:00", NULL};

	amity.next = &craggy;
	craggy.next = &isla_nublar;
	isla_nublar.next = &shutter;

	island_t skull = {"Skull", "09:00", "17:00", NULL};

	isla_nublar.next = &skull;
	skull.next = &shutter;
	display(&amity);
}

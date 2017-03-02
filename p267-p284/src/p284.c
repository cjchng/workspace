/*
 ============================================================================
 Name        : p284.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct island {
	char *name;
	char *opens;
	char *closes ;
	struct island *next ;
};

typedef struct island island ;


void display(island *start)
{
	island *i = start ;
	island *next = NULL;
	for(; i!=NULL; i= next){
		printf("Name:%s", i->name);
		printf("Open: %s-%s\n", i->opens, i->closes);
		next = i->next ;
	}
}

void release(island *start)
{
  island *i = start;
  island *next = NULL;
  for (; i != NULL; i = next) {
    next = i->next ;
    free(i->name);
    free(i);
  }
}

island* create(char *passin_name)
{
  island *i = malloc(sizeof(island));

  char *nameMem= malloc(sizeof(passin_name));
  printf("...size is %d\n",sizeof(passin_name) );
  strcpy(nameMem, passin_name) ;
  i->name = nameMem ;

  //i->name=name ;
  //i->name = strdup(passin_name);
  //allocate a completed copy of the string somewhere on the heap:


  i->opens = "09:00";
  i->closes = "17:00";
  i->next = NULL;
  return i;
}

int main(void) {
	island *start = NULL;
	island *i= NULL;
	island *next= NULL ;
	char org_name[80];   //"name1", "name2"
	//char map[] = "taiwan.txt";

	for(; fgets(org_name, 80, stdin); i=next)
	{
		next= create(org_name);
		if(start == NULL) start = next ;
		if(i != NULL)
			i->next = next ;
	}
	display(start);
	release(start);
	return EXIT_SUCCESS;
}

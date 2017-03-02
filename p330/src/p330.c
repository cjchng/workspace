/*
 ============================================================================
 Name        : p330.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_scores_desc(const void* scorea, const void* scoreb){
	int a = *(int*)scorea;
	int b = *(int*)scoreb;
	return a-b;
}

int compare_names(const void* namea, const void* nameb){
	char** a = *(char**)namea;
	char** b = *(char**)nameb;
	return strcmp(*a,*b);
}

int main(int argc, char* argv[]){
	int scores[7] = {456,234,65,563,67,19,100};
	int i;
	qsort(scores,7,sizeof(int),compare_scores_desc);
	puts("\nThese are the scores in order : \n");
	for(i=0;i<7;i++)
		printf("%i\n",scores[i]);

	char *names[] = {"Krishna","Rama","Bhishma","Arjuna"};
	qsort(names,4,sizeof(char*),compare_names);

	puts("------------------");
	puts("The names in order are : \n");
	for(i=0;i<4;i++)
		printf("%s\n",names[i]);
	return 0;
}

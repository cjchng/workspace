/*
 ============================================================================
 Name        : p090.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tracks[][80] = {
  "I left my heart in Harvard Med School",
  "Newark, Newark - a wonderful town",
  "Dancing with a Dork",
  "From here to maternity",
  "The girl from Iwo Jima",
};

void find_track(char search_for[])
	{
	  int i;
	  for (i = 0; i < 5; i++) {
	    if (strstr(tracks[i], search_for))
	      printf("Track %i: '%s'\n",i, tracks[i]);
	  }
}

int main(void) {

	return EXIT_SUCCESS;
}

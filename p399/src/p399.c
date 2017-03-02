/*
 ============================================================================
 Name        : p399.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char* now()
{
  time_t t;
  time (&t);
  return asctime(localtime (&t));
}
/* Master Control Program utility.
   Records guard patrol check-ins. */
int main()
{
  char comment[80];
  char cmd[120];
  printf("Input comment to report.log :");
  fflush(stdout) ;
  fgets(comment,80, stdin);

  sprintf(cmd,"echo '%s %s' >> reports.log", comment,now()) ;
  system(cmd) ;
  return 0 ;
}

/*
 ============================================================================
 Name        : p402.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
  char *c_pt;
  int cnt=0 ;

  char tstr[128];
  strcpy(tstr, c_pt = now()) ;
  while (*c_pt != '\0') {
	  printf("%02d [%c:%02x]\n", cnt, *c_pt, *c_pt);
      c_pt++;
	  cnt++ ;
  }
  printf("cnt is<%i>\n", (int)cnt);
  //return 0 ;
  //tstr[24]='\0';
  printf("<sizeof(tstr)=%i>\n", sizeof(tstr));
  printf("<strlen(tstr)=%d>\n", strlen(tstr));
  printf("<strlen(now())=%d>\n", strlen(now()));
  printf("<tstr[]=%s>\n", tstr);

  printf("<sizeof(now())=%i>\n", sizeof(now()));
  (sizeof(tstr)-3)[tstr] = '\0';

  printf("<%s>", tstr);
  //return 0 ;
  printf("Input comment to report.log :");
  fflush(stdout) ;
  fgets(comment,80, stdin);
  comment[strlen(comment)-2]='\0' ;

  c_pt = comment ;
  cnt=0 ;
  while (*c_pt != '\0') {
  	  printf("%02d [%c:%02x]\n", cnt, *c_pt, *c_pt);
        c_pt++;
  	  cnt++ ;
  }
  //printf("cnt=%d, the_comment::{%s}>\n", cnt, comment);
  //return 0;
  char *t_pt = now();
  int len= strlen(now()) ;
  *(t_pt+len-1)='\0' ;
  //printf("t_pt::<%s>", t_pt);
  //return 0 ;
  sprintf(cmd,"echo '' && ls / && echo %s %s >> reports.log", comment,t_pt) ;
  //return 0;
  printf("the_cmd::{%s}>", cmd);
  fflush(stdout) ;
  system(cmd) ;
  system("cat reports.log") ;
  return 0 ;
}

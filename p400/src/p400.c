/*
 ============================================================================
*/
 #include <stdio.h>
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
   char cmd[256];
   fgets(comment, 80, stdin);
   sprintf(cmd,
           "echo '%s %s' >> reports.log",
            comment, now());
   printf("command [%s]", cmd);
   system(cmd);
  return 0;
 }

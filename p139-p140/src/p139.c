/*
 ============================================================================
 Name        : p139.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
		char line[80];
		char *f_name_0 = "C:\\Users\\Chuang-jan\\OneDrive\\02016-H.F.C\\workspace\\hfc\\csv\\spooky.csv";
		char *f_name_1 = "..\\..\\workspace\\hfc\\csv\\spooky.csv";
		char *f_name_2 = "..\\hfc\\csv\\spooky.csv";
		char *f_name_3 = "..//hfc/csv//spooky.csv";
		char *f_name_4 = "../hfc/csv/spooky.csv";

		FILE *in = fopen(f_name_4, "r");
		if(in == NULL){
			printf("File Open Error");
			return 2 ;
		}
		FILE *file1 = fopen("ufos.csv", "w");
		FILE *file2 = fopen("disapperance.csv", "w" );
		FILE *file3 = fopen("other.csv", "w");

		while (fscanf(in, "%79[^\n]\n", line) == 1) {
			if (strstr(line, "UFO"))
				fprintf(file1, "%s\n", line);
			else if (strstr(line, "Disappearance"))
				fprintf(file2, "%s\n", line);
			else
				fprintf(file3, "%s\n", line);
		}
		fclose(file1);
		fclose(file2);
		fclose(file3);
		return 0;
}

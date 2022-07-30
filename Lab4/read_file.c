/* Read the input file*/
#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void read_file(char *input_date_str, char *input_fileName, FILE **input)
{
	int month_list[12] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
	int leapYear_month_list[12] = {0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
	int input_day, input_month, input_year, input_date, file_date, file_year;

	*input = fopen(input_fileName, "r"); /*scan the input*/
	sscanf(input_date_str, "%d/%d/%d", &input_month, &input_day, &input_year);
	if(input_year % 4 == 0) input_date = leapYear_month_list[input_month - 1] + input_day - 1;
	input_date = month_list[input_month - 1] + input_day - 1;
	fscanf(*input, "%d\t%d", &file_date, &file_year);
	printf("There are %d days difference between the date entered and the date in the file. Do you wish to continue?", input_date - file_date + 1 + (input_year - file_year)*365);
	if(getchar() != 'y'){ /*exit and close file*/
		exit(0);
		if(fclose(*input) != 0) printf("Error in closing file");
	}
}

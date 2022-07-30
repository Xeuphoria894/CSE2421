#include <stdio.h>				/* this tells the preprocessor to copy IO library prototypes
						   and other information from the file /usr/include/stdio.h	*/
#include "local_file.h"				/* this include statement references a file in the current directory	*/

int main(void)
{
	unsigned int maxEntries;
	int getchar_return_value; 		/* note manual page says getchar() returns an integer value	*/
	int i;					/* declare i to track amount of times through loop		*/

	printf("This program reads in a number, then a series of keyboard characters. The number\n");
	printf("indicates how many characters follows. The number can be no higher than %d.\n", MAX_NUM);
	printf("Then the specified number of characters follow.  These characters can be any\n");
	printf("key on a regular keyboard.\n");

	/* Read the first number entered to know how many entries will follow		*/
	/* We are going to assume that the number will be 1 or 2 digits in length	*/
	/* and it will be followed by a newline,'\n', character			*/

	printf("Please enter the number of entries, followed by the enter/return key: ");
	getchar_return_value = getchar();	/* read the first ASCII character of our max number		*/
	/* if it's not a newline, convert to non-ASCII value, we can assume it is a number		*/
	if (getchar_return_value != '\n'){
		maxEntries = getchar_return_value - '0';
		getchar_return_value = getchar();	/* potentially read the second character of our number	*/
		/* if it's not a newline, convert to non-ASCII value, we can assume it is a number		*/
		if (getchar_return_value != '\n') {
			maxEntries = maxEntries*10 + getchar_return_value - '0';
			getchar();		/* trash the '\n'	*/
		}
	}
	else maxEntries=MAX_NUM;	/* if first ASCII character on the line is a '\n', then assume max		*/

	if (maxEntries > MAX_NUM) {
		printf("Specified number of characters is invalid. It must be between 1 and %d.\n", MAX_NUM);
		return(0);
	}
#ifdef DEBUG
	printf("entering function\n");
#endif
	print_chars(maxEntries);
#ifdef DEBUG
	printf("returned from function\n");
#endif
	return(0);	
}


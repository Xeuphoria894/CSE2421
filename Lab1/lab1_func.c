#include <stdio.h>				/* this tells the preprocessor to copy IO library prototypes
						   and other information from the file /usr/include/stdio.h	*/
#include "local_file.h"				/* this is an include file located in the current directory	*/
int getchar_return_value;
void print_chars(unsigned int maxEntries){
int i;
	printf("enter the %u characters: ", maxEntries);

	for(i = 0; i < maxEntries; i++){
		getchar_return_value = getchar();
		if(i==0) printf("The keyboard values are: \n");
		if (getchar_return_value != EOF){				/* we got a valid value			*/
			putchar(getchar_return_value);				/* print it back out			*/
			putchar('\n');
	
		}
		else{
			printf("fewer than %u characters entered, number of characters set to %d\n", maxEntries, i);
			maxEntries = i;
			break;
		}

	}
	return;
}

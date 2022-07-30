/*This function creates a pointer array for the ingredients*/
#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

void get_ingredients(char *** ingred_ptr, int *count)
{
	int i;
	printf("How many available pizza ingredients do we have today? \n");
	scanf("%d", count);
	printf("Enter the %d ingredients one to a line: \n", *count);
	*ingred_ptr = (char **)malloc( *count * sizeof(char*) );	/*malloc space for the array*/

	if(*ingred_ptr != NULL){
		for(i = 0; i < *count; i++){
			*(*ingred_ptr + i) = get_item();	/*Loop through each slot of array and put the address of the string*/
		}
	printf("Available ingredients today are: \n");
	}else{
		perror("Mallac allocation failure for ingredients array");
		exit(EXIT_FAILURE);
	}
}

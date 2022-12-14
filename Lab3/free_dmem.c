/* This function frees the dynamic memories*/ 
#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

void free_dmem(char ***thispizza, char ** ingredients, int totalIngred)
{
	int i;
	for(i = 0; i < totalIngred; i++){
		if( *(ingredients + i) != NULL) free(*(ingredients + i));	/*loop through and free all spaces in the ingredients array*/
		*(ingredients + i) == NULL;
	}
	free(ingredients);
	ingredients = NULL;	/*free the two pointers*/
	free(thispizza);
	thispizza = NULL;
}

#include <stdio.h>
#include "lab3.h"

/*This function prints the ingredient list*/
void print_ingred(char **ingredients, int totalNum)
{
	int i;
	for(i = 0; i < totalNum; i++){
		printf("%d.%s\n", i + 1, *(ingredients + i));
	}
}

#include <stdio.h>
#include "lab3.h"
/*This function prints the ingredient list*/
void print_ingred2(char **ingredients, int totalNum)
{
	int i;
	printf("\n\nWelcome to our Pizza ordering System!\nToday we have the following fresh ingredients available:\n");
	for(i = 0; i < totalNum; i++){
		printf("%d.%s\n", i + 1, *(ingredients + i));
	}
}

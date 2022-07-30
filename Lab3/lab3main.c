/*This is the main function*/
#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

int main(void)
{
	int ingred_cnt = 0, ordered_ingred_cnt = 0, response;
	char **ingredients = NULL;
	char ***thispizza = NULL;

	get_ingredients(&ingredients, &ingred_cnt);		/*Create list for ingredients*/
	print_ingred(ingredients, ingred_cnt);
	print_ingred2(ingredients, ingred_cnt);		/*Printing out the  list of ingredients*/
	get_thispizza(ingredients, &thispizza, &ordered_ingred_cnt, &ingred_cnt);			/*Print out the order list*/
	print_order(thispizza, ordered_ingred_cnt);
	printf("Do you want to save them? (1=yes, 2=No):");
	scanf("%d", &response);
	if(response == 1) save_info(ingredients, thispizza, ordered_ingred_cnt, ingred_cnt);		/*Write file to the disk*/
	free_dmem(thispizza, ingredients, ingred_cnt);
	return(0);
}

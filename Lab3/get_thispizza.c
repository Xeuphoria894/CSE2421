/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
 * THE TENSURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH RESPECT
 * TO THIS ASSIGNMENT.
 *
 * Name: Peter Luo
 */

/* This is the file for get_thispizza.*/
#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

void get_thispizza(char **ingredients, char ****thispizza_ptr, int *numOfIngredientsOrdered, int *totalNumOfIngredients)
{
	int i, next_ingred;
	printf("Of our %d available ingredients, how many do you plan to put on your pizza? \n", *totalNumOfIngredients);
	scanf("%d", numOfIngredientsOrdered);

	*thispizza_ptr = (char ***)malloc( *numOfIngredientsOrdered * sizeof(char **));
	if(*thispizza_ptr != NULL){
		printf("Enter the number next to each ingredient you want on your pizza: \n");
		for(i = 0; i < *numOfIngredientsOrdered; i++){
			scanf("%d", &next_ingred);
			*(*thispizza_ptr + i) = ingredients + next_ingred - 1;		/*Create the order array and store the address from the ingredients array*/
		}
	printf("The ingredients on your pizza will be:\n");
	}else{
		perror("Failure in allocation memory");
		}
}	

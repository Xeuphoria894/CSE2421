/* This function exits the program*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void option12(Node *list_head, char *output)
{
	FILE *output_file = fopen(output, "w");
	Node *traversePtr = list_head;
	int count = 0;
	if(output_file == NULL) printf("Error");   /*report the error*/
	
	while(traversePtr != NULL){

		count++;
		fprintf(output_file, "%s\t%s\t%d\t%f\t%f\t%d\t%d", traversePtr->grocery_item.item, traversePtr->grocery_item.department, traversePtr->grocery_item.stockNumber, traversePtr->grocery_item.pricing.retailPrice, traversePtr->grocery_item.pricing.wholesalePrice, traversePtr->grocery_item.pricing.retailQuantity, traversePtr->grocery_item.pricing.wholesaleQuantity);
		traversePtr = traversePtr->next; /*write to the file*/
	}
	if(fclose(output_file) != 0) printf("Error in closing");
	printf("A Total of %d Groery Item records were written to to file \"%s\". ", count, output);
}

/*This function prints the linkedlist*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void print_list(Node *list_head)
{
	Node *traversePtr = list_head;
	int count = 1;

	while(traversePtr != NULL){
		printf("Number: %d---------------------------", count);
		printf("\nitem: %s \ndepartment: %s\nstockNumber: %d\nwholesalesPrice: %f\nretailPrice: %f\nwholesaleQuentity: %d\nretailQuantity: %d\n", traversePtr->grocery_item.item, traversePtr->grocery_item.department, traversePtr->grocery_item.stockNumber, traversePtr->grocery_item.pricing.wholesalePrice, traversePtr->grocery_item.pricing.retailPrice, traversePtr->grocery_item.pricing.wholesaleQuantity, traversePtr->grocery_item.pricing.retailQuantity);
		traversePtr = traversePtr->next;
		count++;
	}
	
}

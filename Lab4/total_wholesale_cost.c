/*This functions returns the cost wholesale cost*/
#include <stdio.h>
#include "lab4.h"

float total_wholesale_cost(Node *list_head)
{
	float sum;
	Node *traversePtr = list_head;

	while(traversePtr != NULL){
		sum = sum + traversePtr->grocery_item.pricing.wholesalePrice * traversePtr->grocery_item.pricing.wholesaleQuantity;
		traversePtr = traversePtr->next;
	}

	return sum;
}

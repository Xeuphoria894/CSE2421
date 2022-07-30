/*This calculates the total number of sales*/

#include <stdio.h>
#include "lab4.h"

float total_sales(Node *list_head)
{
	float sum;
	Node *traversePtr = list_head;

	while(traversePtr != NULL){
		sum = sum + traversePtr->grocery_item.pricing.retailQuantity;
		traversePtr = traversePtr->next;
	}

	return sum;
}

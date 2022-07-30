/*This function calculates the total revenue*/

#include <stdio.h>
#include "lab4.h"

float total_revenue(Node *list_head)
{
	float sum;
	Node *traversePtr = list_head;

	while(traversePtr != NULL){
		sum = sum + traversePtr->grocery_item.pricing.retailPrice * traversePtr->grocery_item.pricing.retailQuantity;
		traversePtr = traversePtr->next;
	}

	return sum;
}

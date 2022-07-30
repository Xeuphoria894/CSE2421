/*This functions calculates the current investment*/
#include <stdio.h>
#include "lab4.h"

float current_investment(Node *list_head)
{
	float sum;
	Node *traversePtr = list_head;

	while(traversePtr != NULL){
		sum = sum + traversePtr->grocery_item.pricing.wholesalePrice * ( traversePtr->grocery_item.pricing.wholesaleQuantity - traversePtr->grocery_item.pricing.retailQuantity );
		traversePtr = traversePtr->next;
	}

	return sum;
}

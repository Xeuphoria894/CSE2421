/*Prints out of stock list*/

#include <stdio.h>
#include "lab4.h"

void print_out_of_stock(Node *list_head)
{
	Node *traversePtr = list_head;
	
	printf("Grocery Items Out of Stock:\nStock#\tQuantity\tDepartment\t\tItem\n");
	while(traversePtr != NULL){
		if(traversePtr->grocery_item.pricing.wholesaleQuantity - traversePtr->grocery_item.pricing.retailQuantity == 0) printf("%d\t%d\t\t%-30s%s\n", traversePtr->grocery_item.stockNumber, 0, traversePtr->grocery_item.department, traversePtr->grocery_item.item);
		traversePtr = traversePtr->next;
	}
}

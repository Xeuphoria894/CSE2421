/*This prints the in stock list*/

#include <stdio.h>
#include "lab4.h"

void print_in_stock(Node *list_head)
{
	Node *traversePtr = list_head;
	
	printf("Grocery item in Stock:\nStock#\tQuantity\tDepartment\t\tItem\n");
	while(traversePtr != NULL){ /*print the list following the format */
		
		if(traversePtr->grocery_item.pricing.wholesaleQuantity - traversePtr->grocery_item.pricing.retailQuantity > 0) printf("%d\t%d\t\t%-30s%s\n", traversePtr->grocery_item.stockNumber, traversePtr->grocery_item.pricing.wholesaleQuantity - traversePtr->grocery_item.pricing.retailQuantity, traversePtr->grocery_item.department, traversePtr->grocery_item.item);
		traversePtr = traversePtr->next;
	}
}

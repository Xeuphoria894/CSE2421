/*This function adds a note to the list*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void add_item(Node **list_head_ptr)
{
	
	Node *newNodePtr;

	newNodePtr = (Node *)malloc(sizeof(Node));
	printf("Enter grocery item name: ");
	scanf("%s", newNodePtr->grocery_item.item);
	printf("\nEnter Department: ");
	scanf("%s", newNodePtr->grocery_item.department);    /*Scan the file*/
	printf("\nEnter item stock number: ");
	scanf("%d", &(newNodePtr->grocery_item.stockNumber));
	printf("\nEnter item retail price: ");
	scanf("%f", &(newNodePtr->grocery_item.pricing.retailPrice));
	printf("\nEnter item WholesalePrice: ");
	scanf("%f", &(newNodePtr->grocery_item.pricing.wholesalePrice));
	printf("\nEnter item retail Quantity: ");
	scanf("%d", &(newNodePtr->grocery_item.pricing.retailQuantity));
	printf("\nEnter item Wholesale quantity: ");
	scanf("%d", &(newNodePtr->grocery_item.pricing.wholesalePrice));
	
	insert_specfic_node(list_head_ptr, newNodePtr);	    /*insert the node*/
	free(newNodePtr);
}
	


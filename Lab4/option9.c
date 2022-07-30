/* This is the option 9*/
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"

void option9(Node *list_head)
{
	char name[30];
	Node *traversePtr = list_head;
	char *ret;

	printf("Enter Department Name to print: ");
	scanf("%s", name);

	while(traversePtr != NULL){
		if((ret = strcasestr(traversePtr->grocery_item.department, name)) != NULL){
			printf("%d\t%d\t\t%-30s%s\n", traversePtr->grocery_item.stockNumber, traversePtr->grocery_item.pricing.wholesaleQuantity - traversePtr->grocery_item.pricing.retailQuantity, traversePtr->grocery_item.department, traversePtr->grocery_item.item);
		}
		traversePtr = traversePtr->next;
	}
}

/* This function inserts a specfic node to the linkedlist*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void insert_specfic_node(Node **list_head_ptr, Node *newNodePtr)
{
	if(*list_head_ptr == NULL){
		*list_head_ptr = newNodePtr; /*Node at first*/
		newNodePtr->next = NULL;
	}else if(newNodePtr->grocery_item.stockNumber >= (*list_head_ptr)->grocery_item.stockNumber){
		newNodePtr->next = *list_head_ptr;
		*list_head_ptr = newNodePtr;
	}else{
		insert_node_middle(list_head_ptr, newNodePtr); /*handle the non-expected case*/
	}
}

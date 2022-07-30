/*This function inserts a node in the middle of the list*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void insert_node_middle(Node **list_head_ptr, Node *newNodePtr)
{
	Node *traversePtr = *list_head_ptr;
	Node *priorNode;
	int insertStatus = 0;

	while((traversePtr != NULL) && (insertStatus == 0)){
		if(traversePtr->grocery_item.stockNumber < newNodePtr->grocery_item.stockNumber){
			newNodePtr->next = traversePtr;
			priorNode->next = newNodePtr;  /*node at the middle*/
			insertStatus = 1;
		}
		priorNode = traversePtr;
		traversePtr = traversePtr->next; /*transfer to the next node*/
	}
	if(insertStatus == 0){
	newNodePtr->next = NULL;
	priorNode->next = newNodePtr;
	}
}

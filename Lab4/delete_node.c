/* This function deletes a node from the list*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

int delete_node(Node **list_head_ptr, int deleteNum)
{
	Node *traversePtr = *list_head_ptr;
	Node *priorNode;
	int status = 0;

	if(traversePtr->grocery_item.stockNumber == deleteNum){
		*list_head_ptr = traversePtr->next;    /*handle the case when node at the front*/
		free(traversePtr);
		status = 1;
	}
	while(traversePtr != NULL && status == 0){
		if(traversePtr->grocery_item.stockNumber == deleteNum){
			priorNode->next = traversePtr->next;  /*non-exception case; delete at middle*/
			free(traversePtr);
			status = 1;
		}
		priorNode = traversePtr;
		traversePtr = traversePtr->next;
	}
	return status;

}

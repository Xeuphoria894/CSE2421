/*This function frees the memory*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void free_dmem(Node *list_head)
{
	Node *traversePtr = list_head;
	Node *priorNode;

	while(traversePtr != NULL){
		priorNode = traversePtr;
		traversePtr = traversePtr->next;
		free(priorNode);
	}
}

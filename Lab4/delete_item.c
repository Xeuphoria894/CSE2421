/*This function deletes the node from the list*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void delete_item(Node **list_head_ptr)
{
	int num;

	printf("Please enter the grocery item stock number you wish to delete, followed by enter.");
	scanf("%d", &num);       /*scan and delete*/

	if( delete_node(list_head_ptr, num) == 0){
		printf("ERROR: Grocery item stock number %d was not found in the list.", num);
	}else{
		printf("Grocery item stock number %d was deleted.", num);
	}
}

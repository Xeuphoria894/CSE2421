/* This function inserts nodes to the LinkedList*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

void create_list(Node **list_head_ptr, char *input_fileName, FILE *input_file)
{
	Node *newNodePtr;
	int count = 0;

	while(1){
		newNodePtr = (Node *)malloc(sizeof(Node));  /*malloc space*/
		if(newNodePtr == NULL) printf("Failture in creating node");
		if(fscanf(input_file, " %[^\t] %[^\t] %d %f %f %d %d", (newNodePtr->grocery_item.item), (newNodePtr->grocery_item.department),&(newNodePtr->grocery_item.stockNumber), &(newNodePtr->grocery_item.pricing.retailPrice), &(newNodePtr->grocery_item.pricing.wholesalePrice), &(newNodePtr->grocery_item.pricing.retailQuantity), &(newNodePtr->grocery_item.pricing.wholesaleQuantity)) == EOF){
			free(newNodePtr);
			break;           /*When reach EOF then break and free, else insert node*/
		}
		count++;
		insert_specfic_node(list_head_ptr, newNodePtr);
	}
	printf("\nA Total of %d grocery items were read into inventory from the file \"%s\".", count, input_fileName);
	if(fclose(input_file) != 0) printf("Error in closing the file");
}

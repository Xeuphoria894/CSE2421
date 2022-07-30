/* This is the main file*/

#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

int main(int argc, char **argv)
{
	FILE *input_file;
	Node *list_head = NULL;
	int response;
	if(argc != 4) printf("Error: input arguments in the command line less than 3\n");
	read_file(*(argv+1), *(argv+2), &input_file);  /*create the LinkedList*/
	create_list(&list_head, *(argv+2), input_file);

	printf("Please enter an integer between 1 and 12:\n1) Print Total Revenue\n2) Print Total Wholesale Cost\n3) Print Current Grocery Item Investment\n4) Print current profit\n5) Print Total Number of Grocery Items Sold\n6) Print Average Profit per Grocery Item\n7) Print Grocery Items in Stock\n8) Print Out of Stock Grocery items\n9) Print Grocery Items for a Department\n10) Add Grocery item to Inventory\n11) Delete Grocery Item from Inventory\n12) Exit Program\n\nOption:");
	print_list(list_head);
	free_dmem(list_head);
	
	return(0);

}


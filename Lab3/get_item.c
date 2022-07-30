/*BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
 * THE TENSURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH
 * RESPECT TO THIS ASSIGNMENT.
 *
 * Name: Peter Luo
 */
#include <stdio.h>
#include <stdlib.h>
#include "lab3.h"

char * get_item(void)
{
	
	char *ingredient = (char *)malloc( MAX_NUM * sizeof(char) );	/*malloc space for the array*/
	if(ingredient != NULL){
		scanf(" %[^\n]", ingredient);
	}
	else{
		perror("Failure in mallac");
		exit(EXIT_FAILURE);
	}

	return ingredient;
}

/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO
 * THE TENURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY WITH 
 * RESPECT TO THIS ASSIGNMENT.
 *
 * Name: Peter Luo
 */

#include <stdio.h>
#include "lab3.h"
/*This function prints the order list*/
void print_order(char ***thispizza, int orderedNum)
{
	int i;
	for(i = 0; i < orderedNum; i++){
		printf("%d.%s\n", i + 1, **(thispizza + i));
	}
}

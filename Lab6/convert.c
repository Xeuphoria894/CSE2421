/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED 
 ** TO THE TENSURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY
 ** WITH RESPECT TO THIS ASSIGNMENT.
 ** 
 ** NAME: XINGYUAN(PETER) LUO
*/
#include <stdio.h>						/*This tells the preprocessor to copy IO library prototypes.*/

/*This method returns the scaned value as an int*/
int get_int(void);

/*This method returns the scaned float value as an int*/
int get_float(void);

/*This method prints the bits of the integer one by one*/
void print_bits(int inv_value);

/*The main function that execute starts.*/
int main(void)
{
	int response;

	printf("Do you want to convert an integer or a floating-point value?\ninteger = 1\nfloating point = 2\n");
	scanf("%d",&response);
	
	
	printf("Enter the value to convert to binary: ");
	if(response == 1){
		print_bits(get_int());
	}else{
		print_bits(get_float());
	}
	
	printf("\n");

	return(0);
}


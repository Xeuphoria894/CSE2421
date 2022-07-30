#include <stdio.h>						/*This tells the preprocessor to copy IO library prototypes.*/

/* This function reads the input as an integer. */
int get_int(void);

/* This function reads the input as a float value. */
float get_float(void);

/* This function reads the fractional part of a float. */
float get_fractional(void);

/* This function prints the bits from an integer. */
void print_bits(int inv_value);

/* This function prints the fractional part from a float. */
void print_bits_f(float *float_val_ptr);

/*The main function that execute starts.*/
int main(void)
{
	int response;
	float float_value;

#ifdef PROMPT
	printf("Do you want to convert an integer or a floating-point value?\ninteger = 1\nfloating point = 2\n");
#endif
	scanf("%d",&response);
	
#ifdef PROMPT
	printf("Enter the value to convert to binary: ");
#endif
	if(response == 1){
		print_bits(get_int());
	}else{
		float_value = get_float();
		print_bits_f(&float_value);
	}
	
	return(0);
}

int get_int(void)
{
	int getchar_return_value, int_result, sign = 1;
	getchar();
	if ((getchar_return_value = getchar())  == '-'){	/*If the first char is '-' then times the result by -1 at the end*/
		 sign = -1;
		 getchar_return_value = getchar();
	}
	int_result = getchar_return_value - '0';
	while((getchar_return_value = getchar()) != '\n'){
		int_result = int_result * 10 + getchar_return_value - '0';
	}
	return int_result * sign;
}

float get_float(void)
{
	int getchar_return_value, int_part_result = 0, sign = 1;
	getchar();
	if((getchar_return_value = getchar()) == '-'){
		sign = -1;
		getchar_return_value = getchar();
	}
	while(getchar_return_value != '.'){	/*Reading stops when reach'.'*/
		int_part_result = int_part_result * 10 + getchar_return_value - '0';
		getchar_return_value = getchar();
	}
	return (int_part_result + get_fractional()) * sign;
}

float get_fractional(void)
{
	int getchar_return_value;
	float divider = 10.0, frac_result = 0.0;			/*Takes the input and transfter it to a single decimal*/

	while((getchar_return_value = getchar()) != '\n'){
		frac_result += (getchar_return_value - '0')/divider;	/*Divide by 10^n times to get the fractional value*/
		divider *= 10;
	}
	return frac_result;
}

void print_bits(int inv_value)
{

	int i;
	for(i = 31; i >= 0; i--){
		putchar((inv_value >> i & 1) + '0');			/*Bit-shifting to right with iteration to print out 0 or 1*/
		if(i%4 == 0) putchar(' ');
	}
}

void print_bits_f(float *float_val_ptr)
{
	int i;
	unsigned int print_value;
	print_value = *((unsigned int *) float_val_ptr);
	for(i = 31; i >=0; i--){
		putchar((print_value >> i & 1) + '0');
		if(i%4 == 0) putchar(' ');
	}
}


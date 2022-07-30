/* This function saves the information of customer's order and ingredients list*/
#include <stdio.h>
#include "lab3.h"
void save_info(char **ingredients, char ***thispizza, int orderedIngred, int totalIngred)
{
	char user_info[256];
	FILE *output_file;
	int i;
	printf("What file name do you want to use ?");
	scanf(" %[^\n]", user_info);
	output_file = fopen(user_info, "w");
	fprintf(output_file, "Available Pizza ingredients today: \n");
	for(i = 0; i < totalIngred; i++){
		fprintf(output_file, "%s\n", *(ingredients + i));	/*print the ingredient list*/
	}
	fprintf(output_file, "\n\n\nIngredients on This Pizza are: \n");
	for(i = 0; i < orderedIngred; i++){
		fprintf(output_file, "%s\n", **(thispizza + i));	/*print the ordered ingredient list*/
	}
	if(fclose(output_file) != 0) perror("fclose");
	printf("Today's available ingredients and what was ordered for this pizza have been saved to the file %s", user_info);
}

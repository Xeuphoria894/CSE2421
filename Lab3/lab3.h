/* This is the prototype for lab3. */

#define MAX_NUM 61

char * get_item(void);
void get_ingredients(char *** ingred_ptr, int *count);
void get_thispizza(char **ingredients, char ****thispizza_ptr, int *numOfIngredientsOrdered, int *totalNumOfIngredients);
void save_info(char **ingredients, char ***thispizza, int orderedIngred, int totalIngred);
void free_dmem(char ***thispizza, char **ingredients, int totalIngred);
void print_ingred(char **ingredients, int totalNum);
void print_ingred2(char **ingredients, int totalNum);
void print_order(char ***thispizza, int orderedNum);

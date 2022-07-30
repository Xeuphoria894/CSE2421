/* This is the prototype for lab4*/

struct Cost {
	float wholesalePrice;
	float retailPrice;
	int wholesaleQuantity;
	int retailQuantity;
};
struct Data {
	char item[50];
	char department[30];
	int stockNumber;
	struct Cost pricing;
};

typedef struct Node {
	struct Data grocery_item;
	struct Node *next;
} Node;

void create_list(Node **list_head_ptr, char *input_fileName, FILE *input_file);
void insert_specfic_node(Node **list_head_ptr, Node *newNodePtr);
void insert_node_middle(Node **list_head_ptr, Node *newNodePtr);
void print_list(Node *list_head);
void read_file(char *input_date_str, char *input_fileName, FILE **input);
float total_revenue(Node *list_head);
void add_item(Node **list_head_ptr);
float average_profit(Node *list_head);
float current_investment(Node *list_head);
void delete_item(Node **list_head_ptr);
int delete_node(Node **list_head_ptr, int deleteNum);
void option12(Node *list_head, char *output);
void option9(Node *list_head);
void print_in_stock(Node *list_head);
void print_out_of_stock(Node *list_head);
float total_profit(Node *list_head);
float total_sales(Node *list_head);
float total_wholesale_cost(Node *list_head);
void free_dmem(Node *list_head);
void function_pointer(int option);

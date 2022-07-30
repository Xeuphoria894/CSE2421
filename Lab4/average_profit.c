/*This is the average profit*/

#include <stdio.h>
#include "lab4.h"

float average_profit(Node *list_head)
{
	return total_profit(list_head) / total_sales(list_head);
}

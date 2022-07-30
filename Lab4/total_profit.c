/*This is the total profit*/

#include <stdio.h>
#include "lab4.h"

float total_profit(Node *list_head)
{
	return total_revenue(list_head) - total_wholesale_cost(list_head) + current_investment(list_head);
}

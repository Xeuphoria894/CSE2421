#This is the makefile for lab4
gcc_opt = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g -c

#target all
all: lab4.zip lab4

#zip to submit
lab4.zip: Makefile lab4main.c create_list.c insert_specfic_node.c insert_node_middle.c print_list.c read_file.c lab4.h lab4Readme total_revenue.c add_item.c average_profit.c current_investment.c delete_item.c delete_node.c option12.c option9.c print_in_stock.c print_out_of_stock.c total_profit.c total_sales.c total_wholesale_cost.c free_dmem.c function_pointer.c
	zip lab4.zip Makefile lab4main.c create_list.c insert_specfic_node.c insert_node_middle.c print_list.c read_file.c lab4.h lab4Readme total_revenue.c add_item.c average_profit.c current_investment.c delete_item.c delete_node.c option12.c option9.c print_in_stock.c print_out_of_stock.c total_profit.c total_sales.c total_wholesale_cost.c free_dmem.c function_pointer.c

#lab4 dependent
lab4: lab4main.o create_list.o insert_specfic_node.o insert_node_middle.o print_list.o read_file.o total_revenue.o add_item.o average_profit.o current_investment.o delete_item.o delete_node.o option12.o option9.o print_in_stock.o print_out_of_stock.o total_profit.o total_sales.o total_wholesale_cost.o free_dmem.o function_pointer.o
	gcc lab4main.o create_list.o insert_specfic_node.o insert_node_middle.o print_list.o read_file.o total_revenue.o add_item.o average_profit.o current_investment.o delete_item.o delete_node.o option12.o option9.o print_in_stock.o print_out_of_stock.o total_profit.o total_sales.o total_wholesale_cost.o free_dmem.o function_pointer.o -o lab4

#target of lab4main.o
lab4main.o: lab4main.c lab4.h
	gcc $(gcc_opt) lab4main.c

#target of create_list.o
create_list.o: create_list.c lab4.h
	gcc $(gcc_opt) create_list.c

#target of insert_specfic_node.o
insert_specfic_node.o: insert_specfic_node.c lab4.h
	gcc $(gcc_opt) insert_specfic_node.c

#target of insert_node_middle.o
insert_node_middle.o: insert_node_middle.c lab4.h
	gcc $(gcc_opt) insert_node_middle.c

#target of print_list.o
print_list.o: print_list.c lab4.h
	gcc $(gcc_opt) print_list.c

#target of read_file.o
read_file.o: read_file.c lab4.h
	gcc $(gcc_opt) read_file.c

#target of total_revenue
total_revenue.o:total_revenue.c lab4.h
	gcc $(gcc_opt) total_revenue.c

#add_item
add_item.o: add_item.c lab4.h
	gcc $(gcc_opt) add_item.c

#average_profit
average_profit.o: average_profit.c lab4.h
	gcc $(gcc_opt) average_profit.c

#current_investment
current_investment.o: current_investment.c lab4.h
	gcc $(gcc_opt) current_investment.c

#delete_item
delete_item.o: delete_item.c lab4.h
	gcc $(gcc_opt) delete_item.c

#delete_node
delete_node.o: delete_node.c lab4.h
	gcc $(gcc_opt) delete_node.c

#option_12.o
option12.o: option12.c lab4.h
	gcc $(gcc_opt) option12.c

#option9
option9.o: option9.c lab4.h
	gcc $(gcc_opt) option9.c

#print_in_stock
print_in_stock.o: print_in_stock.c lab4.h
	gcc $(gcc_opt) print_in_stock.c

#print_out_of_stock
print_out_of_stock.o: print_out_of_stock.c lab4.h
	gcc $(gcc_opt) print_out_of_stock.c

#total_profit
total_profit.o: total_profit.c lab4.h
	gcc $(gcc_opt) total_profit.c

#total_sales
total_sales.o: total_sales.c lab4.h
	gcc $(gcc_opt) total_sales.c

#total_wholesale_cost
total_wholesale_cost.o: total_wholesale_cost.c lab4.h
	gcc $(gcc_opt) total_wholesale_cost.c

#free_dmem
free_dmem.o: free_dmem.c lab4.h
	gcc $(gcc_opt) free_dmem.c

#function_pointer
function_pointer.o: function_pointer.c lab4.h
	gcc $(gcc_opt) function_pointer.c

#clean
clean:
	rm -rf *.o lab4 lab4.zip

# This is the makefile for lab3.
#
gcc_opt = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g -c

#target all means all targets currently defined
all: lab3.zip lab3

#zip that must be submitted to Carmen Canvas
lab3.zip: Makefile lab3main.c get_ingredients.c get_item.c get_thispizza.c save_info.c free_dmem.c print_ingred.c print_ingred2.c print_order.c lab3.h lab3Readme
	zip lab3.zip Makefile lab3main.c get_ingredients.c get_ingredients.c get_item.c get_thispizza.c save_info.c free_dmem.c print_ingred.c print_ingred2.c print_order.c lab3.h lab3Readme

#This is the dependency relationship of lab3
lab3: lab3main.o get_ingredients.o get_item.o get_thispizza.o save_info.o free_dmem.o print_ingred.o print_ingred2.o print_order.o
	gcc lab3main.o get_ingredients.o get_item.o get_thispizza.o save_info.o free_dmem.o print_ingred.o print_ingred2.o print_order.o -o lab3

#This target is the dependency for lab3main.o
lab3main.o: lab3main.c lab3.h
	gcc $(gcc_opt) lab3main.c

#This target is the dependency for get_ingredients.o
get_ingredients.o: get_ingredients.c lab3.h
	gcc $(gcc_opt) get_ingredients.c

#This target is the dependency for get_item.o
get_item.o: get_item.c lab3.h
	gcc $(gcc_opt) get_item.c

#This target is the dependency for get_thispizza.o
get_thispizza.o: get_thispizza.c lab3.h
	gcc $(gcc_opt) get_thispizza.c

#This target is the dependency for save_info.o
save_info.o: save_info.c lab3.h
	gcc $(gcc_opt) save_info.c

#This target is the dependency for free_dmem.o
free_dmem.o: free_dmem.c lab3.h
	gcc $(gcc_opt) free_dmem.c

#This target is for print_ingred
print_ingred.o: print_ingred.c lab3.h
	gcc $(gcc_opt) print_ingred.c

#This target is for print_ingred2
print_ingred2.o: print_ingred2.c lab3.h
	gcc $(gcc_opt) print_ingred2.c

#This target is for print_order
print_order.o: print_order.c lab3.h
	gcc $(gcc_opt) print_order.c

#This target deletes all files produced from the Makefile
clean:
	rm -rf *.o lab3 lab3.zip

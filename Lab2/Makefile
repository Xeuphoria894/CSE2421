# comments in a Makefile start with sharp 

gcc_opt = -ansi -pedantic -Wimplicit-function-declaration -Wreturn-type -g -c
# target all means all targets currently defined in this file
all: lab2.zip convert1 convert2

# this target is the .zip file that must be submitted to Carmen
lab2.zip: Makefile convert.c LAB2README
	zip lab2.zip Makefile convert.c LAB2README

# this target is the binary converter executable that doesn't prompt for input
convert2: convert2.o
	gcc convert2.o -o convert2

# this target is the dependency for convert2
# we use "-o convert2.o" here so that the .o file doesn't have the same name as the .c file
# most of the time we can use the default .o file, but since in this instance we are creating
# two separate .o files using the same .c file, we have to specify a name for the .o file
convert2.o: convert.c
	gcc $(gcc_opt) -o convert2.o convert.c

# this target is the binary converter executable that prompts for input from the keyboard
convert1: convert1.o
	gcc convert1.o -o convert1

# this target is the dependency for convert1
# we use "-o convert1.o" here so that the .o file doesn't have the same name as the .c file
# note that this compile includes "-D PROMPT" so that our code where we use ifdef's gets included
convert1.o: convert.c
	gcc $(gcc_opt) -D PROMPT -o convert1.o convert.c

# this target deletes all files produced from the Makefile
# so that a completely new compile of all items is required
clean:
	rm -rf *.o convert1 convert2 lab2.zip

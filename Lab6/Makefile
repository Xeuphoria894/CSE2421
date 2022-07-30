#gcc option for .c file
gcc_Copt = -ansi -pedantic -g -Wimplicit-function-declaration -Wreturn-type -c

#gcc option for .s file
gcc_Sopt = -lc -m64 -c -g

#ALl targets
all: lab6.zip lab6

lab6.zip: Makefile print_bits.s get_int.s get_float.s lab6Readme convert.c
	zip lab6.zip Makefile print_bits.s get_int.s get_float.s lab6Readme convert.c

#lab6 executable
lab6: convert.o print_bits.o get_int.o get_float.o
	gcc convert.o print_bits.o get_int.o get_float.o -o lab6

#target of convert.c
convert.o: convert.c
	gcc $(gcc_Copt) convert.c

#target of print_bits
print_bits.o: print_bits.s
	gcc $(gcc_Sopt) print_bits.s

#target of get_int.s
get_int.o: get_int.s
	gcc $(gcc_Sopt) get_int.s

#target of get_float.s
get_float.o: get_float.s
	gcc $(gcc_Sopt) get_float.s

clean:
	rm -rf *.o lab6 lab6.zip

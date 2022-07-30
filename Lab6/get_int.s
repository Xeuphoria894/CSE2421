.file "get_int.s"
.section .rodata
SC_1:
.string "%d"

.data
.align 8	#set the global variable x as int 
x:
.long 0

.globl get_int
	.type	get_int, @function
.text

get_int:
	pushq %rbp
	movq %rsp, %rbp		#setting up the stack
	
	movq $x, %rsi		#move the address of x to 2nd parameter
	movq $SC_1, %rdi	#move the address of %d to 1st parameter
	movq $0, %rax		#set the returned value to 0
	call scanf
	movl x, %eax		#copy the scaned value to rax

	leave
	ret
	.size get_int, .-get_int
	 

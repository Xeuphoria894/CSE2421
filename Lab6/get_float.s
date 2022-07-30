#BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED 
#	TO THE TENSURES OF THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY
#	WITH RESPECT TO THIS ASSIGNMENT.
# 
#	NAME: XINGYUAN(PETER) LUO
.file "get_float.s"
.section .rodata
SC_1:
.string "%f"	#set the scan type as float

.data
.align 8	#set the global variable x (4-byte)
x:
.long 0

.globl get_float
	.type	get_float, @function
.text

get_float:
	pushq %rbp
	movq %rsp, %rbp		#setting up the stack to use
	
	movq $x, %rsi		#copy the address of x to the 2nd parameter
	movq $SC_1, %rdi	#copy the address of %f to the 1st parameter
	movq $0, %rax		#set rax to 0 before calling scanf
	call scanf
	movl x, %eax		#copy the value stored in x to rax

	leave
	ret
	.size get_float, .-get_float

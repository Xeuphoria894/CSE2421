.file "lab7main.s"
.section .rodata
error_message:
.string "Unexpected numbers of input arguments.\n"
open_r:
.string "r"
.data
.align 8
.globl main
	.type main, @function
.text
main:
	pushq %rbp
	movq %rsp, %rbp
	pushq %r12
	pushq %r13
	pushq %r14
	pushq %r15
	cmpl $3, %edi		#test the num of arguments
	jne exit_error
	
	movq %rsi, %r12		#move argv[] to r12
	movq 8(%rsi), %r13
	movq 16(%rsi), %r14
	movq %r13, %rdi

	call atoi
	
	movl %eax, %r13d	#move count into r13d
		#r14 has the address of array

	movq %r14, %rdi
	movq $open_r, %rsi
	call fopen
	
	movq %rax, %r15		#r15 has File*input_file

	movq $24, %rdi
	imulq %r13, %rdi

	call malloc
	movq %rax, %r14		#r14 has the *struct

	movq %r15, %rdi
	movq %r14, %rsi
	movq %r13, %rdx

	call readlines

	movq %r14, %rdi
	movl %r13d, %esi

	call printlines

	movq %r14, %rdi

	call free
	
	jmp exit


exit_error:
	movq $error_message, %rdi	#print error
	movq $0, %rax
	call printf
	leave
	ret

exit:
	popq %r15
	popq %r14
	popq %r13
	popq %r12
	leave
	ret
.size main,.-main

.file "print_bits.s"
.section .rodata
.data
.align 8

.globl print_bits
	.type print_bits, @function
.text

print_bits:
	pushq %rbp
	movq %rsp, %rbp
	
	pushq %r12
	pushq %r13		#preserve the callee values before using
	pushq %rbx
	movl %edi, %r12d	#r12 stores the value to print
	movl $0x80000000, %r13d		#r13 stores the value use for AND (1000 0000 0000 0000 0000 0000 0000 0000)
	movl $32, %ebx		#ebx is the counter of 32
	movl $48, %edi		#set edi to '0'
	pushq %r14		#preserve r14
loop:
	decl %ebx	#decrease ebx by one each time
	jl exit		#jump to exit if negative
	
	movl %ebx, %r14d	#move the counter to r14
	subl $3, %r14d
	andl $3, %r14d		#modify the counter and set flags (i%4==0, then putchar(' '))
	jne put_value		#conditional move to label put_value if i%4 != 0
	movl $32, %edi		#set edi (1st parameter) to ' '
	call putchar
	

put_value:
	movl $48, %edi		#set edi to '0'
	movl $49,%r10d		#set r10 temp value to '1'
	testl %r13d, %r12d	#set the flags
	cmovne %r10d, %edi	#conditional move if ZF is not set
	call putchar
	sall $1, %r12d		#left shift one to the print value
	jmp loop
	
exit:
	popq %r14
	popq %rbx		#pop out can recover the value
	popq %r13
	popq %r12
	leave
	ret
.size print_bits, .-print_bits

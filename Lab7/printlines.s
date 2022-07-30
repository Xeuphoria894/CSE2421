#BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF
#THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
#Name: Peter Luo
.file "printlines.s"
.section .rodata
printf_line:
.string "%d + %d = %ld\n"

.data
.align 8
.globl printlines
	.type printlines, @function
.text

printlines:

	pushq %rbp
	movq %rsp, %rbp

	pushq %r12
	pushq %r13
	pushq %r14
	pushq %r15
	pushq %rbx
	
	movl %esi, %r12d	#save the int count to %r12d
	movq %rdi, %r13		#save the struct* into r13

loop:
	decl %r12d
	jl exit
	movl (%r13), %r14d	#save the value2 to r14d
	addq $8, %r13
	movq (%r13), %r15	#save the value3 to r15
	addq $8, %r13
	movl (%r13), %ebx	#save the value1 to ebx
	addq $8, %r13
	
	movq $printf_line, %rdi
	movl %ebx, %esi
	movl %r14d, %edx
	movq %r15, %rcx
	movq $0, %rax

	call printf
	jmp loop

exit:
	popq %rbx
	popq %r15
	popq %r14
	popq %r13
	popq %r12

	leave
	ret
.size printlines,.-printlines	

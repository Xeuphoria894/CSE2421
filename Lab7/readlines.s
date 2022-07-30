#BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I STRICTLY ADHERED TO THE TENURES OF
#THE OHIO STATE UNIVERSITY'S ACADEMIC INTEGRITY POLICY.
#Name: Peter Luo
.file "readlines.s"
.section .rodata
type_d: .string "%d %d"
.globl readlines
	.type readlines, @function
.text
#To whom it may concern, the stack workaround in the loop below was my doing
#because of a protected memory error that neither Peter nor I could figure out.
#~Ryan Castelli

readlines:
	pushq %rbp
	movq %rsp, %rbp
	
	pushq %r15
	pushq %r14
	pushq %r13

	movq %rdi, %r15		#r15 stores the FILE *fptr
	movl %edx, %r14d	#r14d stores the count
	movq %rsi, %r13		#r13 stores the address of *struct
loop: 
	decl %r14d
	jl exit
	movq $type_d, %rsi
	movq %r15, %rdi
	subq $4, %rsp
	movq %rsp, %rcx
	subq $4, %rsp
	movq %rsp, %rdx		#set up rcx and rdx to store the scanned values.

	call fscanf

	movl 4(%rsp), %edi
	movl %edi, (%r13)
	movl (%rsp), %esi
	movl %esi, 16(%r13)	#p+0, p+8, p+16, ends at p+24; size = 24, alighment = 8
	addq $8, %rsp
	movslq %edi, %rdi
	movslq %esi, %rsi
	addq %rdi, %rsi
	movq %rsi, 8(%r13)

	addq $24, %r13

	jmp loop

exit:
	movq %r15, %rdi
	call fclose

	popq %r13
	popq %r14
	popq %r15

	leave
	ret

.size readlines, .-readlines

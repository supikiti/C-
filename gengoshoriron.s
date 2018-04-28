  .section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_trib
	.p2align	4, 0x90
_trib:                                  ## @trib
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$48, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	%edx, -12(%rbp)
	cmpl	$0, -8(%rbp)
	jne	LBB0_2
## BB#1:
	leaq	L_.str(%rip), %rdi
	movl	-4(%rbp), %esi
	movb	$0, %al
	callq	_printf
	leaq	L_.str(%rip), %rdi
	movl	-8(%rbp), %esi
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	leaq	L_.str(%rip), %rdi
	movl	-12(%rbp), %esi
	movl	%eax, -32(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_printf
	movl	%eax, -36(%rbp)         ## 4-byte Spill
LBB0_2:
	movl	-8(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, -20(%rbp)
	movl	-4(%rbp), %eax
	addl	-8(%rbp), %eax
	addl	-12(%rbp), %eax
	movl	%eax, -24(%rbp)
	cmpl	$1000, -24(%rbp)        ## imm = 0x3E8
	jle	LBB0_4
## BB#3:
	jmp	LBB0_5
LBB0_4:
	leaq	L_.str(%rip), %rdi
	movl	-24(%rbp), %esi
	movb	$0, %al
	callq	_printf
	movl	-16(%rbp), %edi
	movl	-20(%rbp), %esi
	movl	-24(%rbp), %edx
	movl	%eax, -40(%rbp)         ## 4-byte Spill
	callq	_trib
LBB0_5:
	addq	$48, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp5:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -12(%rbp)
	movl	$1, -16(%rbp)
	movl	-8(%rbp), %edi
	movl	-12(%rbp), %esi
	movl	-16(%rbp), %edx
	callq	_trib
	xorl	%eax, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d\t"


.subsections_via_symbols

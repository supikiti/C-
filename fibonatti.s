	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_main
	.p2align	4, 0x90
_main:                                  ## @main
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
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	movl	$1, -12(%rbp)
LBB0_1:                                 ## =>This Inner Loop Header: Depth=1
	cmpl	$100000, -12(%rbp)      ## imm = 0x186A0
	jge	LBB0_3
## BB#2:                                ##   in Loop: Header=BB0_1 Depth=1
	leaq	L_.str(%rip), %rdi
	movl	-12(%rbp), %esi
	movb	$0, %al
	callq	_printf
	movl	-12(%rbp), %esi
	addl	-8(%rbp), %esi
	movl	%esi, -16(%rbp)
	movl	-12(%rbp), %esi
	movl	%esi, -8(%rbp)
	movl	-16(%rbp), %esi
	movl	%esi, -12(%rbp)
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	jmp	LBB0_1
LBB0_3:
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"%d\n"


.subsections_via_symbols

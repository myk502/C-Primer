	.file	"test.cpp"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB31:
	.cfi_startproc
	cmpl	$1, %edi
	je	.L3
.L1:
	rep ret
.L3:
	cmpl	$65535, %esi
	jne	.L1
	cvttsd2si	temp(%rip), %eax
	movl	%eax, _ZGR1b0(%rip)
	leaq	_ZGR1b0(%rip), %rax
	movq	%rax, b(%rip)
	jmp	.L1
	.cfi_endproc
.LFE31:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.globl	main
	.type	main, @function
main:
.LFB30:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	temp(%rip), %rdi
	call	_Z3funPd@PLT
	movl	$0, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE30:
	.size	main, .-main
	.type	_GLOBAL__sub_I_temp, @function
_GLOBAL__sub_I_temp:
.LFB32:
	.cfi_startproc
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	rep ret
	.cfi_endproc
.LFE32:
	.size	_GLOBAL__sub_I_temp, .-_GLOBAL__sub_I_temp
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_temp
	.globl	b
	.bss
	.align 8
	.type	b, @object
	.size	b, 8
b:
	.zero	8
	.local	_ZGR1b0
	.comm	_ZGR1b0,4,4
	.globl	temp
	.align 8
	.type	temp, @object
	.size	temp, 8
temp:
	.zero	8
	.ident	"GCC: (Ubuntu 7.2.0-8ubuntu3.2) 7.2.0"
	.section	.note.GNU-stack,"",@progbits

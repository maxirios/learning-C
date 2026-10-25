	.file	"16-volatile.c"
	.text
	.p2align 4
	.globl	wait_for_flag
	.type	wait_for_flag, @function
wait_for_flag:
.LFB0:
	.cfi_startproc
	movl	(%rdi), %eax
	testl	%eax, %eax
	jne	.L5
.L4:
	jmp	.L4
	.p2align 4,,10
	.p2align 3
.L5:
	movl	$1, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	wait_for_flag, .-wait_for_flag
	.ident	"GCC: (Debian 12.2.0-14+deb12u1) 12.2.0"
	.section	.note.GNU-stack,"",@progbits

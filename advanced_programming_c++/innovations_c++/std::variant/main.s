	.file	"main.cpp"
	.text
	.p2align 4
	.type	_ZSt10__do_visitIvZNSt8__detail9__variant16_Variant_storageILb0EJiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIiSaIiEEEE8_M_resetEvEUlOT_E_JRSt7variantIJiS8_SB_EEEEDcOT0_DpOT1_.isra.0, @function
_ZSt10__do_visitIvZNSt8__detail9__variant16_Variant_storageILb0EJiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIiSaIiEEEE8_M_resetEvEUlOT_E_JRSt7variantIJiS8_SB_EEEEDcOT0_DpOT1_.isra.0:
.LFB3288:
	.cfi_startproc
	movzbl	32(%rdi), %eax
	cmpb	$1, %al
	je	.L2
	cmpb	$2, %al
	jne	.L11
	movq	(%rdi), %rax
	testq	%rax, %rax
	je	.L1
	movq	16(%rdi), %rsi
	movq	%rax, %rdi
	subq	%rax, %rsi
	jmp	_ZdlPvm@PLT
.L2:
	movq	(%rdi), %rax
	leaq	16(%rdi), %rdx
	cmpq	%rdx, %rax
	jne	.L12
.L1:
	ret
.L11:
	ret
.L12:
	movq	16(%rdi), %rsi
	movq	%rax, %rdi
	addq	$1, %rsi
	jmp	_ZdlPvm@PLT
	.cfi_endproc
.LFE3288:
	.size	_ZSt10__do_visitIvZNSt8__detail9__variant16_Variant_storageILb0EJiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIiSaIiEEEE8_M_resetEvEUlOT_E_JRSt7variantIJiS8_SB_EEEEDcOT0_DpOT1_.isra.0, .-_ZSt10__do_visitIvZNSt8__detail9__variant16_Variant_storageILb0EJiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIiSaIiEEEE8_M_resetEvEUlOT_E_JRSt7variantIJiS8_SB_EEEEDcOT0_DpOT1_.isra.0
	.p2align 4
	.type	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0, @function
_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0:
.LFB3290:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$8, %rsp
	.cfi_def_cfa_offset 32
	movq	(%rdi), %rax
	movq	-24(%rax), %rax
	movq	240(%rdi,%rax), %rbp
	testq	%rbp, %rbp
	je	.L18
	cmpb	$0, 56(%rbp)
	movq	%rdi, %rbx
	je	.L15
	movsbl	67(%rbp), %esi
.L16:
	movq	%rbx, %rdi
	call	_ZNSo3putEc@PLT
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbx
	.cfi_def_cfa_offset 16
	movq	%rax, %rdi
	popq	%rbp
	.cfi_def_cfa_offset 8
	jmp	_ZNSo5flushEv@PLT
.L15:
	.cfi_restore_state
	movq	%rbp, %rdi
	call	_ZNKSt5ctypeIcE13_M_widen_initEv@PLT
	movq	0(%rbp), %rax
	movl	$10, %esi
	movq	%rbp, %rdi
	call	*48(%rax)
	movsbl	%al, %esi
	jmp	.L16
.L18:
	call	_ZSt16__throw_bad_castv@PLT
	.cfi_endproc
.LFE3290:
	.size	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0, .-_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	.section	.text.unlikely,"ax",@progbits
.LCOLDB2:
	.text
.LHOTB2:
	.p2align 4
	.globl	_Z10GetVariantB5cxx11v
	.type	_Z10GetVariantB5cxx11v, @function
_Z10GetVariantB5cxx11v:
.LFB2259:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA2259
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	movq	%rdi, %rbx
	xorl	%edi, %edi
	subq	$48, %rsp
	.cfi_def_cfa_offset 80
	movq	%fs:40, %rax
	movq	%rax, 40(%rsp)
	xorl	%eax, %eax
	call	time@PLT
	movl	%eax, %edi
	call	srand@PLT
	call	rand@PLT
	pxor	%xmm0, %xmm0
	movq	$0, 32(%rbx)
	movslq	%eax, %rdx
	movl	%eax, %ecx
	movups	%xmm0, (%rbx)
	imulq	$1431655766, %rdx, %rdx
	sarl	$31, %ecx
	movups	%xmm0, 16(%rbx)
	shrq	$32, %rdx
	subl	%ecx, %edx
	leal	(%rdx,%rdx,2), %ecx
	subl	%ecx, %eax
	cmpl	$1, %eax
	je	.L20
	cmpl	$2, %eax
	je	.L21
	testl	%eax, %eax
	je	.L36
.L19:
	movq	40(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L37
	addq	$48, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 32
	movq	%rbx, %rax
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L20:
	.cfi_restore_state
	movl	$26478, %eax
	movl	$1769108595, 16(%rsp)
	movw	%ax, 20(%rsp)
	leaq	16(%rbx), %rax
	movb	$0, 22(%rsp)
	movl	19(%rsp), %edx
	movl	$1769108595, 16(%rbx)
	movq	%rax, (%rbx)
	movl	%edx, 19(%rbx)
	movq	$6, 8(%rbx)
	movb	$1, 32(%rbx)
	jmp	.L19
	.p2align 4,,10
	.p2align 3
.L36:
	movl	$5, (%rbx)
	jmp	.L19
	.p2align 4,,10
	.p2align 3
.L21:
	movdqa	.LC0(%rip), %xmm0
	movl	$20, %edi
	movl	$5, 16(%rsp)
	movaps	%xmm0, (%rsp)
.LEHB0:
	call	_Znwm@PLT
.LEHE0:
	movdqa	(%rsp), %xmm1
	movq	%rax, %rbp
	leaq	20(%rax), %r12
	movups	%xmm1, (%rax)
	movl	16(%rsp), %eax
	movl	%eax, 16(%rbp)
	movzbl	32(%rbx), %eax
	cmpb	$2, %al
	je	.L38
	testb	%al, %al
	je	.L25
	movq	(%rbx), %rdi
	leaq	16(%rbx), %rax
	cmpq	%rax, %rdi
	je	.L25
	movq	16(%rbx), %rax
	leaq	1(%rax), %rsi
	call	_ZdlPvm@PLT
.L25:
	movq	%rbp, (%rbx)
	movq	%r12, 8(%rbx)
	movq	%r12, 16(%rbx)
	movb	$2, 32(%rbx)
	jmp	.L19
	.p2align 4,,10
	.p2align 3
.L38:
	movq	(%rbx), %rdi
	movq	16(%rbx), %rsi
	movq	%rbp, (%rbx)
	movq	%r12, 8(%rbx)
	movq	%r12, 16(%rbx)
	testq	%rdi, %rdi
	je	.L19
	subq	%rdi, %rsi
	call	_ZdlPvm@PLT
	jmp	.L19
.L37:
	call	__stack_chk_fail@PLT
.L28:
	movq	%rax, %rbp
	jmp	.L26
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA2259:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2259-.LLSDACSB2259
.LLSDACSB2259:
	.uleb128 .LEHB0-.LFB2259
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L28-.LFB2259
	.uleb128 0
.LLSDACSE2259:
	.text
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDAC2259
	.type	_Z10GetVariantB5cxx11v.cold, @function
_Z10GetVariantB5cxx11v.cold:
.LFSB2259:
.L26:
	.cfi_def_cfa_offset 80
	.cfi_offset 3, -32
	.cfi_offset 6, -24
	.cfi_offset 12, -16
	movq	%rbx, %rdi
	call	_ZSt10__do_visitIvZNSt8__detail9__variant16_Variant_storageILb0EJiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIiSaIiEEEE8_M_resetEvEUlOT_E_JRSt7variantIJiS8_SB_EEEEDcOT0_DpOT1_.isra.0
	movq	%rbp, %rdi
.LEHB1:
	call	_Unwind_Resume@PLT
.LEHE1:
	.cfi_endproc
.LFE2259:
	.section	.gcc_except_table
.LLSDAC2259:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSEC2259-.LLSDACSBC2259
.LLSDACSBC2259:
	.uleb128 .LEHB1-.LCOLDB2
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSEC2259:
	.section	.text.unlikely
	.text
	.size	_Z10GetVariantB5cxx11v, .-_Z10GetVariantB5cxx11v
	.section	.text.unlikely
	.size	_Z10GetVariantB5cxx11v.cold, .-_Z10GetVariantB5cxx11v.cold
.LCOLDE2:
	.text
.LHOTE2:
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC3:
	.string	" "
	.section	.text.unlikely
.LCOLDB4:
	.section	.text.startup,"ax",@progbits
.LHOTB4:
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB2326:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA2326
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$120, %rsp
	.cfi_def_cfa_offset 176
	movq	%fs:40, %rax
	movq	%rax, 104(%rsp)
	xorl	%eax, %eax
	leaq	64(%rsp), %rbp
	movq	%rbp, %rdi
.LEHB2:
	call	_Z10GetVariantB5cxx11v
.LEHE2:
	movzbl	96(%rsp), %eax
	testb	%al, %al
	je	.L82
	cmpb	$1, %al
	je	.L83
	cmpb	$2, %al
	je	.L84
.L41:
	movq	%rbp, %rdi
	call	_ZSt10__do_visitIvZNSt8__detail9__variant16_Variant_storageILb0EJiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIiSaIiEEEE8_M_resetEvEUlOT_E_JRSt7variantIJiS8_SB_EEEEDcOT0_DpOT1_.isra.0
	movq	104(%rsp), %rax
	subq	%fs:40, %rax
	jne	.L85
	addq	$120, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
.L82:
	.cfi_restore_state
	movl	64(%rsp), %eax
	leaq	_ZSt4cout(%rip), %rdi
	leal	(%rax,%rax), %esi
.LEHB3:
	call	_ZNSolsEi@PLT
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	jmp	.L41
.L84:
	movq	72(%rsp), %rax
	movq	%rax, %rcx
	subq	64(%rsp), %rcx
	movq	%rcx, 8(%rsp)
	je	.L49
	movabsq	$9223372036854775804, %rax
	cmpq	%rcx, %rax
	jb	.L86
	movq	8(%rsp), %rdi
	call	_Znwm@PLT
.LEHE3:
	movq	%rax, %r15
	movq	72(%rsp), %rax
	movq	64(%rsp), %rsi
	movq	%rax, %rdx
	subq	%rsi, %rdx
	leaq	(%r15,%rdx), %r12
	cmpq	%rsi, %rax
	je	.L51
	movq	%r15, %rdi
	call	memmove@PLT
	cmpq	%r15, %r12
	je	.L57
.L56:
	movq	%r15, %rbx
	leaq	_ZSt4cout(%rip), %r13
	leaq	.LC3(%rip), %r14
	.p2align 4,,10
	.p2align 3
.L54:
	movl	(%rbx), %esi
	movq	%r13, %rdi
.LEHB4:
	call	_ZNSolsEi@PLT
	movq	%rax, %rdi
	movl	$1, %edx
	movq	%r14, %rsi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
.LEHE4:
	addq	$4, %rbx
	cmpq	%rbx, %r12
	jne	.L54
	testq	%r15, %r15
	je	.L41
.L57:
	movq	8(%rsp), %rsi
	movq	%r15, %rdi
	call	_ZdlPvm@PLT
	jmp	.L41
.L83:
	movq	72(%rsp), %rbx
	leaq	48(%rsp), %r12
	movq	64(%rsp), %r13
	leaq	32(%rsp), %rdi
	movq	%r12, 32(%rsp)
	movq	%rbx, 24(%rsp)
	cmpq	$15, %rbx
	ja	.L87
	cmpq	$1, %rbx
	jne	.L45
	movzbl	0(%r13), %eax
	movb	%al, 48(%rsp)
.L46:
	movq	24(%rsp), %rax
	movq	32(%rsp), %rdx
	leaq	_ZSt4cout(%rip), %rdi
	movq	%rax, 40(%rsp)
	movb	$0, (%rdx,%rax)
	movq	40(%rsp), %rdx
	movq	32(%rsp), %rsi
.LEHB5:
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	movq	%rax, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
.LEHE5:
	movq	32(%rsp), %rdi
	cmpq	%r12, %rdi
	je	.L41
	movq	48(%rsp), %rax
	leaq	1(%rax), %rsi
	call	_ZdlPvm@PLT
	jmp	.L41
.L51:
	testq	%rdx, %rdx
	jne	.L56
	jmp	.L57
.L49:
	movq	64(%rsp), %rsi
	movq	%rax, %rdx
	subq	%rsi, %rdx
	movq	%rdx, %r12
	cmpq	%rax, %rsi
	jne	.L88
	xorl	%r15d, %r15d
	testq	%r12, %r12
	jne	.L56
	jmp	.L41
.L45:
	testq	%rbx, %rbx
	je	.L46
	movq	%r12, %rdi
.L44:
	movq	%rbx, %rdx
	movq	%r13, %rsi
	call	memcpy@PLT
	jmp	.L46
.L87:
	leaq	24(%rsp), %rsi
	xorl	%edx, %edx
.LEHB6:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE9_M_createERmm@PLT
	movq	%rax, 32(%rsp)
	movq	%rax, %rdi
	movq	24(%rsp), %rax
	movq	%rax, 48(%rsp)
	jmp	.L44
.L88:
	xorl	%edi, %edi
	xorl	%r15d, %r15d
	call	memmove@PLT
	jmp	.L57
.L86:
	call	_ZSt28__throw_bad_array_new_lengthv@PLT
.LEHE6:
.L85:
	call	__stack_chk_fail@PLT
.L68:
	movq	%rax, %rbx
	jmp	.L61
.L69:
	movq	%rax, %rbx
	jmp	.L59
.L70:
	movq	%rax, %rbx
	jmp	.L62
	.section	.gcc_except_table
.LLSDA2326:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE2326-.LLSDACSB2326
.LLSDACSB2326:
	.uleb128 .LEHB2-.LFB2326
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB2326
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L68-.LFB2326
	.uleb128 0
	.uleb128 .LEHB4-.LFB2326
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L70-.LFB2326
	.uleb128 0
	.uleb128 .LEHB5-.LFB2326
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L69-.LFB2326
	.uleb128 0
	.uleb128 .LEHB6-.LFB2326
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L68-.LFB2326
	.uleb128 0
.LLSDACSE2326:
	.section	.text.startup
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDAC2326
	.type	main.cold, @function
main.cold:
.LFSB2326:
.L59:
	.cfi_def_cfa_offset 176
	.cfi_offset 3, -56
	.cfi_offset 6, -48
	.cfi_offset 12, -40
	.cfi_offset 13, -32
	.cfi_offset 14, -24
	.cfi_offset 15, -16
	movq	32(%rsp), %rdi
	cmpq	%r12, %rdi
	je	.L61
	movq	48(%rsp), %rax
	leaq	1(%rax), %rsi
	call	_ZdlPvm@PLT
.L61:
	movq	%rbp, %rdi
	call	_ZSt10__do_visitIvZNSt8__detail9__variant16_Variant_storageILb0EJiNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIiSaIiEEEE8_M_resetEvEUlOT_E_JRSt7variantIJiS8_SB_EEEEDcOT0_DpOT1_.isra.0
	movq	%rbx, %rdi
.LEHB7:
	call	_Unwind_Resume@PLT
.LEHE7:
.L62:
	testq	%r15, %r15
	je	.L61
	movq	8(%rsp), %rsi
	movq	%r15, %rdi
	call	_ZdlPvm@PLT
	jmp	.L61
	.cfi_endproc
.LFE2326:
	.section	.gcc_except_table
.LLSDAC2326:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSEC2326-.LLSDACSBC2326
.LLSDACSBC2326:
	.uleb128 .LEHB7-.LCOLDB4
	.uleb128 .LEHE7-.LEHB7
	.uleb128 0
	.uleb128 0
.LLSDACSEC2326:
	.section	.text.unlikely
	.section	.text.startup
	.size	main, .-main
	.section	.text.unlikely
	.size	main.cold, .-main.cold
.LCOLDE4:
	.section	.text.startup
.LHOTE4:
	.p2align 4
	.type	_GLOBAL__sub_I__Z10GetVariantB5cxx11v, @function
_GLOBAL__sub_I__Z10GetVariantB5cxx11v:
.LFB3281:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	leaq	_ZStL8__ioinit(%rip), %rbx
	movq	%rbx, %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	movq	%rbx, %rsi
	popq	%rbx
	.cfi_def_cfa_offset 8
	leaq	__dso_handle(%rip), %rdx
	jmp	__cxa_atexit@PLT
	.cfi_endproc
.LFE3281:
	.size	_GLOBAL__sub_I__Z10GetVariantB5cxx11v, .-_GLOBAL__sub_I__Z10GetVariantB5cxx11v
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z10GetVariantB5cxx11v
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata.cst16,"aM",@progbits,16
	.align 16
.LC0:
	.long	1
	.long	2
	.long	3
	.long	4
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 12.2.0"
	.section	.note.GNU-stack,"",@progbits

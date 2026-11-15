	THUMB_FUNC_START sub_080E46C8
sub_080E46C8: @ 0x080E46C8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsl r1, r1, #24
	lsr r5, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	str r2, [sp]
	ldr r4, _080E47F4  @ =gRam
	ldr r0, _080E47F8  @ =gUnknown_03003112
	add r0, r6, r0
	str r0, [sp, #4]
	ldrb r1, [r0]
	ldr r2, _080E47FC  @ =gUnknown_03003132
	add r2, r2, r6
	mov r10, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #16
	ldr r3, _080E4800  @ =gUnknown_03003102
	add r3, r3, r6
	mov r8, r3
	ldrb r2, [r3]
	ldr r0, _080E4804  @ =gUnknown_03003122
	add r7, r6, r0
	ldrb r0, [r7]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r2, r2, #16
	ldr r3, _080E4808  @ =gUnknown_03002B90
	strb r1, [r3]
	lsr r1, r1, #8
	mov r3, #151
	lsl r3, r3, #4
	add r0, r4, r3
	strb r1, [r0]
	mov r0, #48
	ldr r1, _080E480C  @ =gUnknown_03002B94
	strb r0, [r1]
	ldr r3, _080E4810  @ =gUnknown_03002B95
	strb r0, [r3]
	ldr r0, _080E4814  @ =0x00000961
	add r0, r0, r4
	mov r9, r0
	strb r2, [r0]
	lsr r2, r2, #8
	ldr r1, _080E4818  @ =0x00000971
	add r0, r4, r1
	strb r2, [r0]
	add r0, r5, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E47E4
	ldr r2, _080E481C  @ =0x00000FF2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #17
	beq _080E47E4
	add r0, r5, #0
	ldr r1, [sp]
	bl sub_080C3FCC
	ldr r3, [sp, #4]
	ldrb r0, [r3]
	ldr r1, _080E4808  @ =gUnknown_03002B90
	strb r0, [r1]
	mov r2, r10
	ldrb r0, [r2]
	mov r3, r9
	strb r0, [r3]
	mov r0, r8
	ldrb r1, [r0]
	ldrb r0, [r7]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080E4820  @ =0x00001142
	add r2, r4, r3
	add r0, r6, r2
	ldrb r0, [r0]
	sub r1, r1, r0
	ldr r0, _080E480C  @ =gUnknown_03002B94
	strb r1, [r0]
	lsr r1, r1, #8
	ldr r3, _080E4810  @ =gUnknown_03002B95
	strb r1, [r3]
	ldr r1, _080E47F8  @ =gUnknown_03003112
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r3, _080E4824  @ =0x00000968
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080E47FC  @ =gUnknown_03003132
	add r0, r5, r1
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080E4800  @ =gUnknown_03003102
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r3, _080E4804  @ =gUnknown_03003122
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r2, r5, r2
	ldrb r0, [r2]
	sub r1, r1, r0
	ldr r2, _080E4828  @ =0x0000096C
	add r0, r4, r2
	strb r1, [r0]
	lsr r1, r1, #8
	ldr r3, _080E482C  @ =0x0000096D
	add r0, r4, r3
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #32
	bl sub_080C2DCC
	ldr r1, _080E4830  @ =0x00001102
	add r0, r4, r1
	add r0, r5, r0
	ldr r2, _080E4808  @ =gUnknown_03002B90
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r3, _080E4834  @ =0x00001112
	add r0, r4, r3
	add r0, r5, r0
	mov r2, r9
	ldrb r1, [r2]
	strb r1, [r0]
_080E47E4:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080E47F4:
	.4byte gRam
_080E47F8:
	.4byte gUnknown_03003112
_080E47FC:
	.4byte gUnknown_03003132
_080E4800:
	.4byte gUnknown_03003102
_080E4804:
	.4byte gUnknown_03003122
_080E4808:
	.4byte gUnknown_03002B90
_080E480C:
	.4byte gUnknown_03002B94
_080E4810:
	.4byte gUnknown_03002B95
_080E4814:
	.4byte 0x00000961
_080E4818:
	.4byte 0x00000971
_080E481C:
	.4byte 0x00000FF2
_080E4820:
	.4byte 0x00001142
_080E4824:
	.4byte 0x00000968
_080E4828:
	.4byte 0x0000096C
_080E482C:
	.4byte 0x0000096D
_080E4830:
	.4byte 0x00001102
_080E4834:
	.4byte 0x00001112
	THUMB_FUNC_END sub_080E46C8


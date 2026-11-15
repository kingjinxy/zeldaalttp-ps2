	THUMB_FUNC_START sub_080C8998
sub_080C8998: @ 0x080C8998
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r9
	bl sub_080C5ACC
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _080C8A9A
	ldr r3, _080C89E4  @ =gRam
	ldr r1, _080C89E8  @ =0x00000F92
	add r0, r3, r1
	add r0, r0, r9
	ldrb r2, [r0]
	lsl r1, r2, #2
	ldr r5, _080C89EC  @ =0x0000096C
	add r0, r3, r5
	strb r1, [r0]
	cmp r2, #11
	bhi _080C89DC
	mov r1, #3
	and r2, r2, r1
	cmp r2, #0
	beq _080C89F4
_080C89DC:
	ldr r1, _080C89F0  @ =0x0000096D
	add r0, r3, r1
	strb r4, [r0]
	b _080C89FA
_080C89E4:
	.4byte gRam
_080C89E8:
	.4byte 0x00000F92
_080C89EC:
	.4byte 0x0000096C
_080C89F0:
	.4byte 0x0000096D
_080C89F4:
	ldr r2, _080C8AAC  @ =0x0000096D
	add r0, r3, r2
	strb r1, [r0]
_080C89FA:
	ldr r2, _080C8AB0  @ =gRam
	ldr r5, _080C8AAC  @ =0x0000096D
	add r0, r2, r5
	mov r7, #0
	ldrsb r7, [r0, r7]
	cmp r7, #0
	blt _080C8A8A
	mov r8, r2
	ldr r0, _080C8AB4  @ =gUnknown_03003E74
	mov r10, r0
_080C8A0E:
	ldr r0, _080C8AB8  @ =0x0000096C
	add r0, r0, r8
	ldrb r6, [r0]
	add r6, r6, r7
	lsl r6, r6, #24
	lsr r6, r6, #24
	ldr r0, _080C8AAC  @ =0x0000096D
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	sub r0, r0, r7
	mov r1, r10
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r1, _080C8ABC  @ =gUnknown_081725EC
	add r1, r6, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080C8AC0  @ =0x00000964
	add r3, r3, r8
	ldr r2, _080C8AC4  @ =gUnknown_08172624
	add r2, r6, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080C8AC8  @ =gUnknown_0817265C
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _080C8ACC  @ =gUnknown_08172694
	add r4, r6, r4
	ldrb r4, [r4]
	mov r12, r4
	ldr r5, _080C8AD0  @ =gUnknown_03002B99
	ldrb r4, [r5]
	mov r5, r12
	eor r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	ldr r4, _080C8AD4  @ =gUnknown_081726CC
	add r6, r6, r4
	ldrb r4, [r6]
	str r4, [sp]
	bl sub_080C6004
	sub r7, r7, #1
	cmp r7, #0
	bge _080C8A0E
_080C8A8A:
	ldr r0, _080C8AB0  @ =gRam
	ldr r1, _080C8AAC  @ =0x0000096D
	add r0, r0, r1
	ldrb r2, [r0]
	mov r0, r9
	mov r1, #255
	bl sub_080C5DA0
_080C8A9A:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C8AAC:
	.4byte 0x0000096D
_080C8AB0:
	.4byte gRam
_080C8AB4:
	.4byte gUnknown_03003E74
_080C8AB8:
	.4byte 0x0000096C
_080C8ABC:
	.4byte gUnknown_081725EC
_080C8AC0:
	.4byte 0x00000964
_080C8AC4:
	.4byte gUnknown_08172624
_080C8AC8:
	.4byte gUnknown_0817265C
_080C8ACC:
	.4byte gUnknown_08172694
_080C8AD0:
	.4byte gUnknown_03002B99
_080C8AD4:
	.4byte gUnknown_081726CC
	THUMB_FUNC_END sub_080C8998


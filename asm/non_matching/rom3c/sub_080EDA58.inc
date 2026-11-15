	THUMB_FUNC_START sub_080EDA58
sub_080EDA58: @ 0x080EDA58
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EDB14
	ldr r2, _080EDB24  @ =gRam
	ldr r1, _080EDB28  @ =0x00000F92
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	ldr r3, _080EDB2C  @ =0x0000096C
	add r1, r2, r3
	strb r0, [r1]
	mov r6, #3
	add r7, r2, #0
	ldr r4, _080EDB30  @ =0x00000969
	add r4, r4, r7
	mov r9, r4
	ldr r5, _080EDB34  @ =gUnknown_081786AC
	mov r8, r5
_080EDA98:
	ldr r0, _080EDB38  @ =gUnknown_03003E74
	sub r1, r6, #3
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r1, r7, r2
	ldrb r2, [r1]
	ldr r3, _080EDB3C  @ =0x00000961
	add r1, r7, r3
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	ldr r1, _080EDB40  @ =gUnknown_081786A4
	add r1, r6, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _080EDB44  @ =0x00000964
	add r2, r7, r4
	ldrb r3, [r2]
	ldr r5, _080EDB48  @ =0x00000965
	add r2, r7, r5
	ldrb r2, [r2]
	lsl r2, r2, #8
	add r3, r3, r2
	ldr r2, _080EDB4C  @ =gUnknown_081786A8
	add r2, r6, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r4, r4, #8
	add r3, r7, r4
	ldrb r3, [r3]
	add r3, r3, r6
	add r3, r3, r8
	ldrb r3, [r3]
	ldr r4, _080EDB50  @ =gUnknown_081786B4
	add r4, r6, r4
	ldrb r4, [r4]
	mov r12, r4
	mov r5, r9
	ldrb r4, [r5]
	mov r5, r12
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	sub r6, r6, #1
	cmp r6, #0
	bge _080EDA98
_080EDB14:
	add sp, sp, #8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EDB24:
	.4byte gRam
_080EDB28:
	.4byte 0x00000F92
_080EDB2C:
	.4byte 0x0000096C
_080EDB30:
	.4byte 0x00000969
_080EDB34:
	.4byte gUnknown_081786AC
_080EDB38:
	.4byte gUnknown_03003E74
_080EDB3C:
	.4byte 0x00000961
_080EDB40:
	.4byte gUnknown_081786A4
_080EDB44:
	.4byte 0x00000964
_080EDB48:
	.4byte 0x00000965
_080EDB4C:
	.4byte gUnknown_081786A8
_080EDB50:
	.4byte gUnknown_081786B4
	THUMB_FUNC_END sub_080EDA58


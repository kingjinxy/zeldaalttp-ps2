	THUMB_FUNC_START sub_080F128C
sub_080F128C: @ 0x080F128C
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _080F137C  @ =gRam
	ldr r2, _080F1380  @ =0x00000FC2
	add r0, r1, r2
	add r0, r6, r0
	ldrb r0, [r0]
	add r7, r1, #0
	cmp r0, #0
	bne _080F131E
	ldr r3, _080F1384  @ =0x00000F82
	add r0, r7, r3
	add r4, r6, r0
	ldrb r2, [r4]
	ldr r1, _080F1388  @ =0x00000F62
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	sub r3, r3, #16
	add r0, r7, r3
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	ldr r3, _080F138C  @ =gUnknown_08178E84
	lsl r2, r2, #1
	add r2, r2, r3
	orr r1, r1, r0
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080F1390  @ =0x00000EE2
	add r0, r7, r2
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r3, _080F1394  @ =0x00000F02
	add r0, r7, r3
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	cmp r1, r2
	bne _080F131E
	ldr r0, _080F1398  @ =0x00001082
	add r1, r7, r0
	add r1, r6, r1
	ldr r2, _080F139C  @ =0x00000FB2
	add r0, r7, r2
	add r0, r6, r0
	ldrb r0, [r0]
	mov r3, #1
	eor r0, r0, r3
	strb r0, [r1]
	ldrb r2, [r1]
	ldr r0, _080F13A0  @ =0x00000F22
	add r1, r7, r0
	add r1, r6, r1
	ldr r0, _080F13A4  @ =gUnknown_08178E7C
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F13A8  @ =0x00000F12
	add r1, r7, r0
	add r1, r6, r1
	ldr r0, _080F13AC  @ =gUnknown_08178E80
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldrb r0, [r4]
	eor r0, r0, r3
	strb r0, [r4]
_080F131E:
	ldr r1, _080F13B0  @ =0x00000F92
	add r2, r7, r1
	add r2, r6, r2
	ldr r3, _080F13B4  @ =0x00000996
	add r0, r7, r3
	ldrb r1, [r0]
	add r0, r6, #0
	eor r0, r0, r1
	lsr r0, r0, #4
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _080F13B8  @ =0x00001132
	add r4, r7, r0
	add r4, r6, r4
	ldrb r5, [r4]
	mov r0, #3
	strb r0, [r4]
	add r0, r6, #0
	mov r1, #50
	mov r2, sp
	bl sub_080C94F4
	lsl r0, r0, #24
	strb r5, [r4]
	cmp r0, #0
	beq _080F1372
	ldr r1, _080F139C  @ =0x00000FB2
	add r0, r7, r1
	add r0, r6, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080CB8D8
	ldr r2, _080F13BC  @ =0x00000F52
	add r1, r7, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F1372:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F137C:
	.4byte gRam
_080F1380:
	.4byte 0x00000FC2
_080F1384:
	.4byte 0x00000F82
_080F1388:
	.4byte 0x00000F62
_080F138C:
	.4byte gUnknown_08178E84
_080F1390:
	.4byte 0x00000EE2
_080F1394:
	.4byte 0x00000F02
_080F1398:
	.4byte 0x00001082
_080F139C:
	.4byte 0x00000FB2
_080F13A0:
	.4byte 0x00000F22
_080F13A4:
	.4byte gUnknown_08178E7C
_080F13A8:
	.4byte 0x00000F12
_080F13AC:
	.4byte gUnknown_08178E80
_080F13B0:
	.4byte 0x00000F92
_080F13B4:
	.4byte 0x00000996
_080F13B8:
	.4byte 0x00001132
_080F13BC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F128C


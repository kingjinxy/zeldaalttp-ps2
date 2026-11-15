	THUMB_FUNC_START sub_080F9AC0
sub_080F9AC0: @ 0x080F9AC0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080F9B88  @ =gRam
	ldr r1, _080F9B8C  @ =0x00000FC2
	add r0, r6, r1
	add r0, r0, r5
	mov r8, r0
	ldrb r7, [r0]
	cmp r7, #0
	bne _080F9B7C
	ldr r4, _080F9B90  @ =gUnknown_0817A322
	bl GetRandomInt
	mov r1, #7
	and r1, r1, r0
	add r1, r1, r4
	ldrb r4, [r1]
	ldr r1, _080F9B94  @ =0x00000F62
	add r0, r6, r1
	add r0, r5, r0
	ldrb r3, [r0]
	add r1, r1, #16
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _080F9B98  @ =gUnknown_0817A2FE
	add r0, r4, r0
	orr r3, r3, r1
	ldrb r0, [r0]
	add r3, r3, r0
	ldr r0, _080F9B9C  @ =gUnknown_0817A307
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r3, r3, r0
	ldr r1, _080F9BA0  @ =0x00000F82
	add r0, r6, r1
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r1, _080F9BA4  @ =0x00001082
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #8
	ldr r0, _080F9BA8  @ =gUnknown_0817A310
	add r0, r4, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080F9BAC  @ =gUnknown_0817A319
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080F9BB0  @ =0x00000FB2
	add r0, r6, r1
	add r0, r5, r0
	strb r4, [r0]
	sub r1, r1, #208
	add r0, r6, r1
	add r0, r5, r0
	strb r3, [r0]
	add r1, r1, #32
	add r0, r6, r1
	add r0, r5, r0
	lsr r3, r3, #8
	strb r3, [r0]
	sub r1, r1, #48
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
	add r1, r1, #32
	add r0, r6, r1
	add r0, r5, r0
	lsr r2, r2, #8
	strb r2, [r0]
	add r1, r1, #96
	add r0, r6, r1
	add r0, r5, r0
	strb r7, [r0]
	mov r0, #48
	mov r1, r8
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080C351C
	ldr r1, _080F9BB4  @ =0x00001152
	add r0, r6, r1
	add r0, r5, r0
	strb r7, [r0]
_080F9B7C:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F9B88:
	.4byte gRam
_080F9B8C:
	.4byte 0x00000FC2
_080F9B90:
	.4byte gUnknown_0817A322
_080F9B94:
	.4byte 0x00000F62
_080F9B98:
	.4byte gUnknown_0817A2FE
_080F9B9C:
	.4byte gUnknown_0817A307
_080F9BA0:
	.4byte 0x00000F82
_080F9BA4:
	.4byte 0x00001082
_080F9BA8:
	.4byte gUnknown_0817A310
_080F9BAC:
	.4byte gUnknown_0817A319
_080F9BB0:
	.4byte 0x00000FB2
_080F9BB4:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080F9AC0


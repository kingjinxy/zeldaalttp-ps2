	THUMB_FUNC_START sub_080E4DF0
sub_080E4DF0: @ 0x080E4DF0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r2, #16
	ldr r1, _080E4E84  @ =gRam
	ldr r3, _080E4E88  @ =0x00001042
	add r0, r1, r3
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E4E14
	ldr r2, _080E4E8C  @ =0x00000FC2
	add r0, r1, r2
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E4E56
	mov r2, #48
_080E4E14:
	mov r0, #1
	cmp r0, #0
	beq _080E4E56
	ldr r4, _080E4E84  @ =gRam
	ldr r3, _080E4E8C  @ =0x00000FC2
	add r0, r4, r3
	add r0, r7, r0
	mov r6, #0
	strb r2, [r0]
	add r0, r7, #0
	bl sub_080E2614
	bl GetRandomInt
	ldr r1, _080E4E90  @ =0x00001082
	add r3, r4, r1
	add r3, r7, r3
	ldr r5, _080E4E94  @ =gUnknown_08178400
	ldr r2, _080E4E98  @ =0x00000FB2
	add r1, r4, r2
	add r1, r7, r1
	ldrb r1, [r1]
	lsl r1, r1, #1
	mov r2, #1
	and r2, r2, r0
	orr r1, r1, r2
	add r1, r1, r5
	ldrb r0, [r1]
	strb r0, [r3]
	ldr r3, _080E4E9C  @ =0x00000F52
	add r4, r4, r3
	add r4, r7, r4
	strb r6, [r4]
_080E4E56:
	ldr r2, _080E4E84  @ =gRam
	ldr r1, _080E4EA0  @ =0x00000FD2
	add r0, r2, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E4E70
	ldr r3, _080E4EA4  @ =0x00001052
	add r1, r2, r3
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080E4E70:
	ldr r0, _080E4EA4  @ =0x00001052
	add r1, r2, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E4E84:
	.4byte gRam
_080E4E88:
	.4byte 0x00001042
_080E4E8C:
	.4byte 0x00000FC2
_080E4E90:
	.4byte 0x00001082
_080E4E94:
	.4byte gUnknown_08178400
_080E4E98:
	.4byte 0x00000FB2
_080E4E9C:
	.4byte 0x00000F52
_080E4EA0:
	.4byte 0x00000FD2
_080E4EA4:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080E4DF0


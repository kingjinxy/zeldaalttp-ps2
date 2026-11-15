	THUMB_FUNC_START sub_080E1BB8
sub_080E1BB8: @ 0x080E1BB8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	bl sub_080E2614
	ldr r4, _080E1C28  @ =gRam
	ldr r1, _080E1C2C  @ =0x00000FC2
	add r0, r4, r1
	add r5, r6, r0
	ldrb r3, [r5]
	cmp r3, #0
	bne _080E1C62
	sub r1, r1, #112
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r1, _080E1C30  @ =0x00001002
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	lsl r2, r1, #24
	cmp r2, #0
	beq _080E1BF4
	mov r0, #7
	and r0, r0, r1
	cmp r0, #4
	bls _080E1C38
_080E1BF4:
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #40
	strb r1, [r5]
	ldr r0, _080E1C34  @ =0x00000FB2
	add r4, r4, r0
	add r4, r6, r4
	ldrb r5, [r4]
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	strb r1, [r4]
	cmp r5, r1
	beq _080E1C62
	eor r5, r5, r1
	mov r0, #2
	and r5, r5, r0
	cmp r5, #0
	bne _080E1C62
	add r0, r6, #0
	bl sub_080E26C8
	b _080E1C62
_080E1C28:
	.4byte gRam
_080E1C2C:
	.4byte 0x00000FC2
_080E1C30:
	.4byte 0x00001002
_080E1C34:
	.4byte 0x00000FB2
_080E1C38:
	lsr r0, r2, #27
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080E1C68  @ =gUnknown_081769C4
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r5]
	ldr r0, _080E1C6C  @ =0x00000FB2
	add r1, r4, r0
	add r1, r6, r1
	ldrb r0, [r1]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r1]
	ldr r1, _080E1C70  @ =0x00001052
	add r0, r4, r1
	add r0, r6, r0
	strb r3, [r0]
	add r0, r6, #0
	bl sub_080E26C8
_080E1C62:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E1C68:
	.4byte gUnknown_081769C4
_080E1C6C:
	.4byte 0x00000FB2
_080E1C70:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080E1BB8


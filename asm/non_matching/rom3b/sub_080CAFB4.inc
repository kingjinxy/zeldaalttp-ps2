	THUMB_FUNC_START sub_080CAFB4
sub_080CAFB4: @ 0x080CAFB4
	push {r4-r7,lr}
	add r6, r0, #0
	mov r5, #1
	mov r1, #15
	ldr r4, _080CAFF8  @ =gUnknown_030031D2
	mov r0, #200
	lsl r0, r0, #1
	add r0, r0, r4
	mov r12, r0
	add r7, r4, #0
	sub r7, r7, #160
_080CAFCA:
	lsl r0, r1, #24
	asr r2, r0, #24
	add r1, r2, r4
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #0
	beq _080CAFFC
	mov r1, r12
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080CAFFC
	add r0, r2, r7
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, r6
	bne _080CAFFC
	mov r5, #0
	b _080CB014
	.byte 0x00
	.byte 0x00
_080CAFF8:
	.4byte gUnknown_030031D2
_080CAFFC:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r3, r1
	lsr r1, r0, #24
	cmp r0, #0
	bge _080CAFCA
	cmp r5, #0
	beq _080CB014
	bl sub_080CBDC8
	lsl r0, r0, #24
	lsr r5, r0, #24
_080CB014:
	add r0, r5, #0
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080CAFB4


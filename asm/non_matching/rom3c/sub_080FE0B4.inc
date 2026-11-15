	THUMB_FUNC_START sub_080FE0B4
sub_080FE0B4: @ 0x080FE0B4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r7, _080FE110  @ =gRam
	ldr r1, _080FE114  @ =0x00001142
	add r0, r7, r1
	add r6, r5, r0
	ldrb r4, [r6]
	add r0, r5, #0
	bl sub_080C2C4C
	ldr r2, _080FE118  @ =0x00001152
	add r0, r7, r2
	add r2, r5, r0
	ldrb r1, [r2]
	add r0, r1, #0
	sub r0, r0, #64
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r3, #128
	and r0, r0, r3
	cmp r0, #0
	beq _080FE0E8
	add r0, r1, #2
	strb r0, [r2]
_080FE0E8:
	ldrb r1, [r6]
	eor r4, r4, r1
	mov r0, #128
	and r4, r4, r0
	cmp r4, #0
	beq _080FE108
	add r0, r3, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080FE108
	ldr r2, _080FE11C  @ =0x00000FA2
	add r0, r7, r2
	add r0, r5, r0
	strb r1, [r0]
_080FE108:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FE110:
	.4byte gRam
_080FE114:
	.4byte 0x00001142
_080FE118:
	.4byte 0x00001152
_080FE11C:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080FE0B4


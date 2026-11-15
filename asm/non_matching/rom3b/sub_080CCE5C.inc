	THUMB_FUNC_START sub_080CCE5C
sub_080CCE5C: @ 0x080CCE5C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080CCE94  @ =gRam
	ldr r1, _080CCE98  @ =0x00000FA2
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #4
	beq _080CCF00
	ldr r2, _080CCE9C  @ =0x00000D43
	add r0, r6, r2
	add r7, r4, r0
	ldrb r1, [r7]
	cmp r1, #0
	beq _080CCEA4
	ldr r0, _080CCEA0  @ =0x00000D4B
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _080CCF14
	strb r0, [r7]
	b _080CCF14
	.byte 0x00
	.byte 0x00
_080CCE94:
	.4byte gRam
_080CCE98:
	.4byte 0x00000FA2
_080CCE9C:
	.4byte 0x00000D43
_080CCEA0:
	.4byte 0x00000D4B
_080CCEA4:
	ldr r2, _080CCEC0  @ =0x00000D4B
	add r0, r6, r2
	add r5, r4, r0
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	beq _080CCEC4
	mov r0, #172
	lsl r0, r0, #4
	add r1, r6, r0
	b _080CCF10
_080CCEC0:
	.4byte 0x00000D4B
_080CCEC4:
	strb r1, [r5]
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	ldr r2, _080CCEFC  @ =0x00000D23
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080CCEDE
	mov r0, #1
	and r1, r1, r0
_080CCEDE:
	lsl r1, r1, #1
	mov r2, #172
	lsl r2, r2, #4
	add r0, r6, r2
	strh r1, [r0]
	bl GetRandomInt
	mov r1, #127
	and r1, r1, r0
	add r1, r1, #128
	strb r1, [r5]
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	b _080CCF14
_080CCEFC:
	.4byte 0x00000D23
_080CCF00:
	ldr r1, _080CCF1C  @ =0x00000D1B
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	mov r2, #172
	lsl r2, r2, #4
	add r1, r6, r2
_080CCF10:
	mov r0, #1
	strh r0, [r1]
_080CCF14:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CCF1C:
	.4byte 0x00000D1B
	THUMB_FUNC_END sub_080CCE5C


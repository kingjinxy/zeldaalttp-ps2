	THUMB_FUNC_START sub_080CC988
sub_080CC988: @ 0x080CC988
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080CCA04  @ =gRam
	ldr r1, _080CCA08  @ =0x00000D23
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080CCA0C  @ =0x00000D2B
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #8
	ldr r2, _080CCA10  @ =0x00000952
	add r0, r6, r2
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	mov r0, #255
	lsl r0, r0, #24
	and r0, r0, r1
	lsr r7, r0, #16
	cmp r7, #0
	bne _080CCA54
	ldr r1, _080CCA14  @ =0x00000D33
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080CCA18  @ =0x00000D3B
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #80
	ldr r2, _080CCA1C  @ =0x00000958
	add r0, r6, r2
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	ldr r0, _080CCA20  @ =0x017F0000
	cmp r1, r0
	bhi _080CCA54
	ldr r1, _080CCA24  @ =0x00000D4B
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #128
	bne _080CCA54
	add r0, r5, #0
	bl sub_080CCA5C
	cmp r0, #0
	bge _080CCA28
	mov r0, #129
	b _080CCA52
_080CCA04:
	.4byte gRam
_080CCA08:
	.4byte 0x00000D23
_080CCA0C:
	.4byte 0x00000D2B
_080CCA10:
	.4byte 0x00000952
_080CCA14:
	.4byte 0x00000D33
_080CCA18:
	.4byte 0x00000D3B
_080CCA1C:
	.4byte 0x00000958
_080CCA20:
	.4byte 0x017F0000
_080CCA24:
	.4byte 0x00000D4B
_080CCA28:
	ldr r2, _080CCA48  @ =0x00000D43
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #22
	bne _080CCA50
	ldr r1, _080CCA4C  @ =0x00000D1B
	add r0, r6, r1
	add r0, r5, r0
	strb r7, [r0]
	b _080CCA54
	.byte 0x00
	.byte 0x00
_080CCA48:
	.4byte 0x00000D43
_080CCA4C:
	.4byte 0x00000D1B
_080CCA50:
	mov r0, #224
_080CCA52:
	strb r0, [r4]
_080CCA54:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CC988

	.byte 0x00
	.byte 0x00

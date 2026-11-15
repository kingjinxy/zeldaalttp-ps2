	THUMB_FUNC_START sub_080DCD8C
sub_080DCD8C: @ 0x080DCD8C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080DCDC4  @ =gRam
	ldr r0, _080DCDC8  @ =0x00001172
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080DCDCC  @ =0x000009DA
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #228
	beq _080DCE00
	ldr r0, _080DCDD0  @ =0x00001663
	add r5, r3, r0
	ldrb r4, [r5]
	cmp r4, #0
	beq _080DCDD8
	ldr r1, _080DCDD4  @ =0x00000FA2
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	bl sub_0812F9A8
	b _080DCE0A
_080DCDC4:
	.4byte gRam
_080DCDC8:
	.4byte 0x00001172
_080DCDCC:
	.4byte 0x000009DA
_080DCDD0:
	.4byte 0x00001663
_080DCDD4:
	.4byte 0x00000FA2
_080DCDD8:
	ldr r0, _080DCDEC  @ =gMagicMirror
	ldrb r0, [r0]
	cmp r0, #2
	beq _080DCDF0
	mov r0, #4
	strb r0, [r5]
	bl sub_0812F9A8
	strb r4, [r5]
	b _080DCE0A
_080DCDEC:
	.4byte gMagicMirror
_080DCDF0:
	ldr r1, _080DCDFC  @ =0x00000FA2
	add r0, r3, r1
	add r0, r2, r0
	strb r4, [r0]
	b _080DCE0A
	.byte 0x00
	.byte 0x00
_080DCDFC:
	.4byte 0x00000FA2
_080DCE00:
	ldr r1, _080DCE10  @ =0x00001052
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #2
	strb r1, [r0]
_080DCE0A:
	pop {r4,r5}
	pop {r0}
	bx r0
_080DCE10:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DCD8C


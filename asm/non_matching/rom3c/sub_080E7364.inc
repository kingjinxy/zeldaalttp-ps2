	THUMB_FUNC_START sub_080E7364
sub_080E7364: @ 0x080E7364
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E73D8  @ =gRam
	ldr r1, _080E73DC  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r7, [r6]
	cmp r7, #0
	bne _080E7406
	ldr r0, _080E73E0  @ =0x00001012
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #127
	and r0, r0, r2
	strb r0, [r1]
	ldr r0, _080E73E4  @ =0x00000E75
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #251
	and r0, r0, r2
	strb r0, [r1]
	ldr r0, _080E73E8  @ =0x00001032
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r1]
	ldr r0, _080E73EC  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #32
	strb r1, [r6]
	ldr r1, _080E73F0  @ =0x00000F72
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	beq _080E73F4
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	b _080E7400
_080E73D8:
	.4byte gRam
_080E73DC:
	.4byte 0x00000FC2
_080E73E0:
	.4byte 0x00001012
_080E73E4:
	.4byte 0x00000E75
_080E73E8:
	.4byte 0x00001032
_080E73EC:
	.4byte 0x00000F52
_080E73F0:
	.4byte 0x00000F72
_080E73F4:
	strb r7, [r1]
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r1, r0, #24
_080E7400:
	add r0, r4, #0
	bl sub_080E757C
_080E7406:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E7364


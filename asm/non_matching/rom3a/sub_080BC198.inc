	THUMB_FUNC_START sub_080BC198
sub_080BC198: @ 0x080BC198
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	bl sub_080BDB54
	ldr r2, _080BC1C8  @ =gRam
	ldr r0, _080BC1CC  @ =0x00000FF3
	add r1, r2, r0
	mov r0, #65
	strb r0, [r1]
	ldr r0, _080BC1D0  @ =0x00000FF2
	add r1, r2, r0
	mov r0, #208
	strb r0, [r1]
	mov r4, #5
	add r5, r1, #0
	ldr r0, _080BC1D4  @ =0x00000E75
	add r6, r2, r0
_080BC1BC:
	cmp r4, #0
	beq _080BC1D8
	add r1, r4, r5
	mov r0, #208
	strb r0, [r1]
	b _080BC1DC
_080BC1C8:
	.4byte gRam
_080BC1CC:
	.4byte 0x00000FF3
_080BC1D0:
	.4byte 0x00000FF2
_080BC1D4:
	.4byte 0x00000E75
_080BC1D8:
	mov r0, #65
	strb r0, [r5]
_080BC1DC:
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CEB84
	add r2, r4, r6
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	sub r4, r4, #1
	cmp r4, #0
	bge _080BC1BC
	add r0, r7, #0
	bl sub_080B9454
	mov r0, #1
	bl sub_080E1644
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080BC198

	.byte 0x00
	.byte 0x00

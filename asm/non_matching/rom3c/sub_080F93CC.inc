	THUMB_FUNC_START sub_080F93CC
sub_080F93CC: @ 0x080F93CC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _080F9414  @ =gRam
	ldr r1, _080F9418  @ =0x00000FC2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F9424
	add r1, r1, #16
	add r0, r4, r1
	add r5, r3, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080F943A
	ldr r0, _080F941C  @ =0x00000F92
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	mov r2, #3
	eor r0, r0, r2
	strb r0, [r1]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080F940C
	ldr r1, _080F9420  @ =0x00000F22
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #240
	strb r1, [r0]
_080F940C:
	mov r0, #5
	strb r0, [r5]
	b _080F943A
	.byte 0x00
	.byte 0x00
_080F9414:
	.4byte gRam
_080F9418:
	.4byte 0x00000FC2
_080F941C:
	.4byte 0x00000F92
_080F9420:
	.4byte 0x00000F22
_080F9424:
	ldr r0, _080F9440  @ =0x00000F52
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F9444  @ =0x00000F92
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #1
	strb r1, [r0]
_080F943A:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F9440:
	.4byte 0x00000F52
_080F9444:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080F93CC


	THUMB_FUNC_START sub_080ED7CC
sub_080ED7CC: @ 0x080ED7CC
	push {r4-r6,lr}
	mov r5, #1
	mov r1, #5
	ldr r4, _080ED7F4  @ =gUnknown_030031D2
	add r6, r4, #0
	sub r6, r6, #80
_080ED7D8:
	lsl r0, r1, #24
	asr r2, r0, #24
	add r1, r2, r4
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #0
	beq _080ED7F8
	add r0, r2, r6
	ldrb r0, [r0]
	cmp r0, #0
	bne _080ED7F8
	mov r5, #0
	b _080ED804
	.byte 0x00
	.byte 0x00
_080ED7F4:
	.4byte gUnknown_030031D2
_080ED7F8:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r3, r1
	lsr r1, r0, #24
	cmp r0, #0
	bge _080ED7D8
_080ED804:
	add r0, r5, #0
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080ED7CC


	THUMB_FUNC_START sub_080F9E38
sub_080F9E38: @ 0x080F9E38
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080F9E78
	ldr r2, _080F9E6C  @ =gRam
	ldr r1, _080F9E70  @ =0x00000F12
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080F9E74  @ =0x00000F22
	add r0, r2, r1
	add r4, r4, r0
	add r3, r3, #1
	add r2, r2, r3
	ldrb r0, [r2]
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_080F9E6C:
	.4byte gRam
_080F9E70:
	.4byte 0x00000F12
_080F9E74:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080F9E38


	THUMB_FUNC_START sub_080F3C5C
sub_080F3C5C: @ 0x080F3C5C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080F3C8C  @ =gRam
	ldr r2, _080F3C90  @ =0x00000F62
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #0
	strb r2, [r1]
	ldr r4, _080F3C94  @ =0x000016FA
	add r1, r3, r4
	strb r2, [r1]
	add r4, r4, #31
	add r1, r3, r4
	strb r2, [r1]
	ldr r1, _080F3C98  @ =0x00001052
	add r3, r3, r1
	add r0, r0, r3
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080F3C8C:
	.4byte gRam
_080F3C90:
	.4byte 0x00000F62
_080F3C94:
	.4byte 0x000016FA
_080F3C98:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080F3C5C


	THUMB_FUNC_START sub_080F0E04
sub_080F0E04: @ 0x080F0E04
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CA8BC
	ldr r0, _080F0E30  @ =gRam
	ldr r2, _080F0E34  @ =0x00000F92
	add r1, r0, r2
	add r4, r4, r1
	ldr r1, _080F0E38  @ =0x00000996
	add r0, r0, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #1
	and r0, r0, r1
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F0E30:
	.4byte gRam
_080F0E34:
	.4byte 0x00000F92
_080F0E38:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F0E04


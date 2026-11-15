	THUMB_FUNC_START sub_080D4004
sub_080D4004: @ 0x080D4004
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C35C0
	ldr r0, _080D4028  @ =gRam
	ldr r1, _080D402C  @ =0x00001172
	add r0, r0, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D4028:
	.4byte gRam
_080D402C:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080D4004


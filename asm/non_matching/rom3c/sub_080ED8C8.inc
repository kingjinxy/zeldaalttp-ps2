	THUMB_FUNC_START sub_080ED8C8
sub_080ED8C8: @ 0x080ED8C8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080ED8E4  @ =gRam
	ldr r1, _080ED8E8  @ =0x00001649
	add r2, r2, r1
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	mov r1, #96
	bl sub_080CF140
	pop {r0}
	bx r0
_080ED8E4:
	.4byte gRam
_080ED8E8:
	.4byte 0x00001649
	THUMB_FUNC_END sub_080ED8C8


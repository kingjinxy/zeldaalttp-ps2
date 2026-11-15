	THUMB_FUNC_START sub_08077F28
sub_08077F28: @ 0x08077F28
	push {lr}
	bl sub_08077848
	bl sub_08076F30
	ldr r1, _08077F44  @ =gRam
	ldr r0, _08077F48  @ =0x000009AD
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077F44:
	.4byte gRam
_08077F48:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08077F28


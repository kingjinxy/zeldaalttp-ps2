	THUMB_FUNC_START sub_0812FFF4
sub_0812FFF4: @ 0x0812FFF4
	push {lr}
	bl sub_08076FAC
	ldr r0, _08130010  @ =gRam
	ldr r1, _08130014  @ =0x000009AD
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #44
	bne _0813000A
	bl sub_08077CA0
_0813000A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08130010:
	.4byte gRam
_08130014:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0812FFF4


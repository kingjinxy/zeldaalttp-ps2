	THUMB_FUNC_START sub_080AA8BC
sub_080AA8BC: @ 0x080AA8BC
	push {lr}
	bl sub_080AA8DC
	ldr r1, _080AA8D4  @ =gRam
	ldr r0, _080AA8D8  @ =0x000009AE
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AA8D4:
	.4byte gRam
_080AA8D8:
	.4byte 0x000009AE
	THUMB_FUNC_END sub_080AA8BC


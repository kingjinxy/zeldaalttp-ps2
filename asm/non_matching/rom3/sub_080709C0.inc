	THUMB_FUNC_START sub_080709C0
sub_080709C0: @ 0x080709C0
	push {lr}
	ldr r0, _080709D4  @ =gRam
	ldr r1, _080709D8  @ =0x00000A4C
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
	bl sub_0806D93C
	pop {r0}
	bx r0
_080709D4:
	.4byte gRam
_080709D8:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080709C0


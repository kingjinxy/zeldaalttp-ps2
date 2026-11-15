	THUMB_FUNC_START sub_080359B8
sub_080359B8: @ 0x080359B8
	push {lr}
	mov r1, #2
	strb r1, [r0, #20]
	ldr r1, [r0, #84]
	bl sub_0803D3D0
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080359B8


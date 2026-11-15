	THUMB_FUNC_START sub_080184C0
sub_080184C0: @ 0x080184C0
	push {lr}
	add r1, r0, #0
	ldr r0, [r1, #84]
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _080184D4
	add r0, r1, #0
	bl DeleteThisEntity
_080184D4:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080184C0


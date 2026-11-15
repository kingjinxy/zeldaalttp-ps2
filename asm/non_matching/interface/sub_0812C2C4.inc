	THUMB_FUNC_START sub_0812C2C4
sub_0812C2C4: @ 0x0812C2C4
	push {lr}
	ldr r2, [r1, #4]
	cmp r2, #0
	bne _0812C2DC
	str r0, [r1, #4]
	str r2, [r1, #112]
	ldr r2, [r0, #12]
	str r2, [r1, #116]
	str r1, [r0, #12]
	cmp r2, #0
	beq _0812C2DC
	str r1, [r2, #112]
_0812C2DC:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812C2C4


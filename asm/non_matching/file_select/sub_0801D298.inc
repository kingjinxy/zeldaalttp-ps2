	THUMB_FUNC_START sub_0801D298
sub_0801D298: @ 0x0801D298
	push {lr}
	add r1, r0, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801D2B6
	ldr r0, [r1, #84]
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801D2B6
	add r0, r1, #0
	bl sub_080077D0
	b _0801D2BC
_0801D2B6:
	add r0, r1, #0
	bl DeleteThisEntity
_0801D2BC:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D298


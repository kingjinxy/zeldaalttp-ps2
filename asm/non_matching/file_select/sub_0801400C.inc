	THUMB_FUNC_START sub_0801400C
sub_0801400C: @ 0x0801400C
	push {lr}
	add r3, r1, #0
	lsl r1, r2, #16
	lsr r1, r1, #16
	ldrb r0, [r0, #3]
	add r2, r3, #0
	bl sub_08013EC0
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801400C


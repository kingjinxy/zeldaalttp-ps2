	THUMB_FUNC_START sub_080343E8
sub_080343E8: @ 0x080343E8
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	bl sub_0803D8AC
	cmp r0, #0
	beq _0803440E
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrh r1, [r4, #50]
	add r0, r4, #0
	add r0, r0, #96
	strh r1, [r0]
	ldrh r1, [r4, #54]
	add r0, r0, #2
	strh r1, [r0]
_0803440E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080343E8


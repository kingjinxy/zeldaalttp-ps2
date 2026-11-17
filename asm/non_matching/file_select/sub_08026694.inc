	THUMB_FUNC_START sub_08026694
sub_08026694: @ 0x08026694
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080266AE
	add r0, r4, #0
	bl DeleteThisEntity
_080266AE:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026694


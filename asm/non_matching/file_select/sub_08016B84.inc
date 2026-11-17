	THUMB_FUNC_START sub_08016B84
sub_08016B84: @ 0x08016B84
	push {r4,lr}
	add r4, r0, #0
	mov r1, #128
	lsl r1, r1, #6
	bl sub_08003594
	cmp r0, #0
	bne _08016BB4
	add r0, r4, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08016BB4
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
_08016BB4:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08016B84

	.byte 0x00
	.byte 0x00

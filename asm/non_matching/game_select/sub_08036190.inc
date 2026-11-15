	THUMB_FUNC_START sub_08036190
sub_08036190: @ 0x08036190
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #0
	bne _080361B2
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	add r0, r4, #0
	mov r1, #3
	bl sub_08003870
_080361B2:
	add r0, r4, #0
	bl GetNextFrame
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08036190

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_08034984
sub_08034984: @ 0x08034984
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r5, [r4, #21]
	cmp r5, #0
	bne _080349A0
	mov r1, #0
	bl sub_0804CE00
	ldrb r0, [r4, #21]
	add r0, r0, #1
	strb r0, [r4, #21]
	ldr r0, [r4, #96]
	strb r5, [r0, #2]
	b _080349D0
_080349A0:
	add r0, r4, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080349D0
	add r0, r4, #0
	add r0, r0, #35
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_08003870
	bl sub_0800099C
	mov r1, #240
	and r0, r0, r1
	add r0, r0, #1
	add r1, r4, #0
	add r1, r1, #40
	strb r0, [r1]
_080349D0:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034984

	.byte 0x00
	.byte 0x00

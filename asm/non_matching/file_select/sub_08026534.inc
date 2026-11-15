	THUMB_FUNC_START sub_08026534
sub_08026534: @ 0x08026534
	push {lr}
	add r3, r0, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #128
	bne _08026548
	add r0, r3, #0
	bl DeleteThisEntity
	b _08026576
_08026548:
	mov r2, #0
	mov r0, #4
	strb r0, [r3, #20]
	mov r0, #43
	add r0, r0, r3
	mov r12, r0
	ldrb r0, [r0]
	mov r1, #16
	eor r0, r0, r1
	mov r1, r12
	strb r0, [r1]
	mov r0, #128
	str r0, [r3, #12]
	mov r0, #144
	lsl r0, r0, #9
	str r0, [r3, #16]
	add r0, r3, #0
	add r0, r0, #60
	strb r2, [r0]
	add r0, r3, #0
	mov r1, #8
	bl 0x08003870
_08026576:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026534

	.byte 0x00
	.byte 0x00

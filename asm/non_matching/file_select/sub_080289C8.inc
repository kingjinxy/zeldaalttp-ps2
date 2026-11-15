	THUMB_FUNC_START sub_080289C8
sub_080289C8: @ 0x080289C8
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08028A00
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrb r0, [r4, #23]
	lsl r0, r0, #1
	add r1, r4, #0
	add r1, r1, #124
	strh r0, [r1]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
_08028A00:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080289C8

	.byte 0x00
	.byte 0x00

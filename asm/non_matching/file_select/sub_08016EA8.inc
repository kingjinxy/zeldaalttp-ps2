	THUMB_FUNC_START sub_08016EA8
sub_08016EA8: @ 0x08016EA8
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	bl 0x0800099C
	mov r1, #48
	and r0, r0, r1
	add r0, r0, #60
	strb r0, [r4, #23]
	bl 0x0800099C
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrb r0, [r1]
	bl sub_08043EE0
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r0, r4, #0
	add r0, r0, #42
	ldrb r2, [r0]
	cmp r1, r2
	beq _08016EE8
	strb r1, [r0]
	add r0, r4, #0
	bl 0x08003870
_08016EE8:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08016EA8

	.byte 0x00
	.byte 0x00

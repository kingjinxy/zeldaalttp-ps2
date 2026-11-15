	THUMB_FUNC_START sub_0801D20C
sub_0801D20C: @ 0x0801D20C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801D22C
	bl 0x0800099C
	mov r1, #24
	and r0, r0, r1
	add r0, r0, #4
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
_0801D22C:
	add r0, r4, #0
	bl 0x0800964C
	add r0, r4, #0
	bl 0x08003834
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D20C

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_0801833C
sub_0801833C: @ 0x0801833C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08018364
	mov r0, #8
	strb r0, [r4, #23]
	ldr r1, [r4, #88]
	add r0, r4, #0
	bl sub_08009EA4
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080184D8
_08018364:
	add r0, r4, #0
	bl sub_0800963C
	add r0, r4, #0
	bl sub_08018514
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801833C

	.byte 0x00
	.byte 0x00

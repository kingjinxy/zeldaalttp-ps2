	THUMB_FUNC_START sub_08025E24
sub_08025E24: @ 0x08025E24
	push {r4,lr}
	add r4, r0, #0
	bl sub_08026244
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08025E4C
	mov r0, #5
	strb r0, [r4, #20]
	mov r0, #128
	lsl r0, r0, #3
	str r0, [r4, #12]
	ldr r2, [r4, #84]
	ldrb r0, [r2, #24]
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r2, #24]
_08025E4C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08025E24

	.byte 0x00
	.byte 0x00

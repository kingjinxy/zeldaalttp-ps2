	THUMB_FUNC_START sub_08020F64
sub_08020F64: @ 0x08020F64
	push {lr}
	add r1, r0, #0
	ldr r0, [r1, #84]
	add r0, r0, #125
	ldrb r2, [r0]
	cmp r2, #0
	bne _08020F7A
	mov r0, #5
	strb r0, [r1, #20]
	str r2, [r1, #12]
	b _08020F90
_08020F7A:
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08020F90
	mov r0, #30
	strb r0, [r1, #23]
	ldr r0, [r1, #12]
	add r0, r0, #48
	str r0, [r1, #12]
_08020F90:
	add r0, r1, #0
	bl GetNextFrame
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08020F64

	.byte 0x00
	.byte 0x00

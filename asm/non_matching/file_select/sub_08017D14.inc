	THUMB_FUNC_START sub_08017D14
sub_08017D14: @ 0x08017D14
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	bl sub_0800964C
	lsl r0, r0, #16
	cmp r0, #0
	beq _08017D30
	add r0, r4, #0
	mov r1, #2
	bl sub_08017D78
_08017D30:
	add r1, r4, #0
	add r1, r1, #115
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08017D4A
	mov r0, #30
	strb r0, [r1]
	mov r0, #83
	bl sub_08003DFC
_08017D4A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017D14


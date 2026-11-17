	THUMB_FUNC_START sub_0801C48C
sub_0801C48C: @ 0x0801C48C
	push {r4,lr}
	add r4, r0, #0
	bl Advance4Frames
	add r0, r4, #0
	bl sub_0800963C
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801C4BE
	mov r0, #128
	str r0, [r4, #12]
	add r1, r4, #0
	add r1, r1, #70
	mov r0, #12
	strb r0, [r1]
	add r2, r4, #0
	add r2, r2, #43
	ldrb r0, [r2]
	mov r1, #16
	eor r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	bl sub_0801C4C4
_0801C4BE:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C48C


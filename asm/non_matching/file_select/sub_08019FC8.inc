	THUMB_FUNC_START sub_08019FC8
sub_08019FC8: @ 0x08019FC8
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801A02C
	add r2, r4, #0
	add r2, r2, #118
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0801A004
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #40
	bls _0801A012
	bl sub_0800099C
	mov r1, #7
	and r1, r1, r0
	cmp r1, #2
	bhi _0801A00A
	b _0801A01E
_0801A004:
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
_0801A00A:
	add r0, r4, #0
	bl sub_0801A210
	b _0801A02C
_0801A012:
	bl sub_0800099C
	mov r1, #7
	and r1, r1, r0
	cmp r1, #4
	bhi _0801A026
_0801A01E:
	add r0, r4, #0
	bl sub_0801A1B8
	b _0801A02C
_0801A026:
	add r0, r4, #0
	bl sub_0801A210
_0801A02C:
	add r0, r4, #0
	bl GetNextFrame
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019FC8


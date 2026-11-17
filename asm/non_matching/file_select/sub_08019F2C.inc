	THUMB_FUNC_START sub_08019F2C
sub_08019F2C: @ 0x08019F2C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08019F90
	add r2, r4, #0
	add r2, r2, #118
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _08019F68
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #40
	bls _08019F76
	bl sub_0800099C
	mov r1, #7
	and r1, r1, r0
	cmp r1, #2
	bhi _08019F6E
	b _08019F82
_08019F68:
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
_08019F6E:
	add r0, r4, #0
	bl sub_0801A210
	b _08019F90
_08019F76:
	bl sub_0800099C
	mov r1, #7
	and r1, r1, r0
	cmp r1, #4
	bhi _08019F8A
_08019F82:
	add r0, r4, #0
	bl sub_0801A1E0
	b _08019F90
_08019F8A:
	add r0, r4, #0
	bl sub_0801A210
_08019F90:
	add r0, r4, #0
	bl GetNextFrame
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019F2C


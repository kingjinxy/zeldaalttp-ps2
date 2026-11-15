	THUMB_FUNC_START sub_0801B7A4
sub_0801B7A4: @ 0x0801B7A4
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801B7F6
	add r0, r4, #0
	mov r1, #96
	mov r2, #64
	bl 0x08009E6C
	add r1, r0, #0
	cmp r1, #0
	beq _0801B7FA
	add r0, r4, #0
	bl sub_0803CECC
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #3
	sub r1, r1, #1
	strb r0, [r1]
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #23]
	ldrb r1, [r1]
	add r0, r4, #0
	bl 0x08003870
	add r0, r4, #0
	mov r1, #92
	bl 0x08003E10
	b _0801B7FA
_0801B7F6:
	mov r0, #1
	strb r0, [r4, #20]
_0801B7FA:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801B7A4


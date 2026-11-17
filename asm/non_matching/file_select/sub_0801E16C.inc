	THUMB_FUNC_START sub_0801E16C
sub_0801E16C: @ 0x0801E16C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801E1A4
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801E1A8
	mov r0, #45
	strb r0, [r4, #24]
	bl sub_0800099C
	mov r1, #31
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl sub_0801E360
	b _0801E1A8
_0801E1A4:
	mov r0, #1
	strb r0, [r4, #20]
_0801E1A8:
	add r0, r4, #0
	bl sub_08009694
	lsl r0, r0, #16
	cmp r0, #0
	beq _0801E1BC
	add r0, r4, #0
	mov r1, #0
	bl sub_0801E360
_0801E1BC:
	add r0, r4, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0801E1E8
	bl sub_0800099C
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	beq _0801E1E8
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_08003870
_0801E1E8:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E16C

	.byte 0x00
	.byte 0x00

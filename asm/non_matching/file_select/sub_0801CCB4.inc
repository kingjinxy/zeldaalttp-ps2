	THUMB_FUNC_START sub_0801CCB4
sub_0801CCB4: @ 0x0801CCB4
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801CCF8
	ldrb r0, [r4, #11]
	cmp r0, #0
	beq _0801CCF0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801CCE8
	mov r0, #15
	strb r0, [r4, #23]
	ldr r1, [r4, #88]
	add r0, r4, #0
	bl 0x08009EA4
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
_0801CCE8:
	add r0, r4, #0
	bl 0x08009694
	b _0801CCFE
_0801CCF0:
	add r0, r4, #0
	bl DeleteThisEntity
	b _0801CCFE
_0801CCF8:
	add r0, r4, #0
	bl sub_0801CE00
_0801CCFE:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801CCB4


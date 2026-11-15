	THUMB_FUNC_START sub_0801C318
sub_0801C318: @ 0x0801C318
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	bl sub_0801C4E8
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801C372
	add r0, r4, #0
	bl 0x0800963C
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801C360
	bl 0x0800099C
	mov r1, #24
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r2, r4, #0
	add r2, r2, #43
	ldrb r1, [r2]
	cmp r3, r1
	beq _0801C372
	strb r3, [r2]
	lsr r1, r0, #27
	sub r2, r2, #1
	strb r1, [r2]
	add r1, r1, #8
	add r0, r4, #0
	bl 0x08003870
	b _0801C372
_0801C360:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801C372
	add r0, r4, #0
	bl sub_0801C4C4
_0801C372:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C318


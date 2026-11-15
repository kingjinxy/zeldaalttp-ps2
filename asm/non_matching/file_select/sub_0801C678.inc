	THUMB_FUNC_START sub_0801C678
sub_0801C678: @ 0x0801C678
	push {r4-r6,lr}
	add r4, r0, #0
	mov r1, #192
	lsl r1, r1, #5
	bl 0x08003594
	add r5, r0, #0
	cmp r5, #0
	bne _0801C74C
	add r0, r4, #0
	mov r1, #56
	mov r2, #56
	bl 0x08009E6C
	add r3, r0, #0
	cmp r3, #0
	beq _0801C6C0
	add r0, r4, #0
	add r0, r0, #114
	mov r1, #1
	strb r1, [r0]
	add r2, r4, #0
	add r2, r2, #115
	mov r1, #4
	strb r1, [r2]
	ldr r1, [r4, #100]
	add r2, r0, #0
	cmp r1, #0
	beq _0801C6B4
	str r1, [r4, #88]
_0801C6B4:
	ldr r0, [r4, #100]
	cmp r3, r0
	bne _0801C6BC
	str r5, [r4, #88]
_0801C6BC:
	str r3, [r4, #100]
	b _0801C6E4
_0801C6C0:
	add r1, r4, #0
	add r1, r1, #115
	ldrb r0, [r1]
	add r2, r4, #0
	add r2, r2, #114
	cmp r0, #0
	beq _0801C6E4
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _0801C6E4
	str r0, [r4, #100]
	str r0, [r4, #88]
	strb r0, [r2]
	mov r0, #1
	strb r0, [r4, #23]
_0801C6E4:
	ldrb r0, [r2]
	cmp r0, #0
	beq _0801C720
	ldr r0, [r4, #100]
	add r1, r4, #0
	bl sub_0803CECC
	add r0, r0, #4
	mov r6, #31
	and r0, r0, r6
	add r5, r4, #0
	add r5, r5, #43
	strb r0, [r5]
	ldr r0, [r4, #88]
	cmp r0, #0
	beq _0801C740
	add r1, r4, #0
	bl sub_0803CECC
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r5]
	add r0, r0, r1
	sub r0, r0, #4
	lsr r1, r0, #31
	add r0, r0, r1
	asr r0, r0, #1
	and r0, r0, r6
	strb r0, [r5]
	b _0801C740
_0801C720:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801C740
	mov r0, #30
	strb r0, [r4, #23]
	bl 0x0800099C
	mov r1, #24
	and r0, r0, r1
	add r0, r0, #4
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
_0801C740:
	add r0, r4, #0
	bl 0x0800963C
	add r0, r4, #0
	bl 0x08003828
_0801C74C:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C678

	.byte 0x00
	.byte 0x00

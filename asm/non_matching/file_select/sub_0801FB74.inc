	THUMB_FUNC_START sub_0801FB74
sub_0801FB74: @ 0x0801FB74
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #24]
	cmp r0, #0
	beq _0801FB88
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801FBC2
_0801FB88:
	add r0, r4, #0
	bl sub_0801FD84
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801FBC2
	mov r0, #6
	strb r0, [r4, #20]
	mov r0, #160
	lsl r0, r0, #2
	str r0, [r4, #12]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	lsl r0, r0, #3
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #16
	bl sub_0801FCC4
	ldr r0, [r4, #88]
	add r0, r0, #68
	mov r1, #8
	strb r1, [r0]
	b _0801FBFE
_0801FBC2:
	ldr r0, [r4, #88]
	add r0, r0, #68
	mov r1, #4
	strb r1, [r0]
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl 0x08009EA4
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #8
	bl sub_0801FCC4
	add r0, r4, #0
	bl 0x0800963C
	add r0, r4, #0
	bl 0x08003828
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801FBFE
	add r0, r4, #0
	bl sub_0801FD28
_0801FBFE:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801FB74


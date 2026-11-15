	THUMB_FUNC_START sub_0801FA8C
sub_0801FA8C: @ 0x0801FA8C
	push {r4,r5,lr}
	add r5, r0, #0
	mov r1, #52
	mov r2, #52
	bl 0x08009E6C
	str r0, [r5, #100]
	cmp r0, #0
	beq _0801FAA6
	add r0, r5, #0
	bl sub_0801FD5C
	b _0801FB02
_0801FAA6:
	ldrb r0, [r5, #23]
	sub r0, r0, #1
	strb r0, [r5, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801FAF6
	ldrb r0, [r5, #24]
	sub r0, r0, #1
	strb r0, [r5, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801FADE
	bl 0x0800099C
	mov r4, #24
	and r0, r0, r4
	add r0, r0, #30
	strb r0, [r5, #24]
	bl 0x0800099C
	and r0, r0, r4
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #4
	bl sub_0801FCC4
_0801FADE:
	add r0, r5, #0
	bl 0x0800963C
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801FAEE
	mov r0, #1
	strb r0, [r5, #24]
_0801FAEE:
	add r0, r5, #0
	bl 0x08003828
	b _0801FB02
_0801FAF6:
	mov r0, #3
	strb r0, [r5, #20]
	add r0, r5, #0
	mov r1, #12
	bl sub_0801FCC4
_0801FB02:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801FA8C


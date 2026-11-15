	THUMB_FUNC_START sub_0801F668
sub_0801F668: @ 0x0801F668
	push {lr}
	add r3, r0, #0
	add r1, r3, #0
	add r1, r1, #125
	ldrb r0, [r1]
	cmp r0, #0
	beq _0801F6B2
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801F6B2
	add r2, r3, #0
	add r2, r2, #124
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801F694
	mov r0, #30
	strb r0, [r1]
_0801F694:
	add r1, r3, #0
	add r1, r1, #63
	mov r0, #52
	strb r0, [r1]
	ldr r1, _0801F6B8  @ =gUnknown_0813B13C
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r3, #0
	add r1, r1, #42
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r3, #0
	bl 0x08003870
_0801F6B2:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801F6B8:
	.4byte gUnknown_0813B13C
	THUMB_FUNC_END sub_0801F668


	THUMB_FUNC_START sub_0801F4D8
sub_0801F4D8: @ 0x0801F4D8
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	sub r0, r0, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #30
	bhi _0801F538
	add r0, r1, #0
	add r0, r0, #108
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _0801F538
	mov r0, #64
	str r0, [r4, #12]
	add r2, r4, #0
	add r2, r2, #124
	ldrb r0, [r2]
	cmp r0, #2
	bhi _0801F538
	add r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _0801F51C
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #53
	strb r0, [r1]
_0801F51C:
	add r1, r4, #0
	add r1, r1, #125
	mov r0, #30
	strb r0, [r1]
	ldrb r0, [r2]
	sub r1, r1, #83
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl 0x08003870
	mov r0, #91
	bl 0x08003DFC
_0801F538:
	ldr r1, _0801F548  @ =gUnknown_0813B108
	add r0, r4, #0
	bl 0x080098A0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801F548:
	.4byte gUnknown_0813B108
	THUMB_FUNC_END sub_0801F4D8


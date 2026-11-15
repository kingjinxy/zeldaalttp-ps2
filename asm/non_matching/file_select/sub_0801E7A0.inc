	THUMB_FUNC_START sub_0801E7A0
sub_0801E7A0: @ 0x0801E7A0
	push {r4,lr}
	add r3, r0, #0
	ldrb r0, [r3, #23]
	sub r1, r0, #1
	strb r1, [r3, #23]
	lsl r4, r1, #24
	lsr r0, r4, #24
	cmp r0, #0
	beq _0801E7DC
	cmp r0, #59
	bhi _0801E804
	mov r0, #1
	and r1, r1, r0
	cmp r1, #0
	beq _0801E804
	ldr r2, _0801E7D8  @ =gUnknown_0813ADB8
	lsr r0, r4, #25
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r3, #50]
	add r0, r0, r1
	strh r0, [r3, #50]
	b _0801E804
	.byte 0x00
	.byte 0x00
_0801E7D8:
	.4byte gUnknown_0813ADB8
_0801E7DC:
	mov r0, #5
	strb r0, [r3, #20]
	mov r0, #128
	lsl r0, r0, #9
	str r0, [r3, #16]
	mov r0, #128
	str r0, [r3, #12]
	add r1, r3, #0
	add r1, r1, #63
	mov r0, #46
	strb r0, [r1]
	add r0, r3, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r3, #0
	bl 0x08003870
	mov r0, #49
	bl 0x08003DFC
_0801E804:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E7A0

	.byte 0x00
	.byte 0x00

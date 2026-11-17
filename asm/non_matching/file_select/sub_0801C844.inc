	THUMB_FUNC_START sub_0801C844
sub_0801C844: @ 0x0801C844
	push {r4,lr}
	add r4, r0, #0
	bl sub_08009664
	add r0, r4, #0
	bl GetNextFrame
	ldr r1, _0801C8A4  @ =gUnknown_0813A66C
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	lsr r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldrh r0, [r4, #44]
	and r0, r0, r1
	cmp r0, #0
	beq _0801C88C
	add r1, r4, #0
	add r1, r1, #112
	mov r0, #1
	strb r0, [r1]
	sub r1, r1, #49
	mov r0, #38
	strb r0, [r1]
	add r1, r1, #7
	mov r0, #4
	strb r0, [r1]
	sub r1, r1, #28
	mov r0, #5
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #5
	bl sub_08003870
_0801C88C:
	add r0, r4, #0
	add r0, r0, #112
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801C8A8
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, #0
	bl sub_08003594
	b _0801C8B2
	.byte 0x00
	.byte 0x00
_0801C8A4:
	.4byte gUnknown_0813A66C
_0801C8A8:
	ldr r0, [r4, #56]
	mov r1, #128
	lsl r1, r1, #7
	add r0, r0, r1
	str r0, [r4, #56]
_0801C8B2:
	mov r0, #58
	ldrsh r2, [r4, r0]
	cmp r2, #0
	bne _0801C8E4
	mov r0, #1
	strb r0, [r4, #20]
	strb r0, [r4, #23]
	add r0, r0, #255
	str r0, [r4, #12]
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #37
	strb r0, [r1]
	add r1, r1, #7
	mov r0, #12
	strb r0, [r1]
	ldr r0, _0801C8EC  @ =gUnknown_0813A718
	str r0, [r4, #72]
	add r0, r4, #0
	add r0, r0, #42
	strb r2, [r0]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
_0801C8E4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801C8EC:
	.4byte gUnknown_0813A718
	THUMB_FUNC_END sub_0801C844


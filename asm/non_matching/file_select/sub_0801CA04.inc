	THUMB_FUNC_START sub_0801CA04
sub_0801CA04: @ 0x0801CA04
	push {lr}
	mov r12, r0
	mov r3, r12
	add r3, r3, #112
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #0
	bne _0801CA80
	mov r1, r12
	ldrb r0, [r1, #20]
	cmp r0, #2
	bne _0801CA40
	ldr r2, _0801CA3C  @ =gUnknown_03006A30
	ldrb r1, [r1, #11]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	ldrb r0, [r0, #2]
	cmp r0, #0
	beq _0801CA40
	mov r0, #4
	strh r0, [r3]
	b _0801CAB0
	.byte 0x00
	.byte 0x00
_0801CA3C:
	.4byte gUnknown_03006A30
_0801CA40:
	mov r0, #0
	mov r3, #7
	mov r2, r12
	strb r3, [r2, #20]
	strb r0, [r2, #26]
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	mov r1, r12
	add r1, r1, #63
	mov r0, #37
	strb r0, [r1]
	add r1, r1, #7
	mov r0, #12
	strb r0, [r1]
	ldr r0, _0801CA7C  @ =gUnknown_0813A724
	mov r1, r12
	str r0, [r1, #72]
	mov r0, r12
	add r0, r0, #42
	strb r3, [r0]
	mov r0, r12
	mov r1, #7
	bl 0x08003870
	mov r0, #0
	b _0801CAB2
	.byte 0x00
	.byte 0x00
_0801CA7C:
	.4byte gUnknown_0813A724
_0801CA80:
	cmp r0, #60
	bne _0801CA8A
	mov r0, #2
	mov r2, r12
	strb r0, [r2, #26]
_0801CA8A:
	ldrh r2, [r3]
	cmp r2, #59
	bhi _0801CAB0
	mov r0, #1
	and r0, r0, r2
	cmp r0, #0
	beq _0801CAB0
	ldr r0, _0801CAB8  @ =gUnknown_0813A674
	mov r1, #6
	and r1, r1, r2
	lsr r1, r1, #1
	add r1, r1, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	mov r1, r12
	ldrh r1, [r1, #50]
	add r0, r0, r1
	mov r2, r12
	strh r0, [r2, #50]
_0801CAB0:
	mov r0, #1
_0801CAB2:
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0801CAB8:
	.4byte gUnknown_0813A674
	THUMB_FUNC_END sub_0801CA04


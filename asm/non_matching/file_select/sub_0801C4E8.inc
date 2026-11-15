	THUMB_FUNC_START sub_0801C4E8
sub_0801C4E8: @ 0x0801C4E8
	push {r4,r5,lr}
	add r5, r0, #0
	add r1, r5, #0
	add r1, r1, #112
	ldrh r0, [r1]
	cmp r0, #0
	bne _0801C548
	add r0, r5, #0
	add r0, r0, #43
	ldrb r4, [r0]
	mov r0, #128
	orr r4, r4, r0
	add r0, r5, #0
	mov r1, #12
	bl 0x0800997C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r4, r0
	bne _0801C54C
	add r0, r5, #0
	mov r1, #56
	mov r2, #56
	bl 0x08009E6C
	cmp r0, #0
	beq _0801C524
	str r0, [r5, #100]
	mov r0, #30
	b _0801C528
_0801C524:
	str r0, [r5, #100]
	mov r0, #16
_0801C528:
	strb r0, [r5, #23]
	mov r0, #5
	strb r0, [r5, #20]
	ldr r1, _0801C544  @ =gUnknown_0813A44C
	add r0, r5, #0
	add r0, r0, #42
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r5, #0
	bl 0x08003870
	mov r0, #0
	b _0801C54E
_0801C544:
	.4byte gUnknown_0813A44C
_0801C548:
	sub r0, r0, #1
	strh r0, [r1]
_0801C54C:
	mov r0, #1
_0801C54E:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0801C4E8


	THUMB_FUNC_START sub_0801C57C
sub_0801C57C: @ 0x0801C57C
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #65
	ldrb r2, [r0]
	cmp r2, #147
	beq _0801C5E8
	sub r0, r0, #2
	ldrb r1, [r0]
	add r3, r0, #0
	cmp r1, #37
	bne _0801C5C4
	cmp r2, #131
	bls _0801C5C4
	mov r1, #4
	strb r1, [r4, #20]
	mov r0, #128
	lsl r0, r0, #9
	str r0, [r4, #16]
	mov r0, #38
	strb r0, [r3]
	add r0, r4, #0
	add r0, r0, #70
	strb r1, [r0]
	ldr r0, _0801C5C0  @ =gUnknown_0813A724
	str r0, [r4, #72]
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #1
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #1
	bl 0x08003870
	b _0801C5E8
_0801C5C0:
	.4byte gUnknown_0813A724
_0801C5C4:
	ldrb r0, [r3]
	cmp r0, #38
	bne _0801C5E8
	add r0, r4, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #128
	beq _0801C5E8
	add r1, r4, #0
	add r1, r1, #61
	mov r0, #250
	strb r0, [r1]
	add r1, r1, #5
	mov r0, #32
	strb r0, [r1]
	mov r0, #96
	bl 0x08003DFC
_0801C5E8:
	ldr r1, _0801C5F8  @ =gUnknown_0813A620
	add r0, r4, #0
	bl 0x080098A0
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801C5F8:
	.4byte gUnknown_0813A620
	THUMB_FUNC_END sub_0801C57C


	THUMB_FUNC_START sub_08043614
sub_08043614: @ 0x08043614
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	mov r2, #14
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	mov r1, #2
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08043682
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #28]
	lsl r3, r2, #29
	lsr r1, r3, #31
	mov r2, #1
	eor r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #2
	ldrb r2, [r0, #28]
	mov r3, #251
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	b _080436A8
_08043682:
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #28]
	lsl r3, r2, #29
	lsr r1, r3, #31
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #2
	ldrb r2, [r0, #28]
	mov r3, #251
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
_080436A8:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #35
	ldrb r0, [r1]
	cmp r0, #155
	bls _080436E4
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #35
	ldrb r0, [r1]
	cmp r0, #159
	bhi _080436E4
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #33
	ldrb r3, [r2]
	add r1, r3, #0
	add r1, r1, #248
	add r2, r0, #0
	add r0, r0, #33
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _080436F4
_080436E4:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #33
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_080436F4:
	ldr r1, [r7]
	ldr r0, [r1, #72]
	ldr r1, _080437F0  @ =gUnknown_0813EC48
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	lsr r3, r2, #1
	add r2, r3, #0
	lsl r3, r2, #24
	lsr r2, r3, #24
	lsl r3, r2, #2
	add r1, r1, r3
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	ldr r0, [r1, #72]
	ldr r1, _080437F0  @ =gUnknown_0813EC48
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	lsr r3, r2, #1
	add r2, r3, #0
	lsl r3, r2, #24
	lsr r2, r3, #24
	lsl r3, r2, #2
	add r2, r3, #1
	add r1, r1, r2
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
	ldr r1, [r7]
	ldr r0, [r1, #72]
	ldr r1, _080437F0  @ =gUnknown_0813EC48
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	lsr r3, r2, #1
	add r2, r3, #0
	lsl r3, r2, #24
	lsr r2, r3, #24
	lsl r3, r2, #2
	add r2, r3, #2
	add r1, r1, r2
	ldrb r2, [r0, #6]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #6]
	ldr r1, [r7]
	ldr r0, [r1, #72]
	ldr r1, _080437F0  @ =gUnknown_0813EC48
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	lsr r3, r2, #1
	add r2, r3, #0
	lsl r3, r2, #24
	lsr r2, r3, #24
	lsl r3, r2, #2
	add r2, r3, #3
	add r1, r1, r2
	ldrb r2, [r0, #7]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #7]
	ldr r0, _080437F4  @ =gUnknown_0813EC38
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	mov r2, #14
	and r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	add r0, r0, r1
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldr r0, _080437F4  @ =gUnknown_0813EC38
	ldr r3, [r7]
	add r1, r3, #0
	add r3, r3, #42
	ldrb r1, [r3]
	mov r3, #14
	and r1, r1, r3
	add r4, r1, #0
	lsl r3, r4, #24
	lsr r1, r3, #24
	add r3, r1, #1
	add r0, r0, r3
	mov r3, #0
	ldrsb r3, [r0, r3]
	ldr r0, [r7]
	mov r1, #0
	bl 0x08001B54
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
_080437F0:
	.4byte gUnknown_0813EC48
_080437F4:
	.4byte gUnknown_0813EC38
	THUMB_FUNC_END sub_08043614


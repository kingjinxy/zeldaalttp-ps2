	THUMB_FUNC_START sub_0801F760
sub_0801F760: @ 0x0801F760
	push {r4-r6,lr}
	add r4, r0, #0
	ldrb r0, [r4, #10]
	cmp r0, #0
	beq _0801F770
	mov r0, #1
	strb r0, [r4, #20]
	b _0801F784
_0801F770:
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
_0801F784:
	ldr r6, _0801F7D8  @ =gUnknown_03006A30
	ldr r0, [r4, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r6
	ldrh r1, [r0, #54]
	mov r5, #128
	lsl r5, r5, #7
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0801F7CA
	mov r0, #35
	bl sub_08012468
	add r1, r0, #0
	cmp r1, #0
	beq _0801F7CA
	ldrb r0, [r4, #10]
	strb r0, [r1, #10]
	mov r0, #1
	strb r0, [r1, #11]
	ldr r0, [r4, #76]
	str r0, [r1, #88]
	ldrb r0, [r0, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r6
	ldrh r2, [r1, #54]
	add r0, r5, #0
	orr r0, r0, r2
	strh r0, [r1, #54]
_0801F7CA:
	ldr r1, _0801F7DC  @ =gUnknown_0813B1CC
	add r0, r4, #0
	bl 0x080098A0
	pop {r4-r6}
	pop {r0}
	bx r0
_0801F7D8:
	.4byte gUnknown_03006A30
_0801F7DC:
	.4byte gUnknown_0813B1CC
	THUMB_FUNC_END sub_0801F760


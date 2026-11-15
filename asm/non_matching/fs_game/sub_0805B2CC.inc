	THUMB_FUNC_START sub_0805B2CC
sub_0805B2CC: @ 0x0805B2CC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	ldrh r0, [r1]
	cmp r0, #1
	beq _0805B33C
	cmp r0, #1
	bgt _0805B2EA
	cmp r0, #0
	beq _0805B2F0
	b _0805B368
_0805B2EA:
	cmp r0, #2
	beq _0805B358
	b _0805B368
_0805B2F0:
	ldr r0, _0805B334  @ =gUnknown_08140F14
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	ldr r0, [r7]
	bl 0x08003C10
	ldr r0, _0805B338  @ =gUnknown_0201EDB0
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #116
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #1
	add r0, r0, r1
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #124
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	b _0805B368
_0805B334:
	.4byte gUnknown_08140F14
_0805B338:
	.4byte gUnknown_0201EDB0
_0805B33C:
	ldr r0, _0805B354  @ =gUnknown_08140F20
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	b _0805B368
	.byte 0x00
	.byte 0x00
_0805B354:
	.4byte gUnknown_08140F20
_0805B358:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _0805B366
	ldr r0, [r7]
	bl sub_0805BA18
_0805B366:
	b _0805B368
_0805B368:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805B2CC


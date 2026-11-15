	THUMB_FUNC_START sub_0805FAF8
sub_0805FAF8: @ 0x0805FAF8
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805FB44  @ =gUnknown_081417A4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	add r0, r0, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	ldr r0, _0805FB44  @ =gUnknown_081417A4
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #42
	ldrb r2, [r3]
	add r3, r2, #1
	add r0, r0, r3
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldr r0, [r7]
	bl 0x08009394
	add r1, r7, #4
	strb r0, [r1]
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #0
	beq _0805FB48
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #31
	bhi _0805FB48
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0805FB98
_0805FB44:
	.4byte gUnknown_081417A4
_0805FB48:
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	bl 0x08003828
	ldr r0, _0805FB80  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r2, #2
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0805FB84
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	b _0805FB98
	.byte 0x00
	.byte 0x00
_0805FB80:
	.4byte gUnknown_03000E20
_0805FB84:
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
_0805FB98:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805FAF8


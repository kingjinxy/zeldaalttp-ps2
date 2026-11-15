	THUMB_FUNC_START sub_0802705C
sub_0802705C: @ 0x0802705C
	push {r4,lr}
	add r4, r0, #0
	add r3, r4, #0
	add r3, r3, #116
	ldrb r0, [r3]
	cmp r0, #0
	beq _0802708E
	ldr r2, _080270B4  @ =gUnknown_08137B10
	ldrb r0, [r4, #10]
	mov r1, #31
	and r1, r1, r0
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r2, _080270B8  @ =gUnknown_0201F000
	add r0, r4, #0
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r1, [r1]
	ldr r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	bne _0802708E
	strb r1, [r3]
_0802708E:
	ldrb r0, [r4, #20]
	cmp r0, #4
	beq _0802709A
	add r0, r4, #0
	bl sub_080275F8
_0802709A:
	ldr r1, _080270BC  @ =gUnknown_0813CD38
	ldrb r0, [r4, #20]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	mov r0, #0
	str r0, [r4, #96]
	pop {r4}
	pop {r0}
	bx r0
_080270B4:
	.4byte gUnknown_08137B10
_080270B8:
	.4byte gUnknown_0201F000
_080270BC:
	.4byte gUnknown_0813CD38
	THUMB_FUNC_END sub_0802705C


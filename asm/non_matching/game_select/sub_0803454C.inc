	THUMB_FUNC_START sub_0803454C
sub_0803454C: @ 0x0803454C
	push {lr}
	add r3, r0, #0
	ldrb r1, [r3, #20]
	cmp r1, #1
	beq _08034590
	cmp r1, #1
	bgt _08034560
	cmp r1, #0
	beq _08034566
	b _080345C4
_08034560:
	cmp r1, #2
	beq _080345B4
	b _080345C4
_08034566:
	mov r0, #1
	mov r2, #1
	strb r0, [r3, #20]
	ldrb r1, [r3, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r3, #28]
	ldrb r2, [r3, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #128
	orr r0, r0, r2
	strb r0, [r3, #31]
	ldrb r0, [r3, #29]
	and r1, r1, r0
	mov r0, #64
	orr r1, r1, r0
	strb r1, [r3, #29]
	b _080345C4
_08034590:
	ldr r0, _080345AC  @ =gUnknown_0202A4F8
	ldr r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _080345C4
	mov r0, #2
	strb r0, [r3, #20]
	add r0, r3, #0
	add r0, r0, #33
	strb r1, [r0]
	ldr r0, _080345B0  @ =0x000001F5
	bl play_sound
	b _080345C4
_080345AC:
	.4byte gUnknown_0202A4F8
_080345B0:
	.4byte 0x000001F5
_080345B4:
	ldr r0, _080345C8  @ =gUnknown_0202A4F8
	ldr r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _080345C4
	add r0, r3, #0
	bl DeleteThisEntity
_080345C4:
	pop {r0}
	bx r0
_080345C8:
	.4byte gUnknown_0202A4F8
	THUMB_FUNC_END sub_0803454C


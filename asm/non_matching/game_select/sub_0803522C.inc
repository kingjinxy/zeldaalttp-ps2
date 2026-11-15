	THUMB_FUNC_START sub_0803522C
sub_0803522C: @ 0x0803522C
	push {r4,r5,lr}
	sub sp, sp, #4
	add r5, r0, #0
	bl GetNextFrame
	ldr r4, _08035250  @ =gUnknown_02016D60
	ldrb r0, [r4, #14]
	cmp r0, #4
	bls _080352FA
	ldrb r0, [r5, #21]
	cmp r0, #1
	beq _0803527C
	cmp r0, #1
	bgt _08035254
	cmp r0, #0
	beq _0803525A
	b _080352FA
	.byte 0x00
	.byte 0x00
_08035250:
	.4byte gUnknown_02016D60
_08035254:
	cmp r0, #2
	beq _080352E4
	b _080352FA
_0803525A:
	mov r1, sp
	ldr r0, _08035274  @ =gUnknown_03006A30
	ldr r2, [r0, #40]
	ldrh r0, [r2, #50]
	strh r0, [r1]
	ldrh r0, [r2, #54]
	strh r0, [r1, #2]
	add r0, r5, #0
	mov r2, #30
	bl sub_0803D7E8
	ldr r0, _08035278  @ =0x000001FB
	b _080352C8
_08035274:
	.4byte gUnknown_03006A30
_08035278:
	.4byte 0x000001FB
_0803527C:
	add r0, r5, #0
	bl sub_0803D8AC
	cmp r0, #0
	beq _080352FA
	mov r1, sp
	mov r0, #150
	lsl r0, r0, #1
	strh r0, [r1]
	ldr r4, _080352D4  @ =gUnknown_03006A30
	ldr r0, [r4, #40]
	ldrh r0, [r0, #54]
	sub r0, r0, #32
	strh r0, [r1, #2]
	add r0, r5, #0
	mov r2, #30
	bl sub_0803D7E8
	mov r0, #9
	strb r0, [r4, #12]
	ldr r0, _080352D8  @ =0x00000507
	bl sub_0800D67C
	ldr r3, _080352DC  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	ldr r0, _080352E0  @ =0x00000202
_080352C8:
	bl play_sound
	ldrb r0, [r5, #21]
	add r0, r0, #1
	strb r0, [r5, #21]
	b _080352FA
_080352D4:
	.4byte gUnknown_03006A30
_080352D8:
	.4byte 0x00000507
_080352DC:
	.4byte gUnknown_02000010
_080352E0:
	.4byte 0x00000202
_080352E4:
	add r0, r5, #0
	bl sub_0803D8AC
	cmp r0, #0
	beq _080352FA
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add r0, r5, #0
	bl DeleteThisEntity
_080352FA:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803522C

	.byte 0x00
	.byte 0x00

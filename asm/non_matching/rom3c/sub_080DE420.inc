	THUMB_FUNC_START sub_080DE420
sub_080DE420: @ 0x080DE420
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080DE474  @ =gRam
	ldr r1, _080DE478  @ =0x0000165F
	add r5, r0, r1
	ldrb r1, [r5]
	mov r6, #32
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080DE45E
	ldr r0, _080DE47C  @ =gSword
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080DE4A4
	ldr r0, _080DE480  @ =gPendantCount
	ldrb r0, [r0]
	mov r1, #7
	and r1, r1, r0
	cmp r1, #7
	beq _080DE494
	mov r0, #2
	and r1, r1, r0
	cmp r1, #0
	bne _080DE48E
	ldr r0, _080DE484  @ =gBookOfMudora
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DE488
_080DE45E:
	mov r1, #148
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	ldrb r0, [r5]
	orr r0, r0, r6
	strb r0, [r5]
	b _080DE4AE
	.byte 0x00
	.byte 0x00
_080DE474:
	.4byte gRam
_080DE478:
	.4byte 0x0000165F
_080DE47C:
	.4byte gSword
_080DE480:
	.4byte gPendantCount
_080DE484:
	.4byte gBookOfMudora
_080DE488:
	mov r1, #149
	lsl r1, r1, #1
	b _080DE496
_080DE48E:
	mov r1, #150
	lsl r1, r1, #1
	b _080DE496
_080DE494:
	ldr r1, _080DE4A0  @ =0x00000129
_080DE496:
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	b _080DE4AE
_080DE4A0:
	.4byte 0x00000129
_080DE4A4:
	ldr r1, _080DE4BC  @ =0x0000012B
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
_080DE4AE:
	add r0, r4, #0
	bl sub_080DE60C
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080DE4BC:
	.4byte 0x0000012B
	THUMB_FUNC_END sub_080DE420


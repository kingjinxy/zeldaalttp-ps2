	THUMB_FUNC_START sub_080C03F0
sub_080C03F0: @ 0x080C03F0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r4, _080C0470  @ =gRam
	ldr r1, _080C0474  @ =0x000016C4
	add r0, r4, r1
	ldrb r6, [r0]
	ldr r2, _080C0478  @ =0x000016C5
	add r0, r4, r2
	mov r2, #0
	ldrsb r2, [r0, r2]
	lsl r2, r2, #8
	sub r1, r1, #4
	add r0, r4, r1
	ldrb r3, [r0]
	add r1, r1, #1
	add r0, r4, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r5, _080C047C  @ =gUnknown_0200688E
	orr r6, r6, r2
	add r0, r6, #0
	add r0, r0, #8
	strh r0, [r5]
	ldr r2, _080C0480  @ =gUnknown_02006890
	orr r3, r3, r1
	add r0, r3, #0
	add r0, r0, #12
	strh r0, [r2]
	ldr r1, _080C0484  @ =gUnknown_08171CEE
	ldr r2, _080C0488  @ =0x000016D5
	add r0, r4, r2
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r1, [r1]
	add r3, r3, r1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r3, [r1]
	ldr r1, _080C048C  @ =gUnknown_08171CF6
	add r0, r0, r1
	ldrh r0, [r0]
	add r6, r6, r0
	ldr r1, _080C0490  @ =0x00000964
	add r0, r4, r1
	strh r6, [r0]
	add r0, r7, #0
	bl sub_080ABA78
	ldr r2, _080C0494  @ =0x00001818
	add r4, r4, r2
	add r4, r7, r4
	ldrb r0, [r4]
	cmp r0, #0
	bne _080C0498
	add r0, r7, #0
	bl sub_080C04A4
	b _080C049E
	.byte 0x00
	.byte 0x00
_080C0470:
	.4byte gRam
_080C0474:
	.4byte 0x000016C4
_080C0478:
	.4byte 0x000016C5
_080C047C:
	.4byte gUnknown_0200688E
_080C0480:
	.4byte gUnknown_02006890
_080C0484:
	.4byte gUnknown_08171CEE
_080C0488:
	.4byte 0x000016D5
_080C048C:
	.4byte gUnknown_08171CF6
_080C0490:
	.4byte 0x00000964
_080C0494:
	.4byte 0x00001818
_080C0498:
	add r0, r7, #0
	bl sub_080C084C
_080C049E:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C03F0


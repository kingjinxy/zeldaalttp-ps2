	THUMB_FUNC_START sub_080144F0
sub_080144F0: @ 0x080144F0
	push {r4-r7,lr}
	lsl r0, r0, #16
	lsr r5, r0, #16
	lsl r1, r1, #16
	lsr r4, r1, #16
	lsl r7, r2, #16
	lsr r1, r7, #16
	ldr r0, _08014548  @ =0x000007FF
	cmp r5, r0
	bhi _080145A8
	add r0, r1, #0
	bl sub_08015DC0
	add r2, r0, #0
	lsl r1, r5, #1
	ldr r3, _0801454C  @ =0x00006004
	add r0, r2, r3
	add r0, r0, r1
	ldrh r6, [r0]
	lsl r1, r4, #1
	add r0, r2, #4
	add r0, r0, r1
	strh r6, [r0]
	ldr r0, _08014550  @ =0x00002004
	add r1, r2, r0
	add r1, r1, r4
	ldr r0, _08014554  @ =gUnknown_0814AB24
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r1, #63
	and r1, r1, r4
	lsl r1, r1, #1
	mov r0, #252
	lsl r0, r0, #4
	and r0, r0, r4
	lsl r0, r0, #2
	add r1, r1, r0
	lsr r0, r7, #30
	cmp r0, #2
	beq _0801455C
	lsl r1, r1, #1
	ldr r0, _08014558  @ =gUnknown_02016D90
	b _08014560
_08014548:
	.4byte 0x000007FF
_0801454C:
	.4byte 0x00006004
_08014550:
	.4byte 0x00002004
_08014554:
	.4byte gUnknown_0814AB24
_08014558:
	.4byte gUnknown_02016D90
_0801455C:
	lsl r1, r1, #1
	ldr r0, _08014598  @ =gUnknown_020031D0
_08014560:
	add r3, r1, r0
	lsl r0, r6, #3
	ldr r1, _0801459C  @ =0x00007004
	add r0, r0, r1
	add r0, r2, r0
	ldrh r1, [r0]
	strh r1, [r3]
	add r0, r0, #2
	ldrh r1, [r0]
	strh r1, [r3, #2]
	add r0, r0, #2
	mov r1, #128
	lsl r1, r1, #1
	add r2, r3, r1
	ldrh r1, [r0]
	strh r1, [r2]
	mov r2, #129
	lsl r2, r2, #1
	add r1, r3, r2
	ldrh r0, [r0, #2]
	strh r0, [r1]
	ldr r1, _080145A0  @ =gUnknown_02000028
	ldr r0, _080145A4  @ =gUnknown_03000204
	ldrb r0, [r0]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	b _080145AE
_08014598:
	.4byte gUnknown_020031D0
_0801459C:
	.4byte 0x00007004
_080145A0:
	.4byte gUnknown_02000028
_080145A4:
	.4byte gUnknown_03000204
_080145A8:
	add r0, r4, #0
	bl sub_0801478C
_080145AE:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080144F0


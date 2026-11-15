	THUMB_FUNC_START sub_0801478C
sub_0801478C: @ 0x0801478C
	push {r4-r7,lr}
	add r4, r0, #0
	add r5, r1, #0
	lsl r4, r4, #16
	lsr r4, r4, #16
	lsl r5, r5, #16
	lsr r0, r5, #16
	bl sub_08015DC0
	add r6, r0, #0
	lsl r2, r4, #1
	add r1, r6, #4
	add r1, r1, r2
	ldr r3, _080147E8  @ =0x00003004
	add r0, r6, r3
	add r0, r0, r2
	ldrh r7, [r0]
	strh r7, [r1]
	ldr r0, _080147EC  @ =0x00002004
	add r2, r6, r0
	add r2, r2, r4
	ldr r1, _080147F0  @ =gUnknown_0814AB24
	mov r12, r1
	lsl r1, r7, #1
	ldr r3, _080147F4  @ =0x00005004
	add r0, r6, r3
	add r0, r0, r1
	ldrh r0, [r0]
	add r0, r0, r12
	ldrb r0, [r0]
	strb r0, [r2]
	mov r1, #63
	and r1, r1, r4
	lsl r1, r1, #1
	mov r0, #252
	lsl r0, r0, #4
	and r0, r0, r4
	lsl r0, r0, #2
	add r1, r1, r0
	lsr r5, r5, #30
	cmp r5, #2
	beq _080147FC
	lsl r1, r1, #1
	ldr r0, _080147F8  @ =gUnknown_02016D90
	b _08014800
	.byte 0x00
	.byte 0x00
_080147E8:
	.4byte 0x00003004
_080147EC:
	.4byte 0x00002004
_080147F0:
	.4byte gUnknown_0814AB24
_080147F4:
	.4byte 0x00005004
_080147F8:
	.4byte gUnknown_02016D90
_080147FC:
	lsl r1, r1, #1
	ldr r0, _0801483C  @ =gUnknown_020031D0
_08014800:
	add r3, r1, r0
	lsl r0, r7, #3
	ldr r1, _08014840  @ =0x00007004
	add r0, r0, r1
	add r0, r6, r0
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
	ldr r1, _08014844  @ =gUnknown_02000028
	ldr r0, _08014848  @ =gUnknown_03000204
	ldrb r0, [r0]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_0801483C:
	.4byte gUnknown_020031D0
_08014840:
	.4byte 0x00007004
_08014844:
	.4byte gUnknown_02000028
_08014848:
	.4byte gUnknown_03000204
	THUMB_FUNC_END sub_0801478C


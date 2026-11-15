	THUMB_FUNC_START sub_0802FCCC
sub_0802FCCC: @ 0x0802FCCC
	push {r4,r5,lr}
	ldr r5, _0802FD00  @ =gUnknown_03000520
	ldrb r4, [r5]
	cmp r4, #0
	bne _0802FD74
	ldr r0, _0802FD04  @ =gNewKeys
	ldrh r1, [r0]
	mov r0, #9
	and r0, r0, r1
	cmp r0, #0
	beq _0802FD14
	ldr r1, _0802FD08  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_080367FC
	ldr r0, _0802FD0C  @ =gUnknown_02016D60
	str r4, [r0, #36]
	ldr r0, _0802FD10  @ =0x001FFFF0
	str r0, [r5, #12]
	strb r4, [r5, #7]
	mov r0, #64
	bl sub_0800C1EC
	b _0802FD74
_0802FD00:
	.4byte gUnknown_03000520
_0802FD04:
	.4byte gNewKeys
_0802FD08:
	.4byte gSubState
_0802FD0C:
	.4byte gUnknown_02016D60
_0802FD10:
	.4byte 0x001FFFF0
_0802FD14:
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0802FD48
	mov r0, #1
	neg r0, r0
	str r0, [r5, #12]
	mov r0, #3
	mov r1, #8
	bl sub_0800C0B0
	ldr r1, _0802FD40  @ =gSubState
	mov r0, #7
	strb r0, [r1]
	ldr r0, _0802FD44  @ =0x80010000
	bl play_sound
	mov r0, #66
	bl play_sound
	b _0802FD74
	.byte 0x00
	.byte 0x00
_0802FD40:
	.4byte gSubState
_0802FD44:
	.4byte 0x80010000
_0802FD48:
	ldr r0, _0802FD7C  @ =gUnknown_02016D60
	ldrh r1, [r0, #6]
	add r1, r1, #1
	strh r1, [r0, #6]
	lsl r1, r1, #16
	mov r0, #225
	lsl r0, r0, #20
	cmp r1, r0
	bne _0802FD74
	mov r0, #1
	neg r0, r0
	str r0, [r5, #12]
	mov r0, #3
	mov r1, #4
	bl sub_0800C0B0
	ldr r1, _0802FD80  @ =gSubState
	mov r0, #6
	strb r0, [r1]
	ldr r0, _0802FD84  @ =0x80040000
	bl play_sound
_0802FD74:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802FD7C:
	.4byte gUnknown_02016D60
_0802FD80:
	.4byte gSubState
_0802FD84:
	.4byte 0x80040000
	THUMB_FUNC_END sub_0802FCCC


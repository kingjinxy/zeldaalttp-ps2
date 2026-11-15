	THUMB_FUNC_START sub_0807341C
sub_0807341C: @ 0x0807341C
	push {lr}
	ldr r2, _08073440  @ =gRam
	ldr r1, _08073444  @ =0x000009C6
	add r0, r2, r1
	ldrh r1, [r0]
	add r0, r1, #0
	cmp r0, #127
	bhi _0807344C
	mov r0, #63
	and r0, r0, r1
	cmp r0, #0
	beq _08073474
	ldr r0, _08073448  @ =0x00000A3C
	add r1, r2, r0
	mov r0, #7
	strh r0, [r1]
	b _0807349A
	.byte 0x00
	.byte 0x00
_08073440:
	.4byte gRam
_08073444:
	.4byte 0x000009C6
_08073448:
	.4byte 0x00000A3C
_0807344C:
	cmp r0, #128
	bne _08073496
	ldr r1, _08073480  @ =0x000009DA
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #192
	lsl r0, r0, #1
	cmp r1, r0
	bne _08073496
	ldr r0, _08073484  @ =gUnknown_02002300
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _08073490
	ldr r1, _08073488  @ =0x00000A42
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #11
	beq _08073490
_08073474:
	ldr r0, _0807348C  @ =0x00000A3C
	add r1, r2, r0
	mov r0, #11
	strh r0, [r1]
	b _0807349A
	.byte 0x00
	.byte 0x00
_08073480:
	.4byte 0x000009DA
_08073484:
	.4byte gUnknown_02002300
_08073488:
	.4byte 0x00000A42
_0807348C:
	.4byte 0x00000A3C
_08073490:
	bl sub_080BE9C8
	b _0807349A
_08073496:
	bl sub_080BE9C8
_0807349A:
	ldr r1, _080734B0  @ =gRam
	ldr r0, _080734B4  @ =0x000009AD
	add r2, r1, r0
	mov r3, #0
	mov r0, #8
	strb r0, [r2]
	ldr r0, _080734B8  @ =0x000009E8
	add r1, r1, r0
	strh r3, [r1]
	pop {r0}
	bx r0
_080734B0:
	.4byte gRam
_080734B4:
	.4byte 0x000009AD
_080734B8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0807341C


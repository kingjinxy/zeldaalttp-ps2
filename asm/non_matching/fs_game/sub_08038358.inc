	THUMB_FUNC_START sub_08038358
sub_08038358: @ 0x08038358
	push {r7,lr}
	mov r7, sp
	ldr r1, _0803836C  @ =gSubState
	ldrb r0, [r1]
	cmp r0, #0
	beq _08038370
	cmp r0, #1
	beq _0803838C
	b _080383C4
	.byte 0x00
	.byte 0x00
_0803836C:
	.4byte gSubState
_08038370:
	mov r0, #4
	bl sub_08036704
	ldr r1, _08038388  @ =gSubState
	ldr r0, _08038388  @ =gSubState
	ldr r1, _08038388  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080383C6
	.byte 0x00
	.byte 0x00
_08038388:
	.4byte gSubState
_0803838C:
	bl sub_080367CC
	cmp r0, #1
	bne _080383B0
	ldr r0, _080383B4  @ =gUnknown_03000490
	ldr r1, _080383B8  @ =gRandom
	ldr r2, [r1]
	str r2, [r0]
	ldr r1, _080383BC  @ =gUnknown_03005050
	ldr r0, _080383BC  @ =gUnknown_03005050
	ldr r1, _080383BC  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _080383C0  @ =gSubState
	mov r1, #0
	strb r1, [r0]
_080383B0:
	b _080383C6
	.byte 0x00
	.byte 0x00
_080383B4:
	.4byte gUnknown_03000490
_080383B8:
	.4byte gRandom
_080383BC:
	.4byte gUnknown_03005050
_080383C0:
	.4byte gSubState
_080383C4:
	b _080383C6
_080383C6:
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08038358


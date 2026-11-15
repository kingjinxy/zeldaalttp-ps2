	THUMB_FUNC_START sub_08032EE0
sub_08032EE0: @ 0x08032EE0
	push {r4,lr}
	ldr r4, _08032EF0  @ =gSubState
	ldrb r0, [r4]
	cmp r0, #0
	beq _08032EF4
	cmp r0, #1
	beq _08032F02
	b _08032F36
_08032EF0:
	.4byte gSubState
_08032EF4:
	mov r0, #4
	bl sub_08036704
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	b _08032F36
_08032F02:
	bl sub_080367CC
	cmp r0, #1
	bne _08032F36
	ldr r1, _08032F3C  @ =gUnknown_03000490
	ldr r0, _08032F40  @ =gRandom
	ldr r0, [r0]
	str r0, [r1]
	ldr r1, _08032F44  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	strb r0, [r4]
	bl sub_0801239C
	bl sub_080123BC
	ldr r2, _08032F48  @ =gUnknown_030004A0
	ldrh r1, [r2]
	ldr r0, _08032F4C  @ =0x0000EFFF
	and r0, r0, r1
	strh r0, [r2]
	mov r0, #5
	bl sub_08036704
_08032F36:
	pop {r4}
	pop {r0}
	bx r0
_08032F3C:
	.4byte gUnknown_03000490
_08032F40:
	.4byte gRandom
_08032F44:
	.4byte gUnknown_03005050
_08032F48:
	.4byte gUnknown_030004A0
_08032F4C:
	.4byte 0x0000EFFF
	THUMB_FUNC_END sub_08032EE0


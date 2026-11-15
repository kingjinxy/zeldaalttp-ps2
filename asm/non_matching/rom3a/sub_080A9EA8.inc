	THUMB_FUNC_START sub_080A9EA8
sub_080A9EA8: @ 0x080A9EA8
	push {r4,r5,lr}
	mov r1, #18
	ldr r0, _080A9F04  @ =gBow
	ldrb r2, [r0]
	ldr r3, _080A9F08  @ =gBoomerang
_080A9EB2:
	add r0, r1, r3
	ldrb r0, [r0]
	orr r2, r2, r0
	sub r1, r1, #1
	cmp r1, #0
	bge _080A9EB2
	cmp r2, #0
	beq _080A9EF2
	ldr r4, _080A9F0C  @ =gRam
	ldr r0, _080A9F10  @ =0x00000A4E
	add r5, r4, r0
	mov r0, #0
	ldrsb r0, [r5, r0]
	ldr r1, _080A9F14  @ =gUnknown_0200231F
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A9EDA
	bl sub_080A9E08
_080A9EDA:
	mov r1, #0
	ldrsb r1, [r5, r1]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	bl sub_080A9FCC
	ldr r0, _080A9F18  @ =0x00000A53
	add r1, r4, r0
	mov r0, #16
	strb r0, [r1]
_080A9EF2:
	ldr r1, _080A9F0C  @ =gRam
	ldr r2, _080A9F1C  @ =0x00000A4C
	add r1, r1, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_080A9F04:
	.4byte gBow
_080A9F08:
	.4byte gBoomerang
_080A9F0C:
	.4byte gRam
_080A9F10:
	.4byte 0x00000A4E
_080A9F14:
	.4byte gUnknown_0200231F
_080A9F18:
	.4byte 0x00000A53
_080A9F1C:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080A9EA8


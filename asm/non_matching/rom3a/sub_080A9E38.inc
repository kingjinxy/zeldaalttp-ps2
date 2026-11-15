	THUMB_FUNC_START sub_080A9E38
sub_080A9E38: @ 0x080A9E38
	push {r4,lr}
	mov r2, #18
	ldr r0, _080A9E68  @ =gBow
	ldrb r1, [r0]
	ldr r3, _080A9E6C  @ =gRam
	ldr r4, _080A9E70  @ =gBoomerang
_080A9E44:
	add r0, r2, r4
	ldrb r0, [r0]
	orr r1, r1, r0
	sub r2, r2, #1
	cmp r2, #0
	bge _080A9E44
	cmp r1, #0
	bne _080A9E78
	ldr r2, _080A9E74  @ =0x00000A4E
	add r0, r3, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r3, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r3, r2
	strb r1, [r0]
	b _080A9E9A
_080A9E68:
	.4byte gBow
_080A9E6C:
	.4byte gRam
_080A9E70:
	.4byte gBoomerang
_080A9E74:
	.4byte 0x00000A4E
_080A9E78:
	ldr r0, _080A9EA0  @ =0x00000A4E
	add r1, r3, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bne _080A9E88
	mov r0, #1
	strb r0, [r1]
_080A9E88:
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldr r1, _080A9EA4  @ =gUnknown_0200231F
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A9E9A
	bl sub_080A9E08
_080A9E9A:
	pop {r4}
	pop {r0}
	bx r0
_080A9EA0:
	.4byte 0x00000A4E
_080A9EA4:
	.4byte gUnknown_0200231F
	THUMB_FUNC_END sub_080A9E38


	THUMB_FUNC_START sub_080A9F5C
sub_080A9F5C: @ 0x080A9F5C
	push {r4,lr}
	mov r1, #18
	ldr r0, _080A9F84  @ =gBow
	ldrb r2, [r0]
	ldr r4, _080A9F88  @ =gRam
	ldr r3, _080A9F8C  @ =gBoomerang
_080A9F68:
	add r0, r1, r3
	ldrb r0, [r0]
	orr r2, r2, r0
	sub r1, r1, #1
	cmp r1, #0
	bge _080A9F68
	cmp r2, #0
	beq _080A9F94
	ldr r0, _080A9F90  @ =0x00000A4C
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	b _080A9FB4
_080A9F84:
	.4byte gBow
_080A9F88:
	.4byte gRam
_080A9F8C:
	.4byte gBoomerang
_080A9F90:
	.4byte 0x00000A4C
_080A9F94:
	ldr r1, _080A9FBC  @ =0x00000532
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r0, _080A9FC0  @ =0x000003FF
	and r0, r0, r1
	cmp r0, #0
	beq _080A9FB4
	ldr r1, _080A9FC4  @ =0x00000A4C
	add r0, r4, r1
	mov r1, #6
	strh r1, [r0]
	ldr r0, _080A9FC8  @ =0x00000504
	add r1, r4, r0
	mov r0, #68
	bl sub_0812A324
_080A9FB4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A9FBC:
	.4byte 0x00000532
_080A9FC0:
	.4byte 0x000003FF
_080A9FC4:
	.4byte 0x00000A4C
_080A9FC8:
	.4byte 0x00000504
	THUMB_FUNC_END sub_080A9F5C


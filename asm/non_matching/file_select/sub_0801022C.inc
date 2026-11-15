	THUMB_FUNC_START sub_0801022C
sub_0801022C: @ 0x0801022C
	push {lr}
	ldr r2, _08010240  @ =gUnknown_02016D60
	add r0, r2, #0
	add r0, r0, #35
	ldrb r0, [r0]
	cmp r0, #0
	bne _08010244
	mov r0, #0
	b _08010268
	.byte 0x00
	.byte 0x00
_08010240:
	.4byte gUnknown_02016D60
_08010244:
	ldrh r0, [r2, #4]
	cmp r0, #149
	bhi _0801025A
	ldr r0, _0801026C  @ =gNewKeys
	ldrh r1, [r0]
	mov r0, #11
	and r0, r0, r1
	cmp r0, #0
	beq _0801025A
	mov r0, #0
	strh r0, [r2, #4]
_0801025A:
	bl sub_08010DC0
	cmp r0, #0
	bne _08010266
	bl sub_0801017C
_08010266:
	mov r0, #1
_08010268:
	pop {r1}
	bx r1
_0801026C:
	.4byte gNewKeys
	THUMB_FUNC_END sub_0801022C


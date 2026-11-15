	THUMB_FUNC_START sub_08038508
sub_08038508: @ 0x08038508
	push {r7,lr}
	mov r7, sp
	ldr r1, _0803851C  @ =gUnknown_0202E1E0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08038520
	cmp r0, #1
	beq _0803853C
	b _08038568
	.byte 0x00
	.byte 0x00
_0803851C:
	.4byte gUnknown_0202E1E0
_08038520:
	mov r0, #4
	bl sub_08036704
	ldr r1, _08038538  @ =gUnknown_0202E1E0
	ldr r0, _08038538  @ =gUnknown_0202E1E0
	ldr r1, _08038538  @ =gUnknown_0202E1E0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08038568
	.byte 0x00
	.byte 0x00
_08038538:
	.4byte gUnknown_0202E1E0
_0803853C:
	ldr r0, _0803855C  @ =gSubState
	ldr r1, _0803855C  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08038560  @ =gUnknown_0202E1E0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _08038564  @ =gUnknown_02016D60
	ldrb r1, [r0, #3]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #3]
	b _08038568
_0803855C:
	.4byte gSubState
_08038560:
	.4byte gUnknown_0202E1E0
_08038564:
	.4byte gUnknown_02016D60
_08038568:
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08038508

	.byte 0x00
	.byte 0x00

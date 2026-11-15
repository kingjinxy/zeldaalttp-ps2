	THUMB_FUNC_START sub_080520F8
sub_080520F8: @ 0x080520F8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_08051ED4
	ldr r0, _08052128  @ =gSubState
	ldrb r1, [r0]
	cmp r1, #1
	bne _0805212C
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r0, [r0, #100]
	ldr r1, [r1, #96]
	cmp r0, r1
	bcs _08052126
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #100]
	add r1, r2, #1
	str r1, [r0, #100]
_08052126:
	b _0805213C
_08052128:
	.4byte gSubState
_0805212C:
	ldr r0, _08052158  @ =gSubState
	ldrb r1, [r0]
	cmp r1, #1
	bls _0805213C
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #96]
	str r2, [r0, #100]
_0805213C:
	ldr r1, _0805215C  @ =gUnknown_02016D60
	add r0, r1, #0
	add r1, r1, #39
	ldrb r0, [r1]
	cmp r0, #0
	beq _0805214E
	ldr r0, [r7]
	bl DeleteThisEntity
_0805214E:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08052158:
	.4byte gSubState
_0805215C:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080520F8


	THUMB_FUNC_START sub_0805DFE0
sub_0805DFE0: @ 0x0805DFE0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805E018  @ =gUnknown_0842929C
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	ldr r0, _0805E01C  @ =gUnknown_02016D60
	ldr r1, [r7]
	ldrb r0, [r0, #8]
	ldrb r1, [r1, #11]
	cmp r0, r1
	beq _0805E00E
	ldr r0, [r7]
	bl DeleteThisEntity
_0805E00E:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805E018:
	.4byte gUnknown_0842929C
_0805E01C:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_0805DFE0


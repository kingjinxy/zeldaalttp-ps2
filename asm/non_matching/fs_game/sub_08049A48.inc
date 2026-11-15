	THUMB_FUNC_START sub_08049A48
sub_08049A48: @ 0x08049A48
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	beq _08049A78
	ldr r0, _08049A74  @ =gUnknown_0813F6C8
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	b _08049A7E
_08049A74:
	.4byte gUnknown_0813F6C8
_08049A78:
	ldr r0, [r7]
	bl DeleteThisEntity
_08049A7E:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08049A48

	.byte 0x00
	.byte 0x00

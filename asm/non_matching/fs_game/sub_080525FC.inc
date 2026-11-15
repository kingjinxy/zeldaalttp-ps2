	THUMB_FUNC_START sub_080525FC
sub_080525FC: @ 0x080525FC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_08052494
	ldr r0, [r7]
	ldr r1, _08052624  @ =gUnknown_03000948
	ldrh r2, [r1]
	mov r3, #2
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	cmp r1, #0
	beq _08052628
	mov r1, #3
	b _0805262A
_08052624:
	.4byte gUnknown_03000948
_08052628:
	mov r1, #0
_0805262A:
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080525FC

	.byte 0x00
	.byte 0x00

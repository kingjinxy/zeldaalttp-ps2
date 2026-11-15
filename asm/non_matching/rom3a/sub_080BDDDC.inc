	THUMB_FUNC_START sub_080BDDDC
sub_080BDDDC: @ 0x080BDDDC
	push {r4-r7,lr}
	sub sp, sp, #4
	ldr r1, _080BDE24  @ =gUnknown_03003E74
	mov r0, #0
	strh r0, [r1]
	mov r5, #0
	ldr r7, _080BDE28  @ =gUnknown_0817099C
	add r6, r1, #0
_080BDDEC:
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r2, [r0]
	lsl r2, r2, #16
	lsr r1, r2, #16
	ldrh r0, [r6]
	lsr r2, r2, #24
	add r3, r5, #1
	lsl r3, r3, #1
	add r3, r3, r7
	ldrh r3, [r3]
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	add r0, r5, #2
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #7
	bls _080BDDEC
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BDE24:
	.4byte gUnknown_03003E74
_080BDE28:
	.4byte gUnknown_0817099C
	THUMB_FUNC_END sub_080BDDDC


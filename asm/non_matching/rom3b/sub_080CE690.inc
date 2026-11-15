	THUMB_FUNC_START sub_080CE690
sub_080CE690: @ 0x080CE690
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r6, r1, #24
	bl sub_080CD8BC
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _080CE6D0
	ldr r0, _080CE6D8  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r2, _080CE6DC  @ =gRam
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	ldrh r1, [r1]
	add r3, r3, #4
	add r2, r2, r3
	ldrh r2, [r2]
	ldr r4, _080CE6E0  @ =gUnknown_08172DF2
	lsr r3, r6, #26
	add r3, r3, r4
	ldrb r3, [r3]
	mov r6, #144
	lsl r6, r6, #6
	add r4, r6, #0
	orr r3, r3, r4
	str r5, [sp]
	bl sub_080C6004
_080CE6D0:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080CE6D8:
	.4byte gUnknown_03003E74
_080CE6DC:
	.4byte gRam
_080CE6E0:
	.4byte gUnknown_08172DF2
	THUMB_FUNC_END sub_080CE690


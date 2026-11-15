	THUMB_FUNC_START sub_080E33BC
sub_080E33BC: @ 0x080E33BC
	push {r4-r7,lr}
	sub sp, sp, #4
	add r5, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r5, r5, #24
	ldr r1, _080E3424  @ =gUnknown_03003E74
	lsr r5, r5, #26
	ldrh r1, [r1]
	add r5, r5, r1
	lsl r5, r5, #16
	lsr r5, r5, #16
	ldr r6, _080E3428  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldrh r1, [r1]
	ldr r3, _080E342C  @ =0x00000964
	add r2, r6, r3
	ldrh r2, [r2]
	sub r2, r2, #9
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _080E3430  @ =gUnknown_08176EB0
	ldr r7, _080E3434  @ =0x00001082
	add r3, r6, r7
	add r0, r0, r3
	ldrb r0, [r0]
	add r4, r0, r4
	ldrb r3, [r4]
	ldr r4, _080E3438  @ =gUnknown_08176EB4
	add r0, r0, r4
	ldrb r0, [r0]
	ldr r4, _080E343C  @ =0x00000969
	add r6, r6, r4
	mov r4, #0
	ldrsb r4, [r6, r4]
	orr r0, r0, r4
	lsl r0, r0, #8
	add r3, r3, r0
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r0, #2
	str r0, [sp]
	add r0, r5, #0
	bl sub_080C6368
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E3424:
	.4byte gUnknown_03003E74
_080E3428:
	.4byte gRam
_080E342C:
	.4byte 0x00000964
_080E3430:
	.4byte gUnknown_08176EB0
_080E3434:
	.4byte 0x00001082
_080E3438:
	.4byte gUnknown_08176EB4
_080E343C:
	.4byte 0x00000969
	THUMB_FUNC_END sub_080E33BC


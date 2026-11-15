	THUMB_FUNC_START sub_080CE4DC
sub_080CE4DC: @ 0x080CE4DC
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080CE52C
	ldr r0, _080CE534  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r4, _080CE538  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrh r1, [r1]
	ldr r3, _080CE53C  @ =0x00000964
	add r2, r4, r3
	ldrh r2, [r2]
	ldr r7, _080CE540  @ =0x0000131C
	add r3, r4, r7
	add r3, r5, r3
	ldrb r5, [r3]
	ldr r7, _080CE544  @ =0x00001122
	add r3, r4, r7
	add r3, r5, r3
	ldr r7, _080CE548  @ =0x00000D94
	add r4, r4, r7
	add r5, r5, r4
	ldrb r4, [r3]
	ldrb r3, [r5]
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #117
	orr r3, r3, r4
	str r6, [sp]
	bl sub_080C6368
_080CE52C:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080CE534:
	.4byte gUnknown_03003E74
_080CE538:
	.4byte gRam
_080CE53C:
	.4byte 0x00000964
_080CE540:
	.4byte 0x0000131C
_080CE544:
	.4byte 0x00001122
_080CE548:
	.4byte 0x00000D94
	THUMB_FUNC_END sub_080CE4DC


	THUMB_FUNC_START sub_080CE454
sub_080CE454: @ 0x080CE454
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080CE49A
	ldr r0, _080CE4A4  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r3, _080CE4A8  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	ldrh r1, [r1]
	ldr r4, _080CE4AC  @ =0x00000964
	add r2, r3, r4
	ldrh r2, [r2]
	ldr r4, _080CE4B0  @ =gUnknown_08172E2F
	ldr r7, _080CE4B4  @ =0x000013EE
	add r3, r3, r7
	add r3, r5, r3
	ldrb r3, [r3]
	add r3, r3, r4
	ldrb r3, [r3]
	mov r5, #148
	lsl r5, r5, #6
	add r4, r5, #0
	orr r3, r3, r4
	str r6, [sp]
	bl sub_080C6368
_080CE49A:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CE4A4:
	.4byte gUnknown_03003E74
_080CE4A8:
	.4byte gRam
_080CE4AC:
	.4byte 0x00000964
_080CE4B0:
	.4byte gUnknown_08172E2F
_080CE4B4:
	.4byte 0x000013EE
	THUMB_FUNC_END sub_080CE454


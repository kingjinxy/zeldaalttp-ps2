	THUMB_FUNC_START sub_080CE54C
sub_080CE54C: @ 0x080CE54C
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080CE596
	ldr r2, _080CE5A0  @ =gRam
	ldr r1, _080CE5A4  @ =0x000012FE
	add r0, r2, r1
	add r0, r4, r0
	ldrb r5, [r0]
	lsr r5, r5, #3
	ldr r0, _080CE5A8  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	ldrh r1, [r1]
	add r3, r3, #4
	add r2, r2, r3
	ldrh r2, [r2]
	ldr r3, _080CE5AC  @ =gUnknown_08172E27
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080CE5B0  @ =gUnknown_08172E2B
	add r5, r5, r4
	ldrb r4, [r5]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
_080CE596:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CE5A0:
	.4byte gRam
_080CE5A4:
	.4byte 0x000012FE
_080CE5A8:
	.4byte gUnknown_03003E74
_080CE5AC:
	.4byte gUnknown_08172E27
_080CE5B0:
	.4byte gUnknown_08172E2B
	THUMB_FUNC_END sub_080CE54C


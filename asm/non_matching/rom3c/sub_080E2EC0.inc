	THUMB_FUNC_START sub_080E2EC0
sub_080E2EC0: @ 0x080E2EC0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _080E2F20  @ =gRam
	ldr r1, _080E2F24  @ =0x00000FC2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E2F12
	ldr r2, _080E2F28  @ =gUnknown_08176EAC
	ldr r5, _080E2F2C  @ =0x00000F72
	add r0, r4, r5
	add r0, r3, r0
	ldrb r1, [r0]
	lsl r1, r1, #1
	sub r5, r5, #16
	add r0, r4, r5
	add r0, r3, r0
	ldrb r0, [r0]
	lsr r0, r0, #7
	orr r1, r1, r0
	add r1, r1, r2
	ldr r2, _080E2F30  @ =0x00001082
	add r0, r4, r2
	add r0, r3, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	cmp r1, r0
	bne _080E2F12
	sub r5, r5, #16
	add r1, r4, r5
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E2F34  @ =0x00000FE2
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #31
	strb r1, [r0]
_080E2F12:
	add r0, r3, #0
	bl sub_080E2F38
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E2F20:
	.4byte gRam
_080E2F24:
	.4byte 0x00000FC2
_080E2F28:
	.4byte gUnknown_08176EAC
_080E2F2C:
	.4byte 0x00000F72
_080E2F30:
	.4byte 0x00001082
_080E2F34:
	.4byte 0x00000FE2
	THUMB_FUNC_END sub_080E2EC0


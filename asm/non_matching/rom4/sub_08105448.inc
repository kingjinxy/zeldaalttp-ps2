	THUMB_FUNC_START sub_08105448
sub_08105448: @ 0x08105448
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _08105470  @ =gRam
	ldr r1, _08105474  @ =0x00000FC2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08105480
	ldr r4, _08105478  @ =0x00000F72
	add r1, r3, r4
	add r1, r2, r1
	ldr r2, _0810547C  @ =gUnknown_0817BE88
	lsr r0, r0, #25
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _08105496
_08105470:
	.4byte gRam
_08105474:
	.4byte 0x00000FC2
_08105478:
	.4byte 0x00000F72
_0810547C:
	.4byte gUnknown_0817BE88
_08105480:
	ldr r0, _0810549C  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _081054A0  @ =0x00001152
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #16
	strb r1, [r0]
_08105496:
	pop {r4}
	pop {r0}
	bx r0
_0810549C:
	.4byte 0x00000F52
_081054A0:
	.4byte 0x00001152
	THUMB_FUNC_END sub_08105448


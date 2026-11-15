	THUMB_FUNC_START sub_08101EE8
sub_08101EE8: @ 0x08101EE8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _08101F3C  @ =gRam
	ldr r0, _08101F40  @ =0x00000F92
	add r4, r4, r0
	add r4, r5, r4
	ldrb r1, [r4]
	lsl r1, r1, #4
	ldr r0, _08101F44  @ =gUnknown_0817B498
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #2
	bl sub_080C9480
	ldrb r1, [r4]
	cmp r1, #14
	beq _08101F10
	cmp r1, #19
	bne _08101F30
_08101F10:
	mov r0, #14
	eor r0, r0, r1
	neg r1, r0
	orr r1, r1, r0
	lsr r1, r1, #31
	ldr r2, _08101F48  @ =gUnknown_03003E74
	ldrh r0, [r2]
	add r0, r0, #2
	strh r0, [r2]
	lsl r1, r1, #4
	ldr r0, _08101F4C  @ =gUnknown_0817B5D8
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #2
	bl sub_080C9480
_08101F30:
	add r0, r5, #0
	bl sub_080C6230
	pop {r4,r5}
	pop {r0}
	bx r0
_08101F3C:
	.4byte gRam
_08101F40:
	.4byte 0x00000F92
_08101F44:
	.4byte gUnknown_0817B498
_08101F48:
	.4byte gUnknown_03003E74
_08101F4C:
	.4byte gUnknown_0817B5D8
	THUMB_FUNC_END sub_08101EE8


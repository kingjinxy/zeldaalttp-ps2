	THUMB_FUNC_START sub_08101B24
sub_08101B24: @ 0x08101B24
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	ldr r6, _08101B68  @ =gRam
	ldr r1, _08101B6C  @ =0x00000FC2
	add r0, r6, r1
	add r7, r4, r0
	ldrb r5, [r7]
	cmp r5, #0
	bne _08101B4C
	add r0, r4, #0
	bl sub_080CB9D4
	ldr r1, _08101B70  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
_08101B4C:
	ldr r0, _08101B74  @ =0x00000F92
	add r1, r6, r0
	add r1, r1, r8
	ldr r2, _08101B78  @ =gUnknown_0817B34C
	ldrb r0, [r7]
	lsr r0, r0, #3
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08101B68:
	.4byte gRam
_08101B6C:
	.4byte 0x00000FC2
_08101B70:
	.4byte 0x00000FA2
_08101B74:
	.4byte 0x00000F92
_08101B78:
	.4byte gUnknown_0817B34C
	THUMB_FUNC_END sub_08101B24


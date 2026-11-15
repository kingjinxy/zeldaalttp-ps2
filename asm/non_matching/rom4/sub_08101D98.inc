	THUMB_FUNC_START sub_08101D98
sub_08101D98: @ 0x08101D98
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r4, _08101DE4  @ =gRam
	ldr r1, _08101DE8  @ =0x00000FC2
	add r0, r4, r1
	add r3, r2, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _08101DBA
	ldr r0, _08101DEC  @ =0x00000F52
	add r1, r4, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08101DBA:
	ldrb r0, [r3]
	cmp r0, #5
	bne _08101DCA
	ldr r1, _08101DF0  @ =0x00001152
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #24
	strb r1, [r0]
_08101DCA:
	ldr r0, _08101DF4  @ =0x00000F62
	add r1, r4, r0
	add r1, r5, r1
	ldr r2, _08101DF8  @ =gUnknown_0817B494
	ldrb r0, [r3]
	lsr r0, r0, #2
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08101DE4:
	.4byte gRam
_08101DE8:
	.4byte 0x00000FC2
_08101DEC:
	.4byte 0x00000F52
_08101DF0:
	.4byte 0x00001152
_08101DF4:
	.4byte 0x00000F62
_08101DF8:
	.4byte gUnknown_0817B494
	THUMB_FUNC_END sub_08101D98


	THUMB_FUNC_START sub_08107520
sub_08107520: @ 0x08107520
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08107570  @ =gRam
	ldr r1, _08107574  @ =0x00000F62
	add r2, r3, r1
	add r2, r0, r2
	ldr r4, _08107578  @ =0x00000EE2
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _0810757C  @ =0x00000F72
	add r2, r3, r1
	add r2, r0, r2
	add r4, r4, #32
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _08107580  @ =0x00000F82
	add r2, r3, r1
	add r2, r0, r2
	sub r4, r4, #48
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _08107584  @ =0x000010A2
	add r1, r3, r2
	add r1, r0, r1
	add r4, r4, #32
	add r3, r3, r4
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08107570:
	.4byte gRam
_08107574:
	.4byte 0x00000F62
_08107578:
	.4byte 0x00000EE2
_0810757C:
	.4byte 0x00000F72
_08107580:
	.4byte 0x00000F82
_08107584:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_08107520


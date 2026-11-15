	THUMB_FUNC_START sub_08108AEC
sub_08108AEC: @ 0x08108AEC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08108B34  @ =gRam
	ldr r1, _08108B38  @ =0x00000EE2
	add r2, r3, r1
	add r2, r0, r2
	ldr r4, _08108B3C  @ =0x00000F62
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _08108B40  @ =0x00000F82
	add r1, r3, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r4, _08108B44  @ =0x000010A2
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	add r2, r2, #12
	ldr r4, _08108B48  @ =0x00000ED2
	add r1, r3, r4
	add r1, r0, r1
	strb r2, [r1]
	ldr r1, _08108B4C  @ =0x00000EF2
	add r3, r3, r1
	add r0, r0, r3
	lsr r2, r2, #8
	strb r2, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08108B34:
	.4byte gRam
_08108B38:
	.4byte 0x00000EE2
_08108B3C:
	.4byte 0x00000F62
_08108B40:
	.4byte 0x00000F82
_08108B44:
	.4byte 0x000010A2
_08108B48:
	.4byte 0x00000ED2
_08108B4C:
	.4byte 0x00000EF2
	THUMB_FUNC_END sub_08108AEC


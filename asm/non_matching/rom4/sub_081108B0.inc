	THUMB_FUNC_START sub_081108B0
sub_081108B0: @ 0x081108B0
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_0811076C
	add r0, r4, #0
	bl sub_080CBBEC
	ldr r5, _08110908  @ =gRam
	lsl r0, r0, #24
	asr r0, r0, #24
	ldr r1, _0811090C  @ =0x00000EE2
	add r4, r5, r1
	add r4, r0, r4
	ldrb r2, [r4]
	add r1, r1, #32
	add r3, r5, r1
	add r3, r0, r3
	ldrb r1, [r3]
	lsl r1, r1, #8
	add r2, r2, r1
	sub r2, r2, #8
	strb r2, [r4]
	lsr r2, r2, #8
	strb r2, [r3]
	ldr r1, _08110910  @ =0x00000ED2
	add r3, r5, r1
	add r3, r0, r3
	ldrb r2, [r3]
	add r1, r1, #32
	add r5, r5, r1
	add r0, r0, r5
	ldrb r1, [r0]
	lsl r1, r1, #8
	add r2, r2, r1
	sub r2, r2, #8
	strb r2, [r3]
	lsr r2, r2, #8
	strb r2, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_08110908:
	.4byte gRam
_0811090C:
	.4byte 0x00000EE2
_08110910:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_081108B0


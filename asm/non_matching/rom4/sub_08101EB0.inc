	THUMB_FUNC_START sub_08101EB0
sub_08101EB0: @ 0x08101EB0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _08101EDC  @ =gRam
	ldr r3, _08101EE0  @ =0x00000FB2
	add r1, r2, r3
	add r1, r4, r1
	strb r0, [r1]
	ldr r0, _08101EE4  @ =0x00000F52
	add r2, r2, r0
	add r4, r4, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08101EDC:
	.4byte gRam
_08101EE0:
	.4byte 0x00000FB2
_08101EE4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08101EB0


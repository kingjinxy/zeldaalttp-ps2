	THUMB_FUNC_START sub_081214B0
sub_081214B0: @ 0x081214B0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r3, r1, #24
	ldr r4, _08121588  @ =gRam
	ldr r2, _0812158C  @ =0x00000DC5
	add r1, r4, r2
	add r1, r3, r1
	ldr r5, _08121590  @ =gUnknown_020068A4
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _08121594  @ =0x00000DD9
	add r1, r4, r2
	add r1, r3, r1
	add r5, r5, #12
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _08121598  @ =0x00000DCF
	add r1, r4, r2
	add r1, r3, r1
	add r5, r5, #12
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _0812159C  @ =0x00000DE3
	add r1, r4, r2
	add r1, r3, r1
	add r5, r5, #12
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081215A0  @ =0x00000A92
	add r1, r4, r2
	add r1, r3, r1
	add r5, r5, #12
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081215A4  @ =0x00000DED
	add r1, r4, r2
	add r1, r3, r1
	sub r5, r5, #84
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081215A8  @ =0x00000DF7
	add r1, r4, r2
	add r1, r3, r1
	add r5, r5, #12
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081215AC  @ =0x00000A88
	add r1, r4, r2
	add r1, r3, r1
	add r5, r5, #12
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081215B0  @ =0x00000E01
	add r1, r4, r2
	add r1, r3, r1
	add r5, r5, #110
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081215B4  @ =0x00000E0B
	add r1, r4, r2
	add r1, r3, r1
	add r5, r5, #12
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081215B8  @ =0x00000A9C
	add r1, r4, r2
	add r1, r3, r1
	add r5, r5, #12
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081215BC  @ =0x00000E29
	add r1, r4, r2
	add r1, r3, r1
	sub r5, r5, #36
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _081215C0  @ =0x00000E1F
	add r1, r4, r2
	add r1, r3, r1
	add r5, r5, #48
	add r2, r0, r5
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r1, _081215C4  @ =gUnknown_020068E0
	add r0, r0, r1
	ldrb r1, [r0]
	cmp r1, #0
	beq _081215CC
	ldr r2, _081215C8  @ =0x00000E33
	add r0, r4, r2
	add r0, r3, r0
	sub r1, r1, #1
	b _081215D2
	.byte 0x00
	.byte 0x00
_08121588:
	.4byte gRam
_0812158C:
	.4byte 0x00000DC5
_08121590:
	.4byte gUnknown_020068A4
_08121594:
	.4byte 0x00000DD9
_08121598:
	.4byte 0x00000DCF
_0812159C:
	.4byte 0x00000DE3
_081215A0:
	.4byte 0x00000A92
_081215A4:
	.4byte 0x00000DED
_081215A8:
	.4byte 0x00000DF7
_081215AC:
	.4byte 0x00000A88
_081215B0:
	.4byte 0x00000E01
_081215B4:
	.4byte 0x00000E0B
_081215B8:
	.4byte 0x00000A9C
_081215BC:
	.4byte 0x00000E29
_081215C0:
	.4byte 0x00000E1F
_081215C4:
	.4byte gUnknown_020068E0
_081215C8:
	.4byte 0x00000E33
_081215CC:
	ldr r5, _081215DC  @ =0x00000E33
	add r0, r4, r5
	add r0, r3, r0
_081215D2:
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081215DC:
	.4byte 0x00000E33
	THUMB_FUNC_END sub_081214B0


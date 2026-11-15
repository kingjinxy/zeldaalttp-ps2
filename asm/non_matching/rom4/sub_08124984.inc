	THUMB_FUNC_START sub_08124984
sub_08124984: @ 0x08124984
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r4, _08124A4C  @ =gRam
	ldr r3, _08124A50  @ =0x00000DC5
	add r2, r4, r3
	add r2, r0, r2
	ldr r5, _08124A54  @ =gUnknown_020068A4
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r3, _08124A58  @ =0x00000DD9
	add r2, r4, r3
	add r2, r0, r2
	add r5, r5, #12
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r3, _08124A5C  @ =0x00000DCF
	add r2, r4, r3
	add r2, r0, r2
	add r5, r5, #12
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r3, _08124A60  @ =0x00000DE3
	add r2, r4, r3
	add r2, r0, r2
	add r5, r5, #12
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r3, _08124A64  @ =0x00000A92
	add r2, r4, r3
	add r2, r0, r2
	add r5, r5, #12
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r3, _08124A68  @ =0x00000DED
	add r2, r4, r3
	add r2, r0, r2
	sub r5, r5, #84
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r3, _08124A6C  @ =0x00000DF7
	add r2, r4, r3
	add r2, r0, r2
	add r5, r5, #12
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r3, _08124A70  @ =0x00000A88
	add r2, r4, r3
	add r2, r0, r2
	add r5, r5, #12
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r3, _08124A74  @ =0x00000E01
	add r2, r4, r3
	add r2, r0, r2
	add r5, r5, #110
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r3, _08124A78  @ =0x00000E0B
	add r2, r4, r3
	add r2, r0, r2
	add r5, r5, #12
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r3, _08124A7C  @ =0x00000A9C
	add r2, r4, r3
	add r2, r0, r2
	add r5, r5, #12
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r3, _08124A80  @ =0x00000E1F
	add r2, r4, r3
	add r2, r0, r2
	add r5, r5, #12
	add r3, r1, r5
	ldrb r3, [r3]
	strb r3, [r2]
	ldr r2, _08124A84  @ =0x00000E33
	add r4, r4, r2
	add r0, r0, r4
	ldr r3, _08124A88  @ =gUnknown_020068E0
	add r1, r1, r3
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_08124A4C:
	.4byte gRam
_08124A50:
	.4byte 0x00000DC5
_08124A54:
	.4byte gUnknown_020068A4
_08124A58:
	.4byte 0x00000DD9
_08124A5C:
	.4byte 0x00000DCF
_08124A60:
	.4byte 0x00000DE3
_08124A64:
	.4byte 0x00000A92
_08124A68:
	.4byte 0x00000DED
_08124A6C:
	.4byte 0x00000DF7
_08124A70:
	.4byte 0x00000A88
_08124A74:
	.4byte 0x00000E01
_08124A78:
	.4byte 0x00000E0B
_08124A7C:
	.4byte 0x00000A9C
_08124A80:
	.4byte 0x00000E1F
_08124A84:
	.4byte 0x00000E33
_08124A88:
	.4byte gUnknown_020068E0
	THUMB_FUNC_END sub_08124984


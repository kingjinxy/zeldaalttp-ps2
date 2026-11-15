	THUMB_FUNC_START sub_0810E060
sub_0810E060: @ 0x0810E060
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _0810E0A4  @ =gRam
	ldr r1, _0810E0A8  @ =0x00000EA5
	add r2, r4, r1
	add r2, r0, r2
	ldr r3, _0810E0AC  @ =gUnknown_0817CF34
	ldr r1, _0810E0B0  @ =0x0000164C
	add r5, r4, r1
	ldrb r1, [r5]
	add r1, r1, r3
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _0810E0B4  @ =0x00001022
	add r2, r4, r1
	add r2, r0, r2
	ldr r3, _0810E0B8  @ =gUnknown_0817CF36
	ldrb r1, [r5]
	add r1, r1, r3
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r1, _0810E0BC  @ =0x000011B2
	add r4, r4, r1
	add r0, r0, r4
	ldr r2, _0810E0C0  @ =gUnknown_0817CF38
	ldrb r1, [r5]
	add r1, r1, r2
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810E0A4:
	.4byte gRam
_0810E0A8:
	.4byte 0x00000EA5
_0810E0AC:
	.4byte gUnknown_0817CF34
_0810E0B0:
	.4byte 0x0000164C
_0810E0B4:
	.4byte 0x00001022
_0810E0B8:
	.4byte gUnknown_0817CF36
_0810E0BC:
	.4byte 0x000011B2
_0810E0C0:
	.4byte gUnknown_0817CF38
	THUMB_FUNC_END sub_0810E060


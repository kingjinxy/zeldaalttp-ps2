	THUMB_FUNC_START sub_0810DCF8
sub_0810DCF8: @ 0x0810DCF8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0810DD2C  @ =gRam
	ldr r1, _0810DD30  @ =0x00000EA5
	add r3, r2, r1
	add r3, r0, r3
	ldr r4, _0810DD34  @ =gUnknown_0817CEF4
	ldr r1, _0810DD38  @ =0x0000164C
	add r5, r2, r1
	ldrb r1, [r5]
	add r1, r1, r4
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r1, _0810DD3C  @ =0x00001022
	add r2, r2, r1
	add r0, r0, r2
	ldr r2, _0810DD40  @ =gUnknown_0817CEF6
	ldrb r1, [r5]
	add r1, r1, r2
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810DD2C:
	.4byte gRam
_0810DD30:
	.4byte 0x00000EA5
_0810DD34:
	.4byte gUnknown_0817CEF4
_0810DD38:
	.4byte 0x0000164C
_0810DD3C:
	.4byte 0x00001022
_0810DD40:
	.4byte gUnknown_0817CEF6
	THUMB_FUNC_END sub_0810DCF8


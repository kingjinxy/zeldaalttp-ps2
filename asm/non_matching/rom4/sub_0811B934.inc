	THUMB_FUNC_START sub_0811B934
sub_0811B934: @ 0x0811B934
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _0811B998  @ =gRam
	ldr r1, _0811B99C  @ =0x0000187A
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r1, r1, #104
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _0811B9A0  @ =0x00000DED
	add r2, r5, r0
	add r2, r4, r2
	ldr r0, _0811B9A4  @ =gUnknown_0817F814
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _0811B9A8  @ =0x00000DF7
	add r2, r5, r0
	add r2, r4, r2
	ldr r0, _0811B9AC  @ =gUnknown_0817F818
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r2]
	add r0, r4, #0
	bl sub_080BF774
	add r0, r4, #0
	bl sub_080C1768
	ldr r1, _0811B9B0  @ =0x00000DC5
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _0811B9B4  @ =0x00001732
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _0811B9B8  @ =0x00000DD9
	add r0, r5, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r2, r2, #1
	add r5, r5, r2
	strb r0, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811B998:
	.4byte gRam
_0811B99C:
	.4byte 0x0000187A
_0811B9A0:
	.4byte 0x00000DED
_0811B9A4:
	.4byte gUnknown_0817F814
_0811B9A8:
	.4byte 0x00000DF7
_0811B9AC:
	.4byte gUnknown_0817F818
_0811B9B0:
	.4byte 0x00000DC5
_0811B9B4:
	.4byte 0x00001732
_0811B9B8:
	.4byte 0x00000DD9
	THUMB_FUNC_END sub_0811B934


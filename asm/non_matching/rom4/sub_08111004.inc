	THUMB_FUNC_START sub_08111004
sub_08111004: @ 0x08111004
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_08111070
	ldr r2, _08111040  @ =gRam
	ldr r0, _08111044  @ =0x00000F22
	add r3, r2, r0
	add r3, r4, r3
	ldr r5, _08111048  @ =gUnknown_0817D484
	add r0, r0, #144
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, r5
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r0, _0811104C  @ =0x00000F12
	add r2, r2, r0
	add r4, r4, r2
	ldr r2, _08111050  @ =gUnknown_0817D48B
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_08111040:
	.4byte gRam
_08111044:
	.4byte 0x00000F22
_08111048:
	.4byte gUnknown_0817D484
_0811104C:
	.4byte 0x00000F12
_08111050:
	.4byte gUnknown_0817D48B
	THUMB_FUNC_END sub_08111004


	THUMB_FUNC_START sub_08103E84
sub_08103E84: @ 0x08103E84
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r4, _08103EB4  @ =gRam
	ldr r2, _08103EB8  @ =0x00000F22
	add r3, r4, r2
	add r3, r0, r3
	ldr r2, _08103EBC  @ =gUnknown_0817BB70
	add r2, r1, r2
	ldrb r2, [r2]
	strb r2, [r3]
	ldr r2, _08103EC0  @ =0x00000F12
	add r4, r4, r2
	add r0, r0, r4
	ldr r2, _08103EC4  @ =gUnknown_0817BB74
	add r1, r1, r2
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08103EB4:
	.4byte gRam
_08103EB8:
	.4byte 0x00000F22
_08103EBC:
	.4byte gUnknown_0817BB70
_08103EC0:
	.4byte 0x00000F12
_08103EC4:
	.4byte gUnknown_0817BB74
	THUMB_FUNC_END sub_08103E84


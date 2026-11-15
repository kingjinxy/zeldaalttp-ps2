	THUMB_FUNC_START sub_080A3DA0
sub_080A3DA0: @ 0x080A3DA0
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080A3DD0  @ =gUnknown_08169113
	add r0, r0, r1
	ldr r1, _080A3DD4  @ =gMagicUsage
	ldrb r1, [r1]
	ldrb r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _080A3DD8  @ =gRam
	ldr r0, _080A3DDC  @ =gUnknown_081690F5
	add r1, r1, r0
	ldrb r0, [r1]
	mov r1, #150
	lsl r1, r1, #4
	add r2, r2, r1
	strb r0, [r2]
	ldr r1, _080A3DE0  @ =gMagicMeter
	ldrb r2, [r1]
	add r0, r0, r2
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080A3DD0:
	.4byte gUnknown_08169113
_080A3DD4:
	.4byte gMagicUsage
_080A3DD8:
	.4byte gRam
_080A3DDC:
	.4byte gUnknown_081690F5
_080A3DE0:
	.4byte gMagicMeter
	THUMB_FUNC_END sub_080A3DA0


	THUMB_FUNC_START sub_0812F400
sub_0812F400: @ 0x0812F400
	push {r4,lr}
	ldr r2, _0812F434  @ =gUnknown_0822B864
	ldr r3, _0812F438  @ =gRam
	ldr r1, _0812F43C  @ =0x00000C9A
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r1, r2, #1
	add r0, r0, r1
	ldrb r0, [r0]
	add r4, r2, #0
	add r1, r3, #0
	cmp r0, #255
	beq _0812F460
	cmp r0, #83
	bne _0812F448
	ldr r2, _0812F440  @ =0x0000098E
	add r0, r3, r2
	ldrb r0, [r0]
	sub r0, r0, #3
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bhi _0812F448
	ldr r0, _0812F444  @ =gUnknown_08270B48
	b _0812F478
_0812F434:
	.4byte gUnknown_0822B864
_0812F438:
	.4byte gRam
_0812F43C:
	.4byte 0x00000C9A
_0812F440:
	.4byte 0x0000098E
_0812F444:
	.4byte gUnknown_08270B48
_0812F448:
	ldr r2, _0812F458  @ =gUnknown_0822B150
	ldr r3, _0812F45C  @ =0x00000C9A
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r1, r4, #1
	b _0812F46E
	.byte 0x00
	.byte 0x00
_0812F458:
	.4byte gUnknown_0822B150
_0812F45C:
	.4byte 0x00000C9A
_0812F460:
	ldr r2, _0812F49C  @ =gUnknown_0822B150
	ldr r1, _0812F4A0  @ =gUnknown_0822B4FC
	ldr r4, _0812F4A4  @ =0x00000C99
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #3
	add r1, r1, #4
_0812F46E:
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
_0812F478:
	ldr r1, _0812F4A8  @ =gUnknown_02032000
	bl LZ77UnCompWram
	ldr r1, _0812F4AC  @ =gUnknown_0822B864
	ldr r3, _0812F4B0  @ =gRam
	ldr r2, _0812F4B4  @ =0x00000C9A
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r1, r1, #2
	add r2, r0, r1
	ldrb r0, [r2]
	cmp r0, #255
	beq _0812F4B8
	ldr r1, _0812F49C  @ =gUnknown_0822B150
	lsl r0, r0, #2
	add r0, r0, r1
	b _0812F4CE
_0812F49C:
	.4byte gUnknown_0822B150
_0812F4A0:
	.4byte gUnknown_0822B4FC
_0812F4A4:
	.4byte 0x00000C99
_0812F4A8:
	.4byte gUnknown_02032000
_0812F4AC:
	.4byte gUnknown_0822B864
_0812F4B0:
	.4byte gRam
_0812F4B4:
	.4byte 0x00000C9A
_0812F4B8:
	ldr r2, _0812F4DC  @ =gUnknown_0822B150
	ldr r1, _0812F4E0  @ =gUnknown_0822B4FC
	ldr r4, _0812F4E4  @ =0x00000C99
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #3
	add r1, r1, #5
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
_0812F4CE:
	ldr r0, [r0]
	ldr r1, _0812F4E8  @ =gUnknown_02034000
	bl LZ77UnCompWram
	pop {r4}
	pop {r0}
	bx r0
_0812F4DC:
	.4byte gUnknown_0822B150
_0812F4E0:
	.4byte gUnknown_0822B4FC
_0812F4E4:
	.4byte 0x00000C99
_0812F4E8:
	.4byte gUnknown_02034000
	THUMB_FUNC_END sub_0812F400


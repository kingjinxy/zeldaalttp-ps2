	THUMB_FUNC_START sub_0812F150
sub_0812F150: @ 0x0812F150
	push {r4-r6,lr}
	ldr r5, _0812F1A4  @ =gUnknown_0822B864
	ldr r6, _0812F1A8  @ =gRam
	ldr r0, _0812F1AC  @ =0x00000C9A
	add r4, r6, r0
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r1, r0, r5
	ldrb r0, [r1]
	cmp r0, #255
	beq _0812F176
	ldr r0, _0812F1B0  @ =gUnknown_0822B150
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	ldr r1, _0812F1B4  @ =0x06001800
	bl LZ77UnCompVram
_0812F176:
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r1, r5, #1
	add r0, r0, r1
	ldrb r1, [r0]
	cmp r1, #255
	beq _0812F1E4
	cmp r1, #83
	bne _0812F1C4
	ldr r1, _0812F1B8  @ =0x0000098E
	add r0, r6, r1
	ldrb r0, [r0]
	sub r0, r0, #3
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bhi _0812F1C4
	ldr r0, _0812F1BC  @ =gUnknown_08270B48
	ldr r1, _0812F1C0  @ =0x06002000
	bl LZ77UnCompVram
	b _0812F1E4
	.byte 0x00
	.byte 0x00
_0812F1A4:
	.4byte gUnknown_0822B864
_0812F1A8:
	.4byte gRam
_0812F1AC:
	.4byte 0x00000C9A
_0812F1B0:
	.4byte gUnknown_0822B150
_0812F1B4:
	.4byte 0x06001800
_0812F1B8:
	.4byte 0x0000098E
_0812F1BC:
	.4byte gUnknown_08270B48
_0812F1C0:
	.4byte 0x06002000
_0812F1C4:
	ldr r2, _0812F234  @ =gUnknown_0822B150
	ldr r1, _0812F238  @ =gUnknown_0822B864
	ldr r0, _0812F23C  @ =gRam
	ldr r3, _0812F240  @ =0x00000C9A
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r1, r1, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	ldr r1, _0812F244  @ =0x06002000
	bl LZ77UnCompVram
_0812F1E4:
	ldr r5, _0812F238  @ =gUnknown_0822B864
	ldr r0, _0812F23C  @ =gRam
	ldr r1, _0812F240  @ =0x00000C9A
	add r4, r0, r1
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r1, r5, #2
	add r1, r0, r1
	ldrb r0, [r1]
	cmp r0, #255
	beq _0812F20A
	ldr r0, _0812F234  @ =gUnknown_0822B150
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	ldr r1, _0812F248  @ =0x06002800
	bl LZ77UnCompVram
_0812F20A:
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r1, r5, #3
	add r1, r0, r1
	ldrb r0, [r1]
	cmp r0, #255
	beq _0812F228
	ldr r0, _0812F234  @ =gUnknown_0822B150
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	ldr r1, _0812F24C  @ =0x06003000
	bl LZ77UnCompVram
_0812F228:
	bl sub_0812EF98
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812F234:
	.4byte gUnknown_0822B150
_0812F238:
	.4byte gUnknown_0822B864
_0812F23C:
	.4byte gRam
_0812F240:
	.4byte 0x00000C9A
_0812F244:
	.4byte 0x06002000
_0812F248:
	.4byte 0x06002800
_0812F24C:
	.4byte 0x06003000
	THUMB_FUNC_END sub_0812F150


	THUMB_FUNC_START sub_08076D10
sub_08076D10: @ 0x08076D10
	push {r4-r7,lr}
	ldr r7, _08076E30  @ =gRam
	ldr r0, _08076E34  @ =0x00000A0E
	add r1, r7, r0
	ldr r0, _08076E38  @ =0x0000FFF8
	strh r0, [r1]
	bl sub_0806A0C0
	ldr r1, _08076E3C  @ =0x00000C96
	add r2, r7, r1
	ldrh r1, [r2]
	mov r0, #228
	mov r4, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r2, _08076E40  @ =0x00000C92
	add r0, r7, r2
	ldrb r2, [r0]
	strh r2, [r0]
	ldr r0, _08076E44  @ =0x000009C6
	add r5, r7, r0
	ldrh r0, [r5]
	mov r1, #63
	and r1, r1, r0
	neg r0, r2
	orr r0, r0, r2
	lsr r6, r0, #31
	add r0, r6, #0
	bl sub_080724C4
	ldr r1, _08076E48  @ =0x000009E3
	add r0, r7, r1
	strb r4, [r0]
	ldr r2, _08076E4C  @ =0x000009E4
	add r0, r7, r2
	mov r1, #2
	strb r1, [r0]
	sub r2, r2, #4
	add r0, r7, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r7, r2
	strb r1, [r0]
	ldr r1, _08076E50  @ =0x000016F7
	add r0, r7, r1
	mov r1, #128
	strb r1, [r0]
	ldr r2, _08076E54  @ =0x000016F6
	add r0, r7, r2
	strb r1, [r0]
	ldr r1, _08076E58  @ =0x000016F4
	add r0, r7, r1
	mov r1, #15
	strb r1, [r0]
	sub r2, r2, #1
	add r0, r7, r2
	strb r1, [r0]
	ldr r0, _08076E5C  @ =0x000016C8
	add r1, r7, r0
	mov r0, #255
	strb r0, [r1]
	sub r2, r2, #38
	add r1, r7, r2
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	ldr r1, _08076E60  @ =gUnknown_0814FC30
	ldrh r0, [r5]
	add r0, r0, r1
	ldrb r6, [r0]
	ldr r4, _08076E64  @ =gUnknown_0814FCC0
	lsl r0, r6, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _08076E68  @ =gUnknown_02018000
	bl LZ77UnCompWram
	add r0, r6, #1
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _08076E6C  @ =gUnknown_0201A000
	bl LZ77UnCompWram
	add r0, r6, #0
	add r0, r0, #8
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _08076E70  @ =gUnknown_0201C000
	bl LZ77UnCompWram
	add r0, r6, #0
	add r0, r0, #9
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _08076E74  @ =gUnknown_0201E000
	bl LZ77UnCompWram
	cmp r6, #24
	bne _08076EC0
	ldr r1, _08076E78  @ =0x0000098E
	add r0, r7, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #3
	beq _08076DF2
	cmp r0, #5
	beq _08076DF2
	cmp r0, #6
	bne _08076E9C
_08076DF2:
	ldr r1, _08076E7C  @ =gUnknown_02019D38
	ldr r2, _08076E80  @ =0x0000213F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r2, _08076E84  @ =0x0000253F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #62
	ldr r2, _08076E88  @ =0x0000293F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r2, _08076E8C  @ =0x00002D3F
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _08076E90  @ =gUnknown_0201B508
	ldr r2, _08076E94  @ =0x0000216F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	sub r2, r2, #50
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #62
	ldr r2, _08076E98  @ =0x0000296F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	sub r2, r2, #50
	b _08076EBC
_08076E30:
	.4byte gRam
_08076E34:
	.4byte 0x00000A0E
_08076E38:
	.4byte 0x0000FFF8
_08076E3C:
	.4byte 0x00000C96
_08076E40:
	.4byte 0x00000C92
_08076E44:
	.4byte 0x000009C6
_08076E48:
	.4byte 0x000009E3
_08076E4C:
	.4byte 0x000009E4
_08076E50:
	.4byte 0x000016F7
_08076E54:
	.4byte 0x000016F6
_08076E58:
	.4byte 0x000016F4
_08076E5C:
	.4byte 0x000016C8
_08076E60:
	.4byte gUnknown_0814FC30
_08076E64:
	.4byte gUnknown_0814FCC0
_08076E68:
	.4byte gUnknown_02018000
_08076E6C:
	.4byte gUnknown_0201A000
_08076E70:
	.4byte gUnknown_0201C000
_08076E74:
	.4byte gUnknown_0201E000
_08076E78:
	.4byte 0x0000098E
_08076E7C:
	.4byte gUnknown_02019D38
_08076E80:
	.4byte 0x0000213F
_08076E84:
	.4byte 0x0000253F
_08076E88:
	.4byte 0x0000293F
_08076E8C:
	.4byte 0x00002D3F
_08076E90:
	.4byte gUnknown_0201B508
_08076E94:
	.4byte 0x0000216F
_08076E98:
	.4byte 0x0000296F
_08076E9C:
	cmp r0, #4
	bne _08076EC0
	ldr r1, _08076F08  @ =gUnknown_0201B508
	ldr r2, _08076F0C  @ =0x0000213F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r2, _08076F10  @ =0x0000253F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #62
	ldr r2, _08076F14  @ =0x0000293F
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r2, _08076F18  @ =0x00002D3F
_08076EBC:
	add r0, r2, #0
	strh r0, [r1]
_08076EC0:
	ldr r4, _08076F1C  @ =gUnknown_0814FF40
	lsl r0, r6, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _08076F20  @ =gUnknown_02020000
	bl LZ77UnCompWram
	add r0, r6, #1
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _08076F24  @ =gUnknown_02022000
	bl LZ77UnCompWram
	add r0, r6, #0
	add r0, r0, #8
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _08076F28  @ =gUnknown_02024000
	bl LZ77UnCompWram
	add r0, r6, #0
	add r0, r0, #9
	lsl r0, r0, #2
	add r0, r0, r4
	ldr r0, [r0]
	ldr r1, _08076F2C  @ =gUnknown_02026000
	bl LZ77UnCompWram
	bl sub_08077CA0
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08076F08:
	.4byte gUnknown_0201B508
_08076F0C:
	.4byte 0x0000213F
_08076F10:
	.4byte 0x0000253F
_08076F14:
	.4byte 0x0000293F
_08076F18:
	.4byte 0x00002D3F
_08076F1C:
	.4byte gUnknown_0814FF40
_08076F20:
	.4byte gUnknown_02020000
_08076F24:
	.4byte gUnknown_02022000
_08076F28:
	.4byte gUnknown_02024000
_08076F2C:
	.4byte gUnknown_02026000
	THUMB_FUNC_END sub_08076D10


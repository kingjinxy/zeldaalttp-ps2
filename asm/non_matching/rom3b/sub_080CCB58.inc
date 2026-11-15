	THUMB_FUNC_START sub_080CCB58
sub_080CCB58: @ 0x080CCB58
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _080CCC14  @ =gRam
	ldr r1, _080CCC18  @ =0x00000D4B
	add r0, r7, r1
	add r1, r6, r0
	ldrb r2, [r1]
	mov r8, r2
	cmp r2, #0
	bne _080CCC4C
	mov r0, #16
	strb r0, [r1]
	add r0, r6, #0
	bl sub_080CCCDC
	ldr r2, _080CCC1C  @ =0x00000D43
	add r0, r7, r2
	add r3, r6, r0
	ldrb r1, [r3]
	add r1, r1, #1
	strb r1, [r3]
	ldr r5, _080CCC20  @ =0x00000D1B
	add r0, r7, r5
	add r4, r6, r0
	ldrb r0, [r4]
	sub r0, r0, #10
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080CCC24  @ =gUnknown_08172B1C
	lsl r0, r5, #2
	add r0, r0, r2
	ldr r2, [r0]
	ldr r0, _080CCC28  @ =gUnknown_08172B14
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r0, r1
	bne _080CCBB0
	mov r0, r8
	strb r0, [r4]
_080CCBB0:
	ldrb r0, [r3]
	add r0, r0, r2
	sub r0, r0, #1
	ldrb r5, [r0]
	ldr r1, _080CCC2C  @ =0x00000D23
	add r4, r7, r1
	add r4, r6, r4
	ldrb r1, [r4]
	ldr r2, _080CCC30  @ =0x00000D2B
	add r3, r7, r2
	add r3, r6, r3
	ldrb r2, [r3]
	lsl r2, r2, #8
	ldr r0, _080CCC34  @ =gUnknown_08172B04
	add r0, r5, r0
	orr r1, r1, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080CCC38  @ =gUnknown_08172B08
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
	ldr r3, _080CCC3C  @ =0x00000D33
	add r4, r7, r3
	add r4, r6, r4
	ldrb r1, [r4]
	ldr r0, _080CCC40  @ =0x00000D3B
	add r3, r7, r0
	add r3, r6, r3
	ldrb r2, [r3]
	lsl r2, r2, #8
	ldr r0, _080CCC44  @ =gUnknown_08172B0C
	add r0, r5, r0
	orr r1, r1, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080CCC48  @ =gUnknown_08172B10
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	strb r1, [r4]
	lsr r1, r1, #8
	strb r1, [r3]
	b _080CCCD0
	.byte 0x00
	.byte 0x00
_080CCC14:
	.4byte gRam
_080CCC18:
	.4byte 0x00000D4B
_080CCC1C:
	.4byte 0x00000D43
_080CCC20:
	.4byte 0x00000D1B
_080CCC24:
	.4byte gUnknown_08172B1C
_080CCC28:
	.4byte gUnknown_08172B14
_080CCC2C:
	.4byte 0x00000D23
_080CCC30:
	.4byte 0x00000D2B
_080CCC34:
	.4byte gUnknown_08172B04
_080CCC38:
	.4byte gUnknown_08172B08
_080CCC3C:
	.4byte 0x00000D33
_080CCC40:
	.4byte 0x00000D3B
_080CCC44:
	.4byte gUnknown_08172B0C
_080CCC48:
	.4byte gUnknown_08172B10
_080CCC4C:
	ldr r3, _080CCCAC  @ =0x00000D53
	add r0, r7, r3
	add r4, r6, r0
	ldrb r3, [r4]
	cmp r3, #0
	bne _080CCCCC
	ldr r5, _080CCCB0  @ =0x00000D23
	add r0, r7, r5
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r2, _080CCCB4  @ =0x00000D2B
	add r0, r7, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r5, _080CCCB8  @ =0x00000952
	add r0, r7, r5
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r0, _080CCCBC  @ =0xFFFFFF00
	add r2, r0, #0
	and r1, r1, r2
	lsl r1, r1, #16
	cmp r1, #0
	bne _080CCCD0
	ldr r1, _080CCCC0  @ =0x00000D33
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r5, _080CCCC4  @ =0x00000D3B
	add r0, r7, r5
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r5, _080CCCC8  @ =0x00000958
	add r0, r7, r5
	ldrh r0, [r0]
	sub r1, r1, r0
	and r1, r1, r2
	lsl r1, r1, #16
	cmp r1, #0
	bne _080CCCD0
	add r0, r3, #1
	strb r0, [r4]
	b _080CCCD0
	.byte 0x00
	.byte 0x00
_080CCCAC:
	.4byte 0x00000D53
_080CCCB0:
	.4byte 0x00000D23
_080CCCB4:
	.4byte 0x00000D2B
_080CCCB8:
	.4byte 0x00000952
_080CCCBC:
	.4byte 0xFFFFFF00
_080CCCC0:
	.4byte 0x00000D33
_080CCCC4:
	.4byte 0x00000D3B
_080CCCC8:
	.4byte 0x00000958
_080CCCCC:
	sub r0, r2, #1
	strb r0, [r1]
_080CCCD0:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CCB58

	.byte 0x00
	.byte 0x00

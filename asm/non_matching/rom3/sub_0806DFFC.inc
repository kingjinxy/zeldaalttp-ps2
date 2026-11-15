	THUMB_FUNC_START sub_0806DFFC
sub_0806DFFC: @ 0x0806DFFC
	push {r4,lr}
	ldr r2, _0806E020  @ =gRam
	ldr r1, _0806E024  @ =0x000009DA
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _0806E030
	ldr r4, _0806E028  @ =0x0000099A
	add r3, r2, r4
	ldrb r1, [r3]
	ldr r4, _0806E02C  @ =0x00000D08
	add r0, r2, r4
	ldrh r0, [r0]
	cmp r1, r0
	bhi _0806E054
	add r0, r1, #1
	b _0806E056
	.byte 0x00
	.byte 0x00
_0806E020:
	.4byte gRam
_0806E024:
	.4byte 0x000009DA
_0806E028:
	.4byte 0x0000099A
_0806E02C:
	.4byte 0x00000D08
_0806E030:
	ldr r0, _0806E04C  @ =0x00000999
	add r3, r2, r0
	ldrb r1, [r3]
	ldr r4, _0806E050  @ =0x00000D08
	add r0, r2, r4
	add r2, r1, #0
	ldrh r0, [r0]
	cmp r2, r0
	beq _0806E058
	cmp r2, r0
	bhi _0806E054
	add r0, r1, #1
	b _0806E056
	.byte 0x00
	.byte 0x00
_0806E04C:
	.4byte 0x00000999
_0806E050:
	.4byte 0x00000D08
_0806E054:
	sub r0, r1, #1
_0806E056:
	strb r0, [r3]
_0806E058:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806DFFC

	.byte 0x00
	.byte 0x00

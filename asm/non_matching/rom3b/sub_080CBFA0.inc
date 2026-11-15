	THUMB_FUNC_START sub_080CBFA0
sub_080CBFA0: @ 0x080CBFA0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _080CC04C  @ =gRam
	ldr r2, _080CC050  @ =0x000009B2
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r5, r1, #0
	cmp r0, #0
	bne _080CC046
	ldr r7, _080CC054  @ =0x00000996
	add r0, r5, r7
	ldrb r0, [r0]
	mov r4, #1
	add r3, r4, #0
	and r3, r3, r0
	ldr r0, _080CC058  @ =0x00000952
	add r2, r5, r0
	ldr r1, _080CC05C  @ =gUnknown_081729E4
	lsl r0, r3, #1
	add r0, r0, r1
	mov r7, #0
	ldrsh r1, [r2, r7]
	ldrh r0, [r0]
	add r1, r1, r0
	ldr r2, _080CC060  @ =0x00000D23
	add r0, r5, r2
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r7, _080CC064  @ =0x00000D2B
	add r0, r5, r7
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	lsl r1, r1, #16
	asr r1, r1, #16
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #24
	add r2, r1, #0
	and r3, r3, r4
	cmp r3, #0
	beq _080CC000
	mov r0, #128
	eor r1, r1, r0
_080CC000:
	mov r0, #128
	and r1, r1, r0
	cmp r1, #0
	bne _080CC010
	add r1, r2, #0
	and r1, r1, r0
	cmp r1, #0
	beq _080CC046
_080CC010:
	ldr r1, _080CC068  @ =0x00000D1B
	add r0, r5, r1
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
	lsl r1, r6, #1
	ldr r2, _080CC06C  @ =0x00000D64
	add r0, r5, r2
	add r0, r1, r0
	ldrh r0, [r0]
	lsr r0, r0, #3
	ldr r7, _080CC070  @ =gUnknown_02007B80
	add r3, r0, r7
	ldr r2, _080CC074  @ =0x00001192
	add r0, r5, r2
	add r2, r1, r0
	ldrh r1, [r2]
	ldr r0, _080CC078  @ =0x0000FFFF
	cmp r1, r0
	beq _080CC046
	mov r0, #7
	bic r0, r0, r1
	mov r1, #1
	lsl r1, r1, r0
	ldrb r0, [r3]
	bic r0, r0, r1
	strb r0, [r3]
_080CC046:
	pop {r4-r7}
	pop {r0}
	bx r0
_080CC04C:
	.4byte gRam
_080CC050:
	.4byte 0x000009B2
_080CC054:
	.4byte 0x00000996
_080CC058:
	.4byte 0x00000952
_080CC05C:
	.4byte gUnknown_081729E4
_080CC060:
	.4byte 0x00000D23
_080CC064:
	.4byte 0x00000D2B
_080CC068:
	.4byte 0x00000D1B
_080CC06C:
	.4byte 0x00000D64
_080CC070:
	.4byte gUnknown_02007B80
_080CC074:
	.4byte 0x00001192
_080CC078:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_080CBFA0


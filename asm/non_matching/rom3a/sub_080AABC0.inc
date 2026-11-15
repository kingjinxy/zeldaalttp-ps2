	THUMB_FUNC_START sub_080AABC0
sub_080AABC0: @ 0x080AABC0
	push {r4,lr}
	ldr r0, _080AAC04  @ =gUnknown_083BFC58
	ldr r1, _080AAC08  @ =0x06009000
	bl LZ77UnCompVram
	ldr r1, _080AAC0C  @ =gUnknown_0816BE94
	ldr r4, _080AAC10  @ =gRam
	ldr r2, _080AAC14  @ =0x0000098E
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, _080AAC18  @ =0x06007000
	bl LZ77UnCompVram
	ldr r0, _080AAC1C  @ =0x00000504
	add r1, r4, r0
	mov r0, #67
	bl sub_0812A324
	bl sub_080A7B24
	ldr r2, _080AAC20  @ =0x00000A4C
	add r4, r4, r2
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AAC04:
	.4byte gUnknown_083BFC58
_080AAC08:
	.4byte 0x06009000
_080AAC0C:
	.4byte gUnknown_0816BE94
_080AAC10:
	.4byte gRam
_080AAC14:
	.4byte 0x0000098E
_080AAC18:
	.4byte 0x06007000
_080AAC1C:
	.4byte 0x00000504
_080AAC20:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080AABC0


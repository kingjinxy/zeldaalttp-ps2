	THUMB_FUNC_START sub_080CCCDC
sub_080CCCDC: @ 0x080CCCDC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r1, #29
	ldr r5, _080CCD60  @ =gRam
_080CCCE6:
	lsl r0, r1, #24
	asr r4, r0, #24
	ldr r1, _080CCD64  @ =0x000011D2
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080CCD88
	mov r0, #3
	strb r0, [r1]
	ldr r6, _080CCD68  @ =0x0000122C
	add r3, r5, r6
	add r3, r4, r3
	ldr r1, _080CCD6C  @ =0x00000D23
	add r0, r5, r1
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r3]
	add r6, r6, #60
	add r1, r5, r6
	add r1, r4, r1
	ldr r6, _080CCD70  @ =0x00000D2B
	add r0, r5, r6
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080CCD74  @ =0x00000D33
	add r0, r5, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r6, r6, #16
	add r0, r5, r6
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	ldr r0, _080CCD78  @ =0x0000120E
	add r2, r5, r0
	add r2, r4, r2
	strb r1, [r2]
	ldr r6, _080CCD7C  @ =0x0000124A
	add r0, r5, r6
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldrb r0, [r3]
	ldrb r1, [r2]
	mov r2, #109
	bl sub_080CF244
	ldr r1, _080CCD80  @ =0x000012FE
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #31
	strb r1, [r0]
	ldr r2, _080CCD84  @ =0x000015F8
	add r0, r5, r2
	strb r1, [r0]
	b _080CCD92
	.byte 0x00
	.byte 0x00
_080CCD60:
	.4byte gRam
_080CCD64:
	.4byte 0x000011D2
_080CCD68:
	.4byte 0x0000122C
_080CCD6C:
	.4byte 0x00000D23
_080CCD70:
	.4byte 0x00000D2B
_080CCD74:
	.4byte 0x00000D33
_080CCD78:
	.4byte 0x0000120E
_080CCD7C:
	.4byte 0x0000124A
_080CCD80:
	.4byte 0x000012FE
_080CCD84:
	.4byte 0x000015F8
_080CCD88:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080CCCE6
_080CCD92:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CCCDC


	THUMB_FUNC_START sub_080FE324
sub_080FE324: @ 0x080FE324
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _080FE368  @ =gRam
	ldr r0, _080FE36C  @ =0x00001152
	add r4, r7, r0
	add r4, r6, r4
	mov r5, #0
	mov r0, #8
	strb r0, [r4]
	add r0, r6, #0
	bl sub_080C2C4C
	strb r5, [r4]
	ldr r1, _080FE370  @ =0x00001142
	add r0, r7, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #23
	bls _080FE3A0
	mov r2, #0
	ldr r1, _080FE374  @ =0x000009DA
	add r0, r7, r1
	ldrh r0, [r0]
	cmp r0, #173
	bne _080FE35A
	mov r2, #1
_080FE35A:
	cmp r2, #0
	beq _080FE378
	add r0, r6, #0
	bl sub_080FEF7C
	b _080FE3A0
	.byte 0x00
	.byte 0x00
_080FE368:
	.4byte gRam
_080FE36C:
	.4byte 0x00001152
_080FE370:
	.4byte 0x00001142
_080FE374:
	.4byte 0x000009DA
_080FE378:
	ldr r1, _080FE3AC  @ =0x000010A2
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #128
	strb r1, [r0]
	ldr r0, _080FE3B0  @ =0x00000F52
	add r1, r7, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FE3B4  @ =0x00001172
	add r0, r7, r1
	add r0, r6, r0
	strb r2, [r0]
	ldr r1, _080FE3B8  @ =0x00000FC2
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #64
	strb r1, [r0]
_080FE3A0:
	add r0, r6, #0
	bl sub_080FEF2C
	pop {r4-r7}
	pop {r0}
	bx r0
_080FE3AC:
	.4byte 0x000010A2
_080FE3B0:
	.4byte 0x00000F52
_080FE3B4:
	.4byte 0x00001172
_080FE3B8:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080FE324


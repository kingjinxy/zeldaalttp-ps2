	THUMB_FUNC_START sub_0806C430
sub_0806C430: @ 0x0806C430
	push {r4,r5,lr}
	ldr r5, _0806C4B0  @ =gRam
	ldr r1, _0806C4B4  @ =0x00001651
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806C448
	ldr r2, _0806C4B8  @ =0x00000AB2
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #255
	beq _0806C4DC
_0806C448:
	ldr r0, _0806C4BC  @ =0x000009AD
	add r1, r5, r0
	mov r4, #0
	mov r0, #26
	strb r0, [r1]
	ldr r1, _0806C4C0  @ =0x000009E8
	add r0, r5, r1
	strh r4, [r0]
	mov r0, #76
	mov r1, #0
	bl sub_0812A324
	ldr r2, _0806C4C4  @ =0x00000CFA
	add r0, r5, r2
	strh r4, [r0]
	ldr r1, _0806C4C8  @ =0x00000CF8
	add r0, r5, r1
	strh r4, [r0]
	add r2, r2, #2
	add r1, r5, r2
	mov r0, #31
	strh r0, [r1]
	ldr r1, _0806C4CC  @ =0x00000C9E
	add r0, r5, r1
	strh r4, [r0]
	bl sub_08070064
	ldr r2, _0806C4B8  @ =0x00000AB2
	add r1, r5, r2
	ldrb r0, [r1]
	cmp r0, #255
	beq _0806C49C
	ldrh r0, [r1]
	cmp r0, #2
	bne _0806C490
	mov r0, #0
_0806C490:
	asr r0, r0, #1
	ldr r1, _0806C4D0  @ =gUnknown_0200235C
	add r0, r0, r1
	sub r1, r1, #13
	ldrb r1, [r1]
	strb r1, [r0]
_0806C49C:
	ldr r0, _0806C4B0  @ =gRam
	ldr r2, _0806C4D4  @ =0x00001A4A
	add r1, r0, r2
	mov r2, #0
	strb r2, [r1]
	ldr r1, _0806C4D8  @ =0x00001A4B
	add r0, r0, r1
	strb r2, [r0]
	b _0806C4E4
	.byte 0x00
	.byte 0x00
_0806C4B0:
	.4byte gRam
_0806C4B4:
	.4byte 0x00001651
_0806C4B8:
	.4byte 0x00000AB2
_0806C4BC:
	.4byte 0x000009AD
_0806C4C0:
	.4byte 0x000009E8
_0806C4C4:
	.4byte 0x00000CFA
_0806C4C8:
	.4byte 0x00000CF8
_0806C4CC:
	.4byte 0x00000C9E
_0806C4D0:
	.4byte gUnknown_0200235C
_0806C4D4:
	.4byte 0x00001A4A
_0806C4D8:
	.4byte 0x00001A4B
_0806C4DC:
	mov r0, #64
	mov r1, #0
	bl sub_0812A324
_0806C4E4:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806C430

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_0812D430
sub_0812D430: @ 0x0812D430
	push {r4,lr}
	sub sp, sp, #4
	ldr r4, _0812D4A0  @ =gRam
	mov r0, #201
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #128
	strh r0, [r1]
	bl sub_08130D9C
	bl sub_0812EED8
	ldr r0, _0812D4A4  @ =gUnknown_083B37B4
	mov r1, #192
	lsl r1, r1, #19
	bl LZ77UnCompVram
	ldr r0, _0812D4A8  @ =gUnknown_083B47FC
	ldr r1, _0812D4AC  @ =0x06003400
	bl LZ77UnCompVram
	ldr r1, _0812D4B0  @ =0x0000098E
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0812D470
	ldr r0, _0812D4B4  @ =gUnknown_083C23D4
	ldr r1, _0812D4B8  @ =0x06002000
	bl LZ77UnCompVram
_0812D470:
	mov r1, sp
	mov r0, #127
	strh r0, [r1]
	ldr r1, _0812D4BC  @ =0x06008000
	ldr r2, _0812D4C0  @ =0x01001000
	mov r0, sp
	bl CpuSet
	bl sub_0812D338
	ldr r0, _0812D4C4  @ =0x000009E8
	add r1, r4, r0
	mov r0, #0
	strh r0, [r1]
	ldr r0, _0812D4C8  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812D4A0:
	.4byte gRam
_0812D4A4:
	.4byte gUnknown_083B37B4
_0812D4A8:
	.4byte gUnknown_083B47FC
_0812D4AC:
	.4byte 0x06003400
_0812D4B0:
	.4byte 0x0000098E
_0812D4B4:
	.4byte gUnknown_083C23D4
_0812D4B8:
	.4byte 0x06002000
_0812D4BC:
	.4byte 0x06008000
_0812D4C0:
	.4byte 0x01001000
_0812D4C4:
	.4byte 0x000009E8
_0812D4C8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0812D430


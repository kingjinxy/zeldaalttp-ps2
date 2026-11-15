	THUMB_FUNC_START sub_081102D8
sub_081102D8: @ 0x081102D8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _08110324  @ =gRam
	ldr r1, _08110328  @ =0x00000996
	add r0, r7, r1
	ldrb r0, [r0]
	add r4, r6, #0
	eor r4, r4, r0
	mov r0, #3
	and r4, r4, r0
	cmp r4, #0
	bne _08110354
	add r0, r6, #0
	mov r1, #31
	bl sub_080C35FC
	bl sub_080CA32C
	ldr r2, _0811032C  @ =0x00000FB2
	add r1, r7, r2
	add r5, r6, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r5]
	cmp r0, r1
	bne _08110334
	sub r2, r2, #96
	add r0, r7, r2
	add r0, r6, r0
	strb r4, [r0]
	ldr r1, _08110330  @ =0x00000FC2
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #48
	strb r1, [r0]
	b _08110354
	.byte 0x00
	.byte 0x00
_08110324:
	.4byte gRam
_08110328:
	.4byte 0x00000996
_0811032C:
	.4byte 0x00000FB2
_08110330:
	.4byte 0x00000FC2
_08110334:
	bl sub_080CA32C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r2, [r5]
	sub r0, r0, r2
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0811034C
	sub r0, r2, #1
	b _0811034E
_0811034C:
	add r0, r2, #1
_0811034E:
	mov r1, #15
	and r0, r0, r1
	strb r0, [r5]
_08110354:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081102D8

	.byte 0x00
	.byte 0x00

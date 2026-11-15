	THUMB_FUNC_START sub_0806D2A0
sub_0806D2A0: @ 0x0806D2A0
	push {r4-r7,lr}
	ldr r2, _0806D2E0  @ =gRam
	ldr r0, _0806D2E4  @ =0x00000A49
	add r1, r2, r0
	mov r0, #255
	strb r0, [r1]
	mov r4, #16
	ldr r0, _0806D2E8  @ =gUnknown_0814CB74
	add r5, r2, #0
	ldr r1, _0806D2EC  @ =0x00000A3C
	add r6, r5, r1
	ldr r3, _0806D2F0  @ =0x0000099E
	add r7, r5, r3
	add r1, r0, #0
	add r1, r1, #32
	mov r2, #0
_0806D2C0:
	ldr r3, _0806D2F4  @ =0x000009DA
	add r0, r5, r3
	ldrh r0, [r0]
	ldrh r3, [r1]
	cmp r0, r3
	bne _0806D324
	cmp r0, #138
	bne _0806D2FC
	ldr r0, _0806D2F8  @ =0x0000FFF1
	strh r0, [r6]
	mov r0, #24
	strb r0, [r7]
	ldr r1, _0806D2E4  @ =0x00000A49
	add r0, r5, r1
	strb r4, [r0]
	b _0806D32C
_0806D2E0:
	.4byte gRam
_0806D2E4:
	.4byte 0x00000A49
_0806D2E8:
	.4byte gUnknown_0814CB74
_0806D2EC:
	.4byte 0x00000A3C
_0806D2F0:
	.4byte 0x0000099E
_0806D2F4:
	.4byte 0x000009DA
_0806D2F8:
	.4byte 0x0000FFF1
_0806D2FC:
	cmp r0, #236
	beq _0806D32C
	bl sub_080CAEC0
	lsl r0, r0, #24
	cmp r0, #0
	bne _0806D32C
	mov r0, #13
	strh r0, [r6]
	ldr r3, _0806D320  @ =0x00000A49
	add r0, r5, r3
	strb r4, [r0]
	mov r0, #8
	bl sub_0812A0A0
	mov r0, #24
	strb r0, [r7]
	b _0806D32C
_0806D320:
	.4byte 0x00000A49
_0806D324:
	sub r1, r1, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _0806D2C0
_0806D32C:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806D2A0

	.byte 0x00
	.byte 0x00

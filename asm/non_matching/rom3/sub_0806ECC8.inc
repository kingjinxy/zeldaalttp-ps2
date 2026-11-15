	THUMB_FUNC_START sub_0806ECC8
sub_0806ECC8: @ 0x0806ECC8
	push {r4,lr}
	ldr r4, _0806ED3C  @ =gRam
	ldr r1, _0806ED40  @ =0x000009DA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #23
	bne _0806ECDE
	ldr r2, _0806ED44  @ =0x000009DE
	add r1, r4, r2
	mov r0, #4
	strh r0, [r1]
_0806ECDE:
	ldr r3, _0806ED48  @ =0x00000952
	add r0, r4, r3
	ldrh r1, [r0]
	mov r2, #149
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #6
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
	bl sub_0806F2E4
	mov r2, #22
	ldr r1, _0806ED4C  @ =gUnknown_0814CAD4
	ldr r3, _0806ED50  @ =0x00000ABA
	add r0, r4, r3
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0806ED18
	mov r2, #23
	mov r1, #0
_0806ED18:
	ldr r3, _0806ED54  @ =0x000009B4
	add r0, r4, r3
	strb r2, [r0]
	ldr r2, _0806ED58  @ =0x000009B5
	add r0, r4, r2
	strb r1, [r0]
	bl sub_0806D598
	bl sub_08079338
	ldr r3, _0806ED5C  @ =0x000009E8
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
_0806ED3C:
	.4byte gRam
_0806ED40:
	.4byte 0x000009DA
_0806ED44:
	.4byte 0x000009DE
_0806ED48:
	.4byte 0x00000952
_0806ED4C:
	.4byte gUnknown_0814CAD4
_0806ED50:
	.4byte 0x00000ABA
_0806ED54:
	.4byte 0x000009B4
_0806ED58:
	.4byte 0x000009B5
_0806ED5C:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806ECC8


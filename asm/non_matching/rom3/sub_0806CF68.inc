	THUMB_FUNC_START sub_0806CF68
sub_0806CF68: @ 0x0806CF68
	push {r4,lr}
	bl sub_08092CA0
	ldr r1, _0806CFAC  @ =gRam
	ldr r2, _0806CFB0  @ =0x00000CFA
	add r0, r1, r2
	mov r4, #0
	mov r3, #0
	strh r3, [r0]
	sub r2, r2, #2
	add r0, r1, r2
	strh r3, [r0]
	ldr r0, _0806CFB4  @ =0x00000CFC
	add r2, r1, r0
	mov r0, #31
	strh r0, [r2]
	ldr r2, _0806CFB8  @ =0x00000C9E
	add r0, r1, r2
	strh r3, [r0]
	sub r2, r2, #218
	add r0, r1, r2
	strb r4, [r0]
	sub r2, r2, #4
	add r0, r1, r2
	strh r3, [r0]
	ldr r0, _0806CFBC  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806CFAC:
	.4byte gRam
_0806CFB0:
	.4byte 0x00000CFA
_0806CFB4:
	.4byte 0x00000CFC
_0806CFB8:
	.4byte 0x00000C9E
_0806CFBC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806CF68


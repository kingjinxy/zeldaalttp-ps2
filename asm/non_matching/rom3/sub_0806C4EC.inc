	THUMB_FUNC_START sub_0806C4EC
sub_0806C4EC: @ 0x0806C4EC
	push {r4,lr}
	add r1, r0, #0
	ldr r2, _0806C50C  @ =gRam
	ldr r3, _0806C510  @ =0x000009DA
	add r0, r2, r3
	ldrh r3, [r0]
	cmp r3, #0
	bne _0806C51C
	ldr r0, _0806C514  @ =gUnknown_0814CAED
	add r0, r1, r0
	ldrb r1, [r0]
	ldr r4, _0806C518  @ =0x00000D08
	add r0, r2, r4
	strh r1, [r0]
	b _0806C534
	.byte 0x00
	.byte 0x00
_0806C50C:
	.4byte gRam
_0806C510:
	.4byte 0x000009DA
_0806C514:
	.4byte gUnknown_0814CAED
_0806C518:
	.4byte 0x00000D08
_0806C51C:
	ldr r0, _0806C53C  @ =gUnknown_0814CAE9
	add r0, r1, r0
	ldrb r0, [r0]
	ldr r4, _0806C540  @ =0x00000D08
	add r1, r2, r4
	strh r0, [r1]
	cmp r0, #12
	bne _0806C534
	cmp r3, #85
	bne _0806C534
	mov r0, #14
	strh r0, [r1]
_0806C534:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C53C:
	.4byte gUnknown_0814CAE9
_0806C540:
	.4byte 0x00000D08
	THUMB_FUNC_END sub_0806C4EC


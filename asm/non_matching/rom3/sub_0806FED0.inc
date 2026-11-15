	THUMB_FUNC_START sub_0806FED0
sub_0806FED0: @ 0x0806FED0
	push {r4,lr}
	ldr r2, _0806FF1C  @ =gRam
	ldr r0, _0806FF20  @ =0x000009E3
	add r1, r2, r0
	ldrb r3, [r1]
	mov r0, #1
	eor r3, r3, r0
	strb r3, [r1]
	ldr r1, _0806FF24  @ =0x00000AB4
	add r0, r2, r1
	ldrb r0, [r0]
	ldr r4, _0806FF28  @ =0x000009E4
	add r1, r2, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	orr r3, r3, r0
	ldr r1, _0806FF2C  @ =0x000009E2
	add r0, r2, r1
	strb r3, [r0]
	ldr r4, _0806FF30  @ =0x00000B7C
	add r3, r2, r4
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	ldrh r4, [r3]
	add r1, r0, r4
	strh r1, [r3]
	mov r1, #184
	lsl r1, r1, #4
	add r2, r2, r1
	ldrh r4, [r2]
	add r0, r0, r4
	strh r0, [r2]
	bl sub_0806FE5C
	pop {r4}
	pop {r0}
	bx r0
_0806FF1C:
	.4byte gRam
_0806FF20:
	.4byte 0x000009E3
_0806FF24:
	.4byte 0x00000AB4
_0806FF28:
	.4byte 0x000009E4
_0806FF2C:
	.4byte 0x000009E2
_0806FF30:
	.4byte 0x00000B7C
	THUMB_FUNC_END sub_0806FED0


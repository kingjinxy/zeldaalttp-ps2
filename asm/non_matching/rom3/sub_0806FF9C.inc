	THUMB_FUNC_START sub_0806FF9C
sub_0806FF9C: @ 0x0806FF9C
	push {r4,lr}
	ldr r2, _0806FFE8  @ =gRam
	ldr r0, _0806FFEC  @ =0x000009E4
	add r3, r2, r0
	ldrb r0, [r3]
	mov r1, #2
	eor r0, r0, r1
	strb r0, [r3]
	ldr r3, _0806FFF0  @ =0x00000AB4
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r4, _0806FFF4  @ =0x000009E3
	add r1, r2, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r3, r3, #210
	add r1, r2, r3
	strb r0, [r1]
	ldr r4, _0806FFF8  @ =0x00000B74
	add r3, r2, r4
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	ldrh r4, [r3]
	add r1, r0, r4
	strh r1, [r3]
	ldr r1, _0806FFFC  @ =0x00000B78
	add r2, r2, r1
	ldrh r3, [r2]
	add r0, r0, r3
	strh r0, [r2]
	bl sub_0806FE5C
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806FFE8:
	.4byte gRam
_0806FFEC:
	.4byte 0x000009E4
_0806FFF0:
	.4byte 0x00000AB4
_0806FFF4:
	.4byte 0x000009E3
_0806FFF8:
	.4byte 0x00000B74
_0806FFFC:
	.4byte 0x00000B78
	THUMB_FUNC_END sub_0806FF9C


	THUMB_FUNC_START sub_0806B69C
sub_0806B69C: @ 0x0806B69C
	push {r4,r5,lr}
	ldr r2, _0806B6E4  @ =gRam
	ldr r0, _0806B6E8  @ =0x000016CC
	add r4, r2, r0
	mov r1, #0
	mov r0, #8
	strb r0, [r4]
	ldr r5, _0806B6EC  @ =0x00001727
	add r3, r2, r5
	strb r0, [r3]
	sub r5, r5, #82
	add r0, r2, r5
	strb r1, [r0]
	sub r5, r5, #21
	add r0, r2, r5
	mov r5, #0
	ldrsh r0, [r0, r5]
	cmp r0, #191
	bgt _0806B6DE
	strb r1, [r3]
	strb r1, [r4]
	ldr r3, _0806B6F0  @ =0x000016D4
	add r0, r2, r3
	strb r1, [r0]
	ldr r5, _0806B6F4  @ =0x00000D02
	add r1, r2, r5
	mov r0, #15
	strh r0, [r1]
	ldr r0, _0806B6F8  @ =0x000009E8
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0806B6DE:
	pop {r4,r5}
	pop {r0}
	bx r0
_0806B6E4:
	.4byte gRam
_0806B6E8:
	.4byte 0x000016CC
_0806B6EC:
	.4byte 0x00001727
_0806B6F0:
	.4byte 0x000016D4
_0806B6F4:
	.4byte 0x00000D02
_0806B6F8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806B69C


	THUMB_FUNC_START sub_0806C2BC
sub_0806C2BC: @ 0x0806C2BC
	push {lr}
	bl sub_080B3308
	ldr r1, _0806C2E8  @ =gRam
	ldr r0, _0806C2EC  @ =0x000009E8
	add r2, r1, r0
	mov r0, #0
	strh r0, [r2]
	ldr r2, _0806C2F0  @ =0x00000952
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r3, _0806C2F4  @ =0x0000095C
	add r0, r1, r3
	strh r2, [r0]
	ldr r0, _0806C2F8  @ =0x0000095E
	add r1, r1, r0
	mov r0, #194
	lsl r0, r0, #3
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C2E8:
	.4byte gRam
_0806C2EC:
	.4byte 0x000009E8
_0806C2F0:
	.4byte 0x00000952
_0806C2F4:
	.4byte 0x0000095C
_0806C2F8:
	.4byte 0x0000095E
	THUMB_FUNC_END sub_0806C2BC


	THUMB_FUNC_START sub_0806C390
sub_0806C390: @ 0x0806C390
	push {lr}
	ldr r2, _0806C3B8  @ =gRam
	ldr r1, _0806C3BC  @ =0x00000CF8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0806C3B0
	ldr r0, _0806C3C0  @ =0x00000D02
	add r1, r2, r0
	ldrh r0, [r1]
	cmp r0, #0
	beq _0806C3B0
	sub r0, r0, #1
	strh r0, [r1]
_0806C3B0:
	bl sub_08130FF8
	pop {r0}
	bx r0
_0806C3B8:
	.4byte gRam
_0806C3BC:
	.4byte 0x00000CF8
_0806C3C0:
	.4byte 0x00000D02
	THUMB_FUNC_END sub_0806C390


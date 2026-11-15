	THUMB_FUNC_START sub_080748FC
sub_080748FC: @ 0x080748FC
	push {lr}
	bl sub_080B3308
	ldr r1, _08074920  @ =gRam
	mov r0, #201
	lsl r0, r0, #4
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	ldr r0, _08074924  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08074920:
	.4byte gRam
_08074924:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080748FC


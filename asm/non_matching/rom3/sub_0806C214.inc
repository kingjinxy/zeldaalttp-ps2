	THUMB_FUNC_START sub_0806C214
sub_0806C214: @ 0x0806C214
	push {lr}
	bl sub_080AB70C
	bl sub_080A3E2C
	bl sub_08070918
	ldr r1, _0806C23C  @ =gRam
	ldr r0, _0806C240  @ =0x00000A4C
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	ldr r0, _0806C244  @ =0x00001770
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r0}
	bx r0
_0806C23C:
	.4byte gRam
_0806C240:
	.4byte 0x00000A4C
_0806C244:
	.4byte 0x00001770
	THUMB_FUNC_END sub_0806C214


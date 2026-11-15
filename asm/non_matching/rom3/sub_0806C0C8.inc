	THUMB_FUNC_START sub_0806C0C8
sub_0806C0C8: @ 0x0806C0C8
	push {lr}
	bl sub_08075A94
	ldr r1, _0806C0E8  @ =gRam
	ldr r0, _0806C0EC  @ =0x000009AD
	add r2, r1, r0
	ldrb r0, [r2]
	add r0, r0, #1
	mov r3, #0
	strb r0, [r2]
	ldr r0, _0806C0F0  @ =0x000009E8
	add r1, r1, r0
	strh r3, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C0E8:
	.4byte gRam
_0806C0EC:
	.4byte 0x000009AD
_0806C0F0:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806C0C8


	THUMB_FUNC_START sub_0806C3C4
sub_0806C3C4: @ 0x0806C3C4
	push {lr}
	bl sub_08126D7C
	bl sub_0809E228
	ldr r2, _0806C3EC  @ =gRam
	ldr r1, _0806C3F0  @ =0x000009E8
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #12
	bne _0806C3E8
	ldr r3, _0806C3F4  @ =0x00001727
	add r0, r2, r3
	mov r1, #0
	strb r1, [r0]
	sub r3, r3, #91
	add r0, r2, r3
	strb r1, [r0]
_0806C3E8:
	pop {r0}
	bx r0
_0806C3EC:
	.4byte gRam
_0806C3F0:
	.4byte 0x000009E8
_0806C3F4:
	.4byte 0x00001727
	THUMB_FUNC_END sub_0806C3C4


	THUMB_FUNC_START sub_0806C330
sub_0806C330: @ 0x0806C330
	push {lr}
	ldr r0, _0806C348  @ =gRam
	ldr r1, _0806C34C  @ =0x000009DA
	add r0, r0, r1
	mov r1, #32
	strh r1, [r0]
	bl sub_080B3368
	bl sub_0808F254
	pop {r0}
	bx r0
_0806C348:
	.4byte gRam
_0806C34C:
	.4byte 0x000009DA
	THUMB_FUNC_END sub_0806C330


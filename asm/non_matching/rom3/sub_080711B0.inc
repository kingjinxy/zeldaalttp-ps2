	THUMB_FUNC_START sub_080711B0
sub_080711B0: @ 0x080711B0
	push {lr}
	bl sub_0808A738
	ldr r1, _080711C8  @ =gRam
	ldr r0, _080711CC  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080711C8:
	.4byte gRam
_080711CC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080711B0


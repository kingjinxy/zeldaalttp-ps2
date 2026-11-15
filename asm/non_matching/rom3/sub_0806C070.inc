	THUMB_FUNC_START sub_0806C070
sub_0806C070: @ 0x0806C070
	push {lr}
	ldr r1, _0806C08C  @ =gUnknown_0814C984
	ldr r0, _0806C090  @ =gRam
	ldr r2, _0806C094  @ =0x000009E8
	add r0, r0, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C08C:
	.4byte gUnknown_0814C984
_0806C090:
	.4byte gRam
_0806C094:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806C070


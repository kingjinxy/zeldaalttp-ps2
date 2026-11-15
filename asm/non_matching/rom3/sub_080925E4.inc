	THUMB_FUNC_START sub_080925E4
sub_080925E4: @ 0x080925E4
	push {lr}
	ldr r1, _08092600  @ =gUnknown_08153C04
	ldr r0, _08092604  @ =gRam
	ldr r2, _08092608  @ =0x000009C6
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
_08092600:
	.4byte gUnknown_08153C04
_08092604:
	.4byte gRam
_08092608:
	.4byte 0x000009C6
	THUMB_FUNC_END sub_080925E4


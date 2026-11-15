	THUMB_FUNC_START sub_08089E94
sub_08089E94: @ 0x08089E94
	push {lr}
	ldr r1, _08089EB0  @ =gUnknown_08153520
	ldr r0, _08089EB4  @ =gRam
	ldr r2, _08089EB8  @ =0x00000A4C
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
_08089EB0:
	.4byte gUnknown_08153520
_08089EB4:
	.4byte gRam
_08089EB8:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_08089E94


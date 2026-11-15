	THUMB_FUNC_START sub_08071334
sub_08071334: @ 0x08071334
	push {lr}
	ldr r1, _08071350  @ =gUnknown_0814CD48
	ldr r0, _08071354  @ =gRam
	ldr r2, _08071358  @ =0x000009E8
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
_08071350:
	.4byte gUnknown_0814CD48
_08071354:
	.4byte gRam
_08071358:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08071334


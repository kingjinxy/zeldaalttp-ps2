	THUMB_FUNC_START sub_08075B74
sub_08075B74: @ 0x08075B74
	push {lr}
	ldr r1, _08075B90  @ =gUnknown_0814DAAC
	ldr r0, _08075B94  @ =gRam
	ldr r2, _08075B98  @ =0x000009E8
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
_08075B90:
	.4byte gUnknown_0814DAAC
_08075B94:
	.4byte gRam
_08075B98:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08075B74


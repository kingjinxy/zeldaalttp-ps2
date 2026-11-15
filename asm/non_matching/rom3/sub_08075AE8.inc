	THUMB_FUNC_START sub_08075AE8
sub_08075AE8: @ 0x08075AE8
	push {lr}
	ldr r0, _08075AFC  @ =gRam
	ldr r1, _08075B00  @ =0x00000B64
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
	bl sub_0807597C
	pop {r0}
	bx r0
_08075AFC:
	.4byte gRam
_08075B00:
	.4byte 0x00000B64
	THUMB_FUNC_END sub_08075AE8


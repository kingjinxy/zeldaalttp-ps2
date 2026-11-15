	THUMB_FUNC_START sub_08070B44
sub_08070B44: @ 0x08070B44
	push {lr}
	ldr r1, _08070B5C  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #16
	strh r0, [r1]
	bl sub_0806F8B8
	pop {r0}
	bx r0
_08070B5C:
	.4byte gRam
	THUMB_FUNC_END sub_08070B44


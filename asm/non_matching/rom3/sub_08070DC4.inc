	THUMB_FUNC_START sub_08070DC4
sub_08070DC4: @ 0x08070DC4
	push {r4,r5,lr}
	ldr r4, _08070DE0  @ =gRam
	mov r0, #176
	lsl r0, r0, #4
	add r4, r4, r0
	ldrh r5, [r4]
	bl sub_0806D93C
	strh r5, [r4]
	bl sub_08092CA0
	pop {r4,r5}
	pop {r0}
	bx r0
_08070DE0:
	.4byte gRam
	THUMB_FUNC_END sub_08070DC4


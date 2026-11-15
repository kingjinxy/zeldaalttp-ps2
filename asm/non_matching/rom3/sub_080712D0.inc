	THUMB_FUNC_START sub_080712D0
sub_080712D0: @ 0x080712D0
	push {r4,lr}
	bl sub_08130FF8
	ldr r4, _080712FC  @ =gRam
	ldr r0, _08071300  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	bl sub_0806C620
	ldr r0, _08071304  @ =0x00000514
	add r4, r4, r0
	ldrh r1, [r4]
	ldr r0, _08071308  @ =0x0000FFFC
	and r0, r0, r1
	mov r1, #3
	orr r0, r0, r1
	strh r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_080712FC:
	.4byte gRam
_08071300:
	.4byte 0x000009E8
_08071304:
	.4byte 0x00000514
_08071308:
	.4byte 0x0000FFFC
	THUMB_FUNC_END sub_080712D0


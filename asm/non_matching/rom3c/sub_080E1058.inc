	THUMB_FUNC_START sub_080E1058
sub_080E1058: @ 0x080E1058
	push {r4,lr}
	add r4, r0, #0
	add r0, r1, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	lsl r0, r0, #16
	lsr r0, r0, #16
	bl sub_080C95C0
	ldr r0, _080E107C  @ =gRam
	ldr r1, _080E1080  @ =0x00000FC2
	add r0, r0, r1
	add r4, r4, r0
	mov r0, #0
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_080E107C:
	.4byte gRam
_080E1080:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E1058


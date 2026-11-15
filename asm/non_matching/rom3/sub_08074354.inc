	THUMB_FUNC_START sub_08074354
sub_08074354: @ 0x08074354
	push {lr}
	bl sub_080729E4
	ldr r0, _08074368  @ =gRam
	ldr r1, _0807436C  @ =0x00000C04
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
	pop {r0}
	bx r0
_08074368:
	.4byte gRam
_0807436C:
	.4byte 0x00000C04
	THUMB_FUNC_END sub_08074354


	THUMB_FUNC_START sub_080744E8
sub_080744E8: @ 0x080744E8
	push {lr}
	ldr r0, _08074504  @ =gRam
	mov r1, #183
	lsl r1, r1, #4
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
	bl sub_08077F28
	bl sub_08077F4C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08074504:
	.4byte gRam
	THUMB_FUNC_END sub_080744E8


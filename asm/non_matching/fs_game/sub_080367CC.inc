	THUMB_FUNC_START sub_080367CC
sub_080367CC: @ 0x080367CC
	push {r7,lr}
	mov r7, sp
	ldr r0, _080367D8  @ =gUnknown_03000FC0
	ldr r1, [r0, #8]
	add r0, r1, #0
	b _080367DC
_080367D8:
	.4byte gUnknown_03000FC0
_080367DC:
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080367CC

	.byte 0x00
	.byte 0x00

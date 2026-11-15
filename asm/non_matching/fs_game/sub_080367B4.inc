	THUMB_FUNC_START sub_080367B4
sub_080367B4: @ 0x080367B4
	push {r7,lr}
	mov r7, sp
	ldr r0, _080367C0  @ =gUnknown_03000FC0
	ldr r1, [r0, #4]
	add r0, r1, #0
	b _080367C4
_080367C0:
	.4byte gUnknown_03000FC0
_080367C4:
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080367B4

	.byte 0x00
	.byte 0x00

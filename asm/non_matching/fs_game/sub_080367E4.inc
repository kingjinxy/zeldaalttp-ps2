	THUMB_FUNC_START sub_080367E4
sub_080367E4: @ 0x080367E4
	push {r7,lr}
	mov r7, sp
	ldr r0, _080367F0  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	add r0, r1, #0
	b _080367F4
_080367F0:
	.4byte gUnknown_03000FC0
_080367F4:
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080367E4

	.byte 0x00
	.byte 0x00

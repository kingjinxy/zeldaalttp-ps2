	THUMB_FUNC_START sub_08037554
sub_08037554: @ 0x08037554
	push {r7,lr}
	mov r7, sp
	mov r0, #0
	ldr r1, _08037568  @ =gUnknown_03000FC0
	ldr r2, [r1, #8]
	cmp r2, #2
	bne _08037564
	mov r0, #1
_08037564:
	b _0803756C
	.byte 0x00
	.byte 0x00
_08037568:
	.4byte gUnknown_03000FC0
_0803756C:
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08037554

	.byte 0x00
	.byte 0x00

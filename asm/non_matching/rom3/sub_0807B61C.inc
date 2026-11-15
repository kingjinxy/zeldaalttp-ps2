	THUMB_FUNC_START sub_0807B61C
sub_0807B61C: @ 0x0807B61C
	push {lr}
	bl sub_080798DC
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0807B62E
	bl sub_0807A178
_0807B62E:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0807B61C

	.byte 0x00
	.byte 0x00

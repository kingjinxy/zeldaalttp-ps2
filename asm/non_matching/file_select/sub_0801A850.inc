	THUMB_FUNC_START sub_0801A850
sub_0801A850: @ 0x0801A850
	push {lr}
	mov r1, #6
	strb r1, [r0, #20]
	mov r1, #5
	bl sub_08003870
	mov r0, #48
	bl sub_08003DFC
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A850

	.byte 0x00
	.byte 0x00

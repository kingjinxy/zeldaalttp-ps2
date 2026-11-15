	THUMB_FUNC_START sub_08011324
sub_08011324: @ 0x08011324
	push {lr}
	bl sub_080113D8
	mov r0, #0
	bl sub_08011344
	mov r0, #1
	bl sub_08011344
	mov r0, #2
	bl sub_08011344
	bl sub_08011408
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08011324


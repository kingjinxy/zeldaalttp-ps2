	THUMB_FUNC_START sub_080C1768
sub_080C1768: @ 0x080C1768
	push {lr}
	lsl r0, r0, #24
	mov r1, #160
	lsl r1, r1, #20
	add r0, r0, r1
	lsr r0, r0, #24
	bl sub_080BF774
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C1768


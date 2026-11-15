	THUMB_FUNC_START sub_0810F1A8
sub_0810F1A8: @ 0x0810F1A8
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #0
	mov r2, #7
	bl sub_0810E24C
	add r0, r4, #0
	mov r1, #10
	bl sub_0810F28C
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810F1A8


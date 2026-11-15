	THUMB_FUNC_START sub_0800EBD4
sub_0800EBD4: @ 0x0800EBD4
	push {r4,lr}
	add r4, r0, #0
	ldr r0, [r4, #8]
	add r1, r4, #0
	add r1, r1, #216
	bl sub_0800EC08
	ldr r0, [r4, #12]
	add r1, r4, #0
	add r1, r1, #224
	bl sub_0800EC08
	ldr r0, [r4, #16]
	add r1, r4, #0
	add r1, r1, #232
	bl sub_0800EC08
	ldr r0, [r4, #20]
	add r1, r4, #0
	add r1, r1, #240
	bl sub_0800EC08
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0800EBD4

	.byte 0x00
	.byte 0x00

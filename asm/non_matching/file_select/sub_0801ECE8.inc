	THUMB_FUNC_START sub_0801ECE8
sub_0801ECE8: @ 0x0801ECE8
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003F1C
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801ED08
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
_0801ED08:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801ECE8

	.byte 0x00
	.byte 0x00

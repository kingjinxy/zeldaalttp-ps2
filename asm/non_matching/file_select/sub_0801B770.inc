	THUMB_FUNC_START sub_0801B770
sub_0801B770: @ 0x0801B770
	push {r4,lr}
	add r4, r0, #0
	bl sub_0801B8F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801B79C
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #17
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #112
	ldrh r0, [r0]
	strh r0, [r4, #50]
	add r0, r4, #0
	add r0, r0, #114
	ldrh r0, [r0]
	strh r0, [r4, #54]
	add r0, r4, #0
	bl 0x08008D90
_0801B79C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801B770

	.byte 0x00
	.byte 0x00

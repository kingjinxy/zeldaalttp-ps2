	THUMB_FUNC_START sub_080204E8
sub_080204E8: @ 0x080204E8
	push {r4,lr}
	add r2, r0, #0
	add r4, r1, #0
	mov r0, #3
	strb r0, [r4, #8]
	mov r0, #39
	strb r0, [r4, #9]
	add r1, r1, #61
	mov r0, #248
	strb r0, [r1]
	ldr r0, [r2, #100]
	str r0, [r4, #100]
	add r0, r2, #0
	add r0, r0, #112
	ldrh r1, [r0]
	add r0, r4, #0
	add r0, r0, #112
	strh r1, [r0]
	add r0, r2, #0
	add r0, r0, #114
	ldrh r0, [r0]
	add r1, r4, #0
	add r1, r1, #114
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #116
	ldrh r1, [r0]
	add r0, r4, #0
	add r0, r0, #116
	strh r1, [r0]
	add r0, r2, #0
	add r0, r0, #118
	ldrh r0, [r0]
	add r1, r4, #0
	add r1, r1, #118
	strh r0, [r1]
	add r0, r2, #0
	add r0, r0, #120
	ldrh r1, [r0]
	add r0, r4, #0
	add r0, r0, #120
	strh r1, [r0]
	add r0, r2, #0
	add r0, r0, #122
	ldrh r0, [r0]
	add r1, r4, #0
	add r1, r1, #122
	strh r0, [r1]
	add r0, r2, #0
	add r1, r4, #0
	bl sub_08044018
	mov r0, #4
	add r1, r4, #0
	bl sub_08012728
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080204E8

	.byte 0x00
	.byte 0x00

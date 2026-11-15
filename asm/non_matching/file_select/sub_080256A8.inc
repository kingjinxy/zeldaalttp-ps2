	THUMB_FUNC_START sub_080256A8
sub_080256A8: @ 0x080256A8
	push {r4,lr}
	add r4, r0, #0
	bl 0x08009FB8
	mov r1, #160
	lsl r1, r1, #6
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _080256D4
	add r1, r4, #0
	add r1, r1, #69
	strb r0, [r1]
	ldr r0, [r4, #100]
	add r0, r0, #61
	mov r1, #226
	strb r1, [r0]
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl sub_0803D3D0
_080256D4:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080256A8

	.byte 0x00
	.byte 0x00

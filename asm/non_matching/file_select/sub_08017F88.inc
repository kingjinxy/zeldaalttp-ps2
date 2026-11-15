	THUMB_FUNC_START sub_08017F88
sub_08017F88: @ 0x08017F88
	push {lr}
	add r2, r0, #0
	mov r0, #3
	strb r0, [r2, #20]
	add r1, r2, #0
	add r1, r1, #70
	strb r0, [r1]
	sub r1, r1, #7
	mov r0, #71
	strb r0, [r1]
	add r1, r1, #29
	ldr r0, _08017FB0  @ =0x000031FF
	strh r0, [r1]
	add r0, r2, #0
	mov r1, #4
	bl sub_08017D78
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08017FB0:
	.4byte 0x000031FF
	THUMB_FUNC_END sub_08017F88


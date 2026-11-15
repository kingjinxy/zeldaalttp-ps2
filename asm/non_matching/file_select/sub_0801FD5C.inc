	THUMB_FUNC_START sub_0801FD5C
sub_0801FD5C: @ 0x0801FD5C
	push {r4,lr}
	add r4, r0, #0
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #15
	strb r0, [r4, #23]
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl sub_0801FCC4
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801FD5C


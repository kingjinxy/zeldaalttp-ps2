	THUMB_FUNC_START sub_080D7BCC
sub_080D7BCC: @ 0x080D7BCC
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080D7BF4  @ =gRam
	ldr r3, _080D7BF8  @ =0x00001142
	add r0, r1, r3
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D7BF0
	sub r3, r3, #80
	add r0, r1, r3
	add r0, r2, r0
	mov r2, #161
	lsl r2, r2, #4
	add r1, r1, r2
	ldrb r1, [r1]
	strb r1, [r0]
_080D7BF0:
	pop {r0}
	bx r0
_080D7BF4:
	.4byte gRam
_080D7BF8:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080D7BCC


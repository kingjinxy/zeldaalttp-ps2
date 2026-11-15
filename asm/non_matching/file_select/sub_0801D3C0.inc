	THUMB_FUNC_START sub_0801D3C0
sub_0801D3C0: @ 0x0801D3C0
	mov r1, #1
	strb r1, [r0, #20]
	add r2, r0, #0
	add r2, r2, #112
	mov r1, #60
	strh r1, [r2]
	ldrb r2, [r0, #28]
	sub r1, r1, #64
	and r1, r1, r2
	strb r1, [r0, #28]
	bx lr
	THUMB_FUNC_END sub_0801D3C0

	.byte 0x00
	.byte 0x00

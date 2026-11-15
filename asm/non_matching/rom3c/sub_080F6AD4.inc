	THUMB_FUNC_START sub_080F6AD4
sub_080F6AD4: @ 0x080F6AD4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F6AF0  @ =gRam
	ldr r2, _080F6AF4  @ =0x00001142
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #16
	strb r2, [r1]
	bl sub_080C3774
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F6AF0:
	.4byte gRam
_080F6AF4:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080F6AD4


	THUMB_FUNC_START sub_080D7BFC
sub_080D7BFC: @ 0x080D7BFC
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl sub_08093078
	ldr r5, _080D7C28  @ =gRam
	ldr r1, _080D7C2C  @ =0x00001776
	add r0, r5, r1
	mov r6, #0
	strb r6, [r0]
	mov r0, #29
	bl sub_080A1588
	ldr r0, _080D7C30  @ =0x00000FA2
	add r5, r5, r0
	add r4, r4, r5
	strb r6, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D7C28:
	.4byte gRam
_080D7C2C:
	.4byte 0x00001776
_080D7C30:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080D7BFC


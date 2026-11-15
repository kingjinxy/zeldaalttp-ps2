	THUMB_FUNC_START sub_080BDCB4
sub_080BDCB4: @ 0x080BDCB4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080BDCE4  @ =gRam
	ldr r1, _080BDCE8  @ =0x00000FC3
	add r3, r2, r1
	mov r1, #16
	strb r1, [r3]
	ldr r1, _080BDCEC  @ =0x00000FC4
	add r3, r2, r1
	mov r1, #32
	strb r1, [r3]
	ldr r3, _080BDCF0  @ =0x00001125
	add r1, r2, r3
	mov r3, #8
	strb r3, [r1]
	ldr r1, _080BDCF4  @ =0x00001126
	add r2, r2, r1
	strb r3, [r2]
	bl sub_080B9584
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BDCE4:
	.4byte gRam
_080BDCE8:
	.4byte 0x00000FC3
_080BDCEC:
	.4byte 0x00000FC4
_080BDCF0:
	.4byte 0x00001125
_080BDCF4:
	.4byte 0x00001126
	THUMB_FUNC_END sub_080BDCB4


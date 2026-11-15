	THUMB_FUNC_START sub_080BDCF8
sub_080BDCF8: @ 0x080BDCF8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080BDD24  @ =gRam
	ldr r1, _080BDD28  @ =0x00000FC2
	add r3, r2, r1
	mov r1, #255
	strb r1, [r3]
	ldr r1, _080BDD2C  @ =0x00000FC3
	add r3, r2, r1
	mov r1, #1
	neg r1, r1
	strb r1, [r3]
	ldr r1, _080BDD30  @ =0x00000FC4
	add r2, r2, r1
	mov r1, #1
	neg r1, r1
	strb r1, [r2]
	bl sub_080B9454
	pop {r0}
	bx r0
_080BDD24:
	.4byte gRam
_080BDD28:
	.4byte 0x00000FC2
_080BDD2C:
	.4byte 0x00000FC3
_080BDD30:
	.4byte 0x00000FC4
	THUMB_FUNC_END sub_080BDCF8


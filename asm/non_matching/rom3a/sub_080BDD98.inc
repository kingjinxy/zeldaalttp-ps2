	THUMB_FUNC_START sub_080BDD98
sub_080BDD98: @ 0x080BDD98
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080BDDC8  @ =gRam
	ldr r1, _080BDDCC  @ =0x00000F86
	add r3, r2, r1
	mov r1, #2
	strb r1, [r3]
	ldr r1, _080BDDD0  @ =0x00000F17
	add r3, r2, r1
	mov r1, #8
	strb r1, [r3]
	ldr r1, _080BDDD4  @ =0x00000FC3
	add r3, r2, r1
	mov r1, #19
	strb r1, [r3]
	ldr r1, _080BDDD8  @ =0x00000FC6
	add r2, r2, r1
	mov r1, #64
	strb r1, [r2]
	bl sub_080B9454
	pop {r0}
	bx r0
_080BDDC8:
	.4byte gRam
_080BDDCC:
	.4byte 0x00000F86
_080BDDD0:
	.4byte 0x00000F17
_080BDDD4:
	.4byte 0x00000FC3
_080BDDD8:
	.4byte 0x00000FC6
	THUMB_FUNC_END sub_080BDD98


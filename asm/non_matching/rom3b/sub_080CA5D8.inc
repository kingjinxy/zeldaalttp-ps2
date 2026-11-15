	THUMB_FUNC_START sub_080CA5D8
sub_080CA5D8: @ 0x080CA5D8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080CA604  @ =gRam
	ldr r2, _080CA608  @ =0x00000FA2
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	mov r2, #4
	strb r2, [r1]
	ldr r2, _080CA60C  @ =0x00000F62
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r1, _080CA610  @ =0x00000FC2
	add r3, r3, r1
	add r0, r0, r3
	mov r1, #224
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080CA604:
	.4byte gRam
_080CA608:
	.4byte 0x00000FA2
_080CA60C:
	.4byte 0x00000F62
_080CA610:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080CA5D8


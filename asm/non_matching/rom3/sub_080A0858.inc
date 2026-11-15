	THUMB_FUNC_START sub_080A0858
sub_080A0858: @ 0x080A0858
	push {lr}
	ldr r0, _080A086C  @ =gRam
	ldr r1, _080A0870  @ =0x00000A11
	add r0, r0, r1
	mov r1, #3
	strb r1, [r0]
	bl sub_0809FF34
	pop {r0}
	bx r0
_080A086C:
	.4byte gRam
_080A0870:
	.4byte 0x00000A11
	THUMB_FUNC_END sub_080A0858


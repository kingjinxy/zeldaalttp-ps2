	THUMB_FUNC_START sub_080A083C
sub_080A083C: @ 0x080A083C
	push {lr}
	ldr r0, _080A0850  @ =gRam
	ldr r1, _080A0854  @ =0x00000A11
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	bl sub_0809FF34
	pop {r0}
	bx r0
_080A0850:
	.4byte gRam
_080A0854:
	.4byte 0x00000A11
	THUMB_FUNC_END sub_080A083C


	THUMB_FUNC_START sub_080A0874
sub_080A0874: @ 0x080A0874
	push {lr}
	ldr r0, _080A0888  @ =gRam
	ldr r1, _080A088C  @ =0x00000A11
	add r0, r0, r1
	mov r1, #2
	strb r1, [r0]
	bl sub_0809FF34
	pop {r0}
	bx r0
_080A0888:
	.4byte gRam
_080A088C:
	.4byte 0x00000A11
	THUMB_FUNC_END sub_080A0874


	THUMB_FUNC_START sub_08074370
sub_08074370: @ 0x08074370
	push {lr}
	ldr r0, _08074384  @ =gRam
	ldr r1, _08074388  @ =0x00000A3E
	add r0, r0, r1
	mov r1, #255
	strb r1, [r0]
	bl sub_08072F1C
	pop {r0}
	bx r0
_08074384:
	.4byte gRam
_08074388:
	.4byte 0x00000A3E
	THUMB_FUNC_END sub_08074370


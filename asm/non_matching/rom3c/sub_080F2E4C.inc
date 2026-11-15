	THUMB_FUNC_START sub_080F2E4C
sub_080F2E4C: @ 0x080F2E4C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080F2E68  @ =gRam
	ldr r2, _080F2E6C  @ =0x00001142
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #12
	strb r2, [r1]
	bl sub_080C3774
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F2E68:
	.4byte gRam
_080F2E6C:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080F2E4C


	THUMB_FUNC_START sub_080AA7C8
sub_080AA7C8: @ 0x080AA7C8
	push {lr}
	ldr r0, _080AA7E0  @ =gRam
	ldr r1, _080AA7E4  @ =0x00000D08
	add r0, r0, r1
	mov r1, #0
	strh r1, [r0]
	mov r0, #255
	bl sub_080AA7E8
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AA7E0:
	.4byte gRam
_080AA7E4:
	.4byte 0x00000D08
	THUMB_FUNC_END sub_080AA7C8


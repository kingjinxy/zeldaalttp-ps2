	THUMB_FUNC_START sub_080F6284
sub_080F6284: @ 0x080F6284
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080F62A4  @ =gRam
	ldr r1, _080F62A8  @ =0x00000F12
	add r4, r4, r1
	add r4, r0, r4
	mov r5, #0
	mov r1, #240
	strb r1, [r4]
	bl Sprite3_MoveVert
	strb r5, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_080F62A4:
	.4byte gRam
_080F62A8:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080F6284


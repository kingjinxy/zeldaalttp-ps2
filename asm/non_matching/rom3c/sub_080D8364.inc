	THUMB_FUNC_START sub_080D8364
sub_080D8364: @ 0x080D8364
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #109
	bl sub_080CF0AC
	ldr r2, _080D83B0  @ =gRam
	ldr r1, _080D83B4  @ =0x00000FA2
	add r0, r2, r1
	add r0, r4, r0
	mov r3, #0
	mov r1, #6
	strb r1, [r0]
	ldr r1, _080D83B8  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #31
	strb r1, [r0]
	ldr r1, _080D83BC  @ =0x00000FF2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #236
	strb r1, [r0]
	ldr r1, _080D83C0  @ =0x000010C2
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	ldr r0, _080D83C4  @ =0x00000F82
	add r2, r2, r0
	add r4, r4, r2
	mov r0, #128
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D83B0:
	.4byte gRam
_080D83B4:
	.4byte 0x00000FA2
_080D83B8:
	.4byte 0x00000FC2
_080D83BC:
	.4byte 0x00000FF2
_080D83C0:
	.4byte 0x000010C2
_080D83C4:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080D8364


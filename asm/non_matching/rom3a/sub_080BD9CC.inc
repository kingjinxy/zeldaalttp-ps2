	THUMB_FUNC_START sub_080BD9CC
sub_080BD9CC: @ 0x080BD9CC
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl sub_080BDB54
	ldr r5, _080BDA04  @ =gRam
	ldr r0, _080BDA08  @ =0x00000FF2
	add r1, r5, r0
	mov r0, #146
	strb r0, [r1]
	mov r0, #0
	bl sub_080CEB84
	add r0, r4, #0
	bl sub_080B9584
	mov r0, #0
	bl sub_080FB840
	ldr r0, _080BDA0C  @ =0x00000FE2
	add r5, r5, r0
	mov r0, #127
	strb r0, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BDA04:
	.4byte gRam
_080BDA08:
	.4byte 0x00000FF2
_080BDA0C:
	.4byte 0x00000FE2
	THUMB_FUNC_END sub_080BD9CC


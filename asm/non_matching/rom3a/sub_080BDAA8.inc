	THUMB_FUNC_START sub_080BDAA8
sub_080BDAA8: @ 0x080BDAA8
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl sub_080BDB54
	ldr r5, _080BDAE8  @ =gRam
	ldr r0, _080BDAEC  @ =0x00000FF2
	add r1, r5, r0
	mov r0, #189
	strb r0, [r1]
	mov r0, #0
	bl sub_080CEB84
	add r0, r4, #0
	bl sub_080B9584
	mov r0, #0
	bl sub_0810460C
	ldr r0, _080BDAF0  @ =0x00000FA2
	add r1, r5, r0
	mov r0, #9
	strb r0, [r1]
	ldr r0, _080BDAF4  @ =0x00000F62
	add r5, r5, r0
	mov r0, #48
	strb r0, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BDAE8:
	.4byte gRam
_080BDAEC:
	.4byte 0x00000FF2
_080BDAF0:
	.4byte 0x00000FA2
_080BDAF4:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080BDAA8


	THUMB_FUNC_START sub_080BDA48
sub_080BDA48: @ 0x080BDA48
	push {r4,r5,lr}
	add r5, r0, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	bl sub_080BDB54
	ldr r4, _080BDA98  @ =gRam
	ldr r0, _080BDA9C  @ =0x00000FF2
	add r1, r4, r0
	mov r0, #163
	strb r0, [r1]
	mov r0, #0
	bl sub_080CEB84
	ldr r0, _080BDAA0  @ =0x00000FF3
	add r1, r4, r0
	mov r0, #164
	strb r0, [r1]
	mov r0, #1
	bl sub_080CEB84
	ldr r0, _080BDAA4  @ =0x00000FF4
	add r4, r4, r0
	mov r0, #162
	strb r0, [r4]
	mov r0, #2
	bl sub_080CEB84
	add r0, r5, #0
	bl sub_080B9584
	mov r0, #0
	bl sub_08103834
	mov r0, #2
	bl sub_0810328C
	pop {r4,r5}
	pop {r0}
	bx r0
_080BDA98:
	.4byte gRam
_080BDA9C:
	.4byte 0x00000FF2
_080BDAA0:
	.4byte 0x00000FF3
_080BDAA4:
	.4byte 0x00000FF4
	THUMB_FUNC_END sub_080BDA48


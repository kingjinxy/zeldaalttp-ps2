	THUMB_FUNC_START sub_080DD9E8
sub_080DD9E8: @ 0x080DD9E8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _080DDA1C  @ =gRam
	ldr r2, _080DDA20  @ =0x00001770
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r4, _080DDA24  @ =0x00000F92
	add r0, r1, r4
	add r0, r3, r0
	strb r2, [r0]
	ldr r0, _080DDA28  @ =0x00000FC2
	add r1, r1, r0
	add r1, r3, r1
	ldrb r0, [r1]
	cmp r0, #0
	bne _080DDA16
	mov r0, #160
	strb r0, [r1]
	add r0, r3, #0
	bl sub_080DD6A0
_080DDA16:
	pop {r4}
	pop {r0}
	bx r0
_080DDA1C:
	.4byte gRam
_080DDA20:
	.4byte 0x00001770
_080DDA24:
	.4byte 0x00000F92
_080DDA28:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080DD9E8


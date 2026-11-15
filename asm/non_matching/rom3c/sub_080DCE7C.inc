	THUMB_FUNC_START sub_080DCE7C
sub_080DCE7C: @ 0x080DCE7C
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080DCEE4  @ =gRam
	ldr r0, _080DCEE8  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	mov r2, #0
	strb r0, [r1]
	ldr r1, _080DCEEC  @ =0x00001776
	add r0, r5, r1
	strb r2, [r0]
	mov r0, #26
	bl sub_080A1588
	mov r0, #1
	bl sub_080BE9A0
	add r0, r4, #0
	bl sub_080DD3D4
	ldr r1, _080DCEF0  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	ldr r1, _080DCEF4  @ =0x00000F22
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
	ldr r1, _080DCEF8  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	ldr r1, _080DCEFC  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	ldr r0, _080DCF00  @ =0x00000FB2
	add r5, r5, r0
	add r4, r4, r5
	strb r1, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DCEE4:
	.4byte gRam
_080DCEE8:
	.4byte 0x00000F52
_080DCEEC:
	.4byte 0x00001776
_080DCEF0:
	.4byte 0x00000FC2
_080DCEF4:
	.4byte 0x00000F22
_080DCEF8:
	.4byte 0x00000F12
_080DCEFC:
	.4byte 0x00001082
_080DCF00:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080DCE7C


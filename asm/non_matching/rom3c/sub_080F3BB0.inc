	THUMB_FUNC_START sub_080F3BB0
sub_080F3BB0: @ 0x080F3BB0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #57
	bl sub_080CF140
	ldr r2, _080F3BF4  @ =gRam
	ldr r0, _080F3BF8  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F3BFC  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #168
	strb r1, [r0]
	ldr r1, _080F3C00  @ =0x00000F22
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	ldr r0, _080F3C04  @ =0x00000FD2
	add r2, r2, r0
	add r4, r4, r2
	mov r0, #2
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F3BF4:
	.4byte gRam
_080F3BF8:
	.4byte 0x00000F52
_080F3BFC:
	.4byte 0x00000FC2
_080F3C00:
	.4byte 0x00000F22
_080F3C04:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080F3BB0


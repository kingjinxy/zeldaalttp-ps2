	THUMB_FUNC_START sub_080DDA70
sub_080DDA70: @ 0x080DDA70
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080DDA98  @ =gRam
	ldr r2, _080DDA9C  @ =0x0000096C
	add r3, r1, r2
	mov r2, #4
	strh r2, [r3]
	ldr r2, _080DDAA0  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #5
	ldr r2, _080DDAA4  @ =gUnknown_08176254
	add r1, r1, r2
	bl sub_080C94D0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DDA98:
	.4byte gRam
_080DDA9C:
	.4byte 0x0000096C
_080DDAA0:
	.4byte 0x00000F92
_080DDAA4:
	.4byte gUnknown_08176254
	THUMB_FUNC_END sub_080DDA70


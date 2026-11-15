	THUMB_FUNC_START sub_080D8E68
sub_080D8E68: @ 0x080D8E68
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D8E90  @ =gRam
	ldr r2, _080D8E94  @ =0x00000FC2
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsr r1, r1, #1
	mov r2, #1
	and r1, r1, r2
	lsl r1, r1, #5
	ldr r2, _080D8E98  @ =gUnknown_08175800
	add r1, r1, r2
	mov r2, #4
	bl sub_080C9480
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D8E90:
	.4byte gRam
_080D8E94:
	.4byte 0x00000FC2
_080D8E98:
	.4byte gUnknown_08175800
	THUMB_FUNC_END sub_080D8E68


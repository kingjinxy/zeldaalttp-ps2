	THUMB_FUNC_START sub_08031FD8
sub_08031FD8: @ 0x08031FD8
	push {lr}
	ldr r1, _08031FF0  @ =gUnknown_08427A10
	ldr r0, _08031FF4  @ =gUnknown_03005050
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08031FF0:
	.4byte gUnknown_08427A10
_08031FF4:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_08031FD8


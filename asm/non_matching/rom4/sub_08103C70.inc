	THUMB_FUNC_START sub_08103C70
sub_08103C70: @ 0x08103C70
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08103C94  @ =gRam
	ldr r2, _08103C98  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	ldrb r2, [r1]
	lsl r1, r2, #1
	add r1, r1, r2
	lsl r1, r1, #3
	ldr r2, _08103C9C  @ =gUnknown_0817BA58
	add r1, r1, r2
	mov r2, #3
	bl sub_080C9480
	pop {r0}
	bx r0
_08103C94:
	.4byte gRam
_08103C98:
	.4byte 0x00000F92
_08103C9C:
	.4byte gUnknown_0817BA58
	THUMB_FUNC_END sub_08103C70


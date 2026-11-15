	THUMB_FUNC_START sub_08103CA0
sub_08103CA0: @ 0x08103CA0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08103CC0  @ =gRam
	ldr r2, _08103CC4  @ =0x00000FB2
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #4
	ldr r2, _08103CC8  @ =gUnknown_0817BB18
	add r1, r1, r2
	mov r2, #2
	bl sub_080C9480
	pop {r0}
	bx r0
_08103CC0:
	.4byte gRam
_08103CC4:
	.4byte 0x00000FB2
_08103CC8:
	.4byte gUnknown_0817BB18
	THUMB_FUNC_END sub_08103CA0


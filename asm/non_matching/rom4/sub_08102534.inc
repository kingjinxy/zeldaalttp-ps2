	THUMB_FUNC_START sub_08102534
sub_08102534: @ 0x08102534
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08102550  @ =gRam
	ldr r2, _08102554  @ =0x0000096C
	add r1, r1, r2
	mov r2, #4
	strh r2, [r1]
	ldr r1, _08102558  @ =gUnknown_0817B778
	bl sub_080C94AC
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102550:
	.4byte gRam
_08102554:
	.4byte 0x0000096C
_08102558:
	.4byte gUnknown_0817B778
	THUMB_FUNC_END sub_08102534


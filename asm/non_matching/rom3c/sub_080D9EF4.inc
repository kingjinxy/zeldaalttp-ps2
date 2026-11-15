	THUMB_FUNC_START sub_080D9EF4
sub_080D9EF4: @ 0x080D9EF4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080D9F10  @ =gRam
	ldr r2, _080D9F14  @ =0x0000096C
	add r1, r1, r2
	mov r2, #3
	strh r2, [r1]
	ldr r1, _080D9F18  @ =gUnknown_081759DC
	bl sub_080C94D0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D9F10:
	.4byte gRam
_080D9F14:
	.4byte 0x0000096C
_080D9F18:
	.4byte gUnknown_081759DC
	THUMB_FUNC_END sub_080D9EF4


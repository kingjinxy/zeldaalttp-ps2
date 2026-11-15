	THUMB_FUNC_START sub_080B80FC
sub_080B80FC: @ 0x080B80FC
	push {lr}
	ldr r1, _080B8114  @ =gUnknown_08170270
	ldr r0, _080B8118  @ =gUnknown_02006883
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B8114:
	.4byte gUnknown_08170270
_080B8118:
	.4byte gUnknown_02006883
	THUMB_FUNC_END sub_080B80FC


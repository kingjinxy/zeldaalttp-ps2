	THUMB_FUNC_START sub_080B8098
sub_080B8098: @ 0x080B8098
	push {lr}
	ldr r1, _080B80B0  @ =gUnknown_08170110
	ldr r0, _080B80B4  @ =gUnknown_02006883
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B80B0:
	.4byte gUnknown_08170110
_080B80B4:
	.4byte gUnknown_02006883
	THUMB_FUNC_END sub_080B8098


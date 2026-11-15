	THUMB_FUNC_START sub_080B7F4C
sub_080B7F4C: @ 0x080B7F4C
	push {lr}
	ldr r1, _080B7F64  @ =gUnknown_08170198
	ldr r0, _080B7F68  @ =gUnknown_020068C0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B7F64:
	.4byte gUnknown_08170198
_080B7F68:
	.4byte gUnknown_020068C0
	THUMB_FUNC_END sub_080B7F4C


	THUMB_FUNC_START sub_080B80B8
sub_080B80B8: @ 0x080B80B8
	push {lr}
	ldr r0, _080B80D0  @ =gUnknown_020068C1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B80CA
	ldr r1, _080B80D4  @ =gUnknown_020068C0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B80CA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B80D0:
	.4byte gUnknown_020068C1
_080B80D4:
	.4byte gUnknown_020068C0
	THUMB_FUNC_END sub_080B80B8


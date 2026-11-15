	THUMB_FUNC_START sub_080B3418
sub_080B3418: @ 0x080B3418
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080B3440  @ =gRam
	mov r1, #179
	lsl r1, r1, #5
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #3
	bne _080B344C
	ldr r1, _080B3444  @ =gPendantCount
	ldr r0, _080B3448  @ =gUnknown_0816EEB6
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _080B344C
	mov r0, #1
	b _080B344E
_080B3440:
	.4byte gRam
_080B3444:
	.4byte gPendantCount
_080B3448:
	.4byte gUnknown_0816EEB6
_080B344C:
	mov r0, #0
_080B344E:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080B3418

	.byte 0x00
	.byte 0x00

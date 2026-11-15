	THUMB_FUNC_START sub_080B80D8
sub_080B80D8: @ 0x080B80D8
	push {lr}
	bl sub_080B7EEC
	ldr r0, _080B80F4  @ =gUnknown_020068C4
	ldrh r0, [r0]
	cmp r0, #0
	bne _080B80EE
	ldr r1, _080B80F8  @ =gUnknown_020068BD
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B80EE:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B80F4:
	.4byte gUnknown_020068C4
_080B80F8:
	.4byte gUnknown_020068BD
	THUMB_FUNC_END sub_080B80D8


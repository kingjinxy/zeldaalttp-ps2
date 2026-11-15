	THUMB_FUNC_START sub_080AA794
sub_080AA794: @ 0x080AA794
	push {lr}
	ldr r0, _080AA7AC  @ =gMagicMeter
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080AA7B4
	ldr r1, _080AA7B0  @ =gMagicMeterFiller
	mov r0, #128
	strb r0, [r1]
	mov r0, #0
	b _080AA7B6
_080AA7AC:
	.4byte gMagicMeter
_080AA7B0:
	.4byte gMagicMeterFiller
_080AA7B4:
	mov r0, #1
_080AA7B6:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080AA794

	.byte 0x00
	.byte 0x00

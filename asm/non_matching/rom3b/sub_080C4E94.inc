	THUMB_FUNC_START sub_080C4E94
sub_080C4E94: @ 0x080C4E94
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _080C4EBC  @ =gRam
	ldr r3, _080C4EC0  @ =0x000010C2
	add r0, r0, r3
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080C4EB6
	add r0, r2, #0
	bl sub_080C4EC4
_080C4EB6:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C4EBC:
	.4byte gRam
_080C4EC0:
	.4byte 0x000010C2
	THUMB_FUNC_END sub_080C4E94


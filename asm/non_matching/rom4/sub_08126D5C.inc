	THUMB_FUNC_START sub_08126D5C
sub_08126D5C: @ 0x08126D5C
	push {lr}
	ldr r1, _08126D78  @ =gUnknown_03000050
	ldrh r0, [r1, #8]
	add r0, r0, #1
	strh r0, [r1, #8]
	bl sub_08125874
	bl sub_08126DDC
	bl sub_08126DB0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08126D78:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_08126D5C


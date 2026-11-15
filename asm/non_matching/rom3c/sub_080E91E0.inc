	THUMB_FUNC_START sub_080E91E0
sub_080E91E0: @ 0x080E91E0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080E90F0
	ldr r1, _080E91F8  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #2
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E91F8:
	.4byte gUnknown_03003E74
	THUMB_FUNC_END sub_080E91E0


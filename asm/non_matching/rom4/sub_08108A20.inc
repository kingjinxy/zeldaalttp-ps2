	THUMB_FUNC_START sub_08108A20
sub_08108A20: @ 0x08108A20
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _08108A38  @ =gUnknown_02010998
	ldrb r0, [r0]
	cmp r0, #0
	bne _08108A3C
	add r0, r1, #0
	bl sub_08107588
	b _08108A42
	.byte 0x00
	.byte 0x00
_08108A38:
	.4byte gUnknown_02010998
_08108A3C:
	add r0, r1, #0
	bl sub_08108358
_08108A42:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08108A20

	.byte 0x00
	.byte 0x00

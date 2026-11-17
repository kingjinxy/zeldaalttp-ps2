	THUMB_FUNC_START sub_08066CC0
sub_08066CC0: @ 0x08066CC0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066CE0
	ldr r0, _08066CDC  @ =gUnknown_08434CD8
	add r1, r4, #0
	bl sub_0801386C
	b _08066CE8
_08066CDC:
	.4byte gUnknown_08434CD8
_08066CE0:
	ldr r0, _08066CF0  @ =gUnknown_08434CE1
	add r1, r4, #0
	bl sub_0801386C
_08066CE8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066CF0:
	.4byte gUnknown_08434CE1
	THUMB_FUNC_END sub_08066CC0


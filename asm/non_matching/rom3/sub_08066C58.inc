	THUMB_FUNC_START sub_08066C58
sub_08066C58: @ 0x08066C58
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066C78
	ldr r0, _08066C74  @ =gUnknown_08432FAA
	add r1, r4, #0
	bl sub_0801386C
	b _08066C80
_08066C74:
	.4byte gUnknown_08432FAA
_08066C78:
	ldr r0, _08066C88  @ =gUnknown_08432FB1
	add r1, r4, #0
	bl sub_0801386C
_08066C80:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066C88:
	.4byte gUnknown_08432FB1
	THUMB_FUNC_END sub_08066C58


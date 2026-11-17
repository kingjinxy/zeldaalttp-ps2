	THUMB_FUNC_START sub_08066C24
sub_08066C24: @ 0x08066C24
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066C44
	ldr r0, _08066C40  @ =gUnknown_0814C440
	add r1, r4, #0
	bl sub_0801386C
	b _08066C4C
_08066C40:
	.4byte gUnknown_0814C440
_08066C44:
	ldr r0, _08066C54  @ =gUnknown_0814C445
	add r1, r4, #0
	bl sub_0801386C
_08066C4C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066C54:
	.4byte gUnknown_0814C445
	THUMB_FUNC_END sub_08066C24


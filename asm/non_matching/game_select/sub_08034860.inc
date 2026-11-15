	THUMB_FUNC_START sub_08034860
sub_08034860: @ 0x08034860
	push {r4,lr}
	add r4, r0, #0
	ldr r1, _080348A4  @ =gUnknown_0201F000
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r4, #100]
	and r0, r0, r1
	cmp r0, r1
	bne _0803489C
	add r0, r4, #0
	bl 0x080036F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _0803488A
	add r0, r4, #0
	bl sub_0804C9C8
_0803488A:
	ldr r0, [r4, #104]
	add r1, r4, #0
	add r1, r1, #80
	ldrh r1, [r1]
	bl sub_0801478C
	add r0, r4, #0
	bl DeleteThisEntity
_0803489C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080348A4:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08034860


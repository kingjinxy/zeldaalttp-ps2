	THUMB_FUNC_START sub_08066A1C
sub_08066A1C: @ 0x08066A1C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066A3C
	ldr r0, _08066A38  @ =gUnknown_0842F66E
	add r1, r4, #0
	bl sub_0801386C
	b _08066A44
_08066A38:
	.4byte gUnknown_0842F66E
_08066A3C:
	ldr r0, _08066A5C  @ =gUnknown_0842F671
	add r1, r4, #0
	bl sub_0801386C
_08066A44:
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066A64
	ldr r0, _08066A60  @ =gUnknown_0842F674
	add r1, r4, #0
	bl sub_0801386C
	b _08066A6C
	.byte 0x00
	.byte 0x00
_08066A5C:
	.4byte gUnknown_0842F671
_08066A60:
	.4byte gUnknown_0842F674
_08066A64:
	ldr r0, _08066A74  @ =gUnknown_0842F677
	add r1, r4, #0
	bl sub_0801386C
_08066A6C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066A74:
	.4byte gUnknown_0842F677
	THUMB_FUNC_END sub_08066A1C


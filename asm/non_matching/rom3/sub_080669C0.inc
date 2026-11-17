	THUMB_FUNC_START sub_080669C0
sub_080669C0: @ 0x080669C0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _080669E0
	ldr r0, _080669DC  @ =gUnknown_0814C428
	add r1, r4, #0
	bl sub_0801386C
	b _080669E8
_080669DC:
	.4byte gUnknown_0814C428
_080669E0:
	ldr r0, _08066A00  @ =gUnknown_0814C42D
	add r1, r4, #0
	bl sub_0801386C
_080669E8:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066A08
	ldr r0, _08066A04  @ =gUnknown_0814C432
	add r1, r4, #0
	bl sub_0801386C
	b _08066A10
	.byte 0x00
	.byte 0x00
_08066A00:
	.4byte gUnknown_0814C42D
_08066A04:
	.4byte gUnknown_0814C432
_08066A08:
	ldr r0, _08066A18  @ =gUnknown_0814C437
	add r1, r4, #0
	bl sub_0801386C
_08066A10:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066A18:
	.4byte gUnknown_0814C437
	THUMB_FUNC_END sub_080669C0


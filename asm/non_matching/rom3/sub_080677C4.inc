	THUMB_FUNC_START sub_080677C4
sub_080677C4: @ 0x080677C4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl 0x0800099C
	add r1, r0, #0
	mov r0, #3
	and r1, r1, r0
	cmp r1, #1
	beq _08067808
	cmp r1, #1
	bcc _080677E6
	cmp r1, #2
	beq _0806781C
	cmp r1, #3
	beq _08067844
	b _0806785C
_080677E6:
	ldr r0, _080677FC  @ =gUnknown_08444C54
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067800  @ =gUnknown_08444C59
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067804  @ =gUnknown_08444C5E
	b _0806782E
	.byte 0x00
	.byte 0x00
_080677FC:
	.4byte gUnknown_08444C54
_08067800:
	.4byte gUnknown_08444C59
_08067804:
	.4byte gUnknown_08444C5E
_08067808:
	ldr r0, _08067814  @ =gUnknown_08444C54
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067818  @ =gUnknown_08444C59
	b _08067826
_08067814:
	.4byte gUnknown_08444C54
_08067818:
	.4byte gUnknown_08444C59
_0806781C:
	ldr r0, _08067838  @ =gUnknown_08444C54
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _0806783C  @ =gUnknown_08444C5E
_08067826:
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067840  @ =gUnknown_08444C63
_0806782E:
	add r1, r4, #0
	bl sub_0801386C
	b _0806785C
	.byte 0x00
	.byte 0x00
_08067838:
	.4byte gUnknown_08444C54
_0806783C:
	.4byte gUnknown_08444C5E
_08067840:
	.4byte gUnknown_08444C63
_08067844:
	ldr r0, _08067864  @ =gUnknown_08444C59
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067868  @ =gUnknown_08444C5E
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _0806786C  @ =gUnknown_08444C63
	add r1, r4, #0
	bl sub_0801386C
_0806785C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08067864:
	.4byte gUnknown_08444C59
_08067868:
	.4byte gUnknown_08444C5E
_0806786C:
	.4byte gUnknown_08444C63
	THUMB_FUNC_END sub_080677C4


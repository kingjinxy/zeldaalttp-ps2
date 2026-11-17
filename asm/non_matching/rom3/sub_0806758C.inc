	THUMB_FUNC_START sub_0806758C
sub_0806758C: @ 0x0806758C
	push {lr}
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _080675A8
	ldr r0, _080675A4  @ =gUnknown_0814C5F4
	mov r1, #1
	bl sub_0801386C
	b _080675B0
_080675A4:
	.4byte gUnknown_0814C5F4
_080675A8:
	ldr r0, _080675B4  @ =gUnknown_0814C5F9
	mov r1, #1
	bl sub_0801386C
_080675B0:
	pop {r0}
	bx r0
_080675B4:
	.4byte gUnknown_0814C5F9
	THUMB_FUNC_END sub_0806758C


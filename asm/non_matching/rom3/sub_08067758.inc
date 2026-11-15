	THUMB_FUNC_START sub_08067758
sub_08067758: @ 0x08067758
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	bl 0x0800099C
	add r1, r0, #0
	mov r0, #255
	and r1, r1, r0
	cmp r1, #84
	bhi _08067784
	ldr r0, _0806777C  @ =gUnknown_0814C600
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067780  @ =gUnknown_0814C607
	b _08067792
	.byte 0x00
	.byte 0x00
_0806777C:
	.4byte gUnknown_0814C600
_08067780:
	.4byte gUnknown_0814C607
_08067784:
	cmp r1, #169
	bhi _080677A4
	ldr r0, _0806779C  @ =gUnknown_0814C600
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _080677A0  @ =gUnknown_0814C60E
_08067792:
	add r1, r4, #0
	bl sub_0801386C
	b _080677B4
	.byte 0x00
	.byte 0x00
_0806779C:
	.4byte gUnknown_0814C600
_080677A0:
	.4byte gUnknown_0814C60E
_080677A4:
	ldr r0, _080677BC  @ =gUnknown_0814C607
	add r1, r5, #0
	bl sub_0801386C
	ldr r0, _080677C0  @ =gUnknown_0814C60E
	add r1, r5, #0
	bl sub_0801386C
_080677B4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080677BC:
	.4byte gUnknown_0814C607
_080677C0:
	.4byte gUnknown_0814C60E
	THUMB_FUNC_END sub_08067758


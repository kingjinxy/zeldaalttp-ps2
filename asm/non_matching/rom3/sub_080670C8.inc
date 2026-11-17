	THUMB_FUNC_START sub_080670C8
sub_080670C8: @ 0x080670C8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl sub_0800099C
	mov r1, #3
	bl __umodsi3
	cmp r0, #1
	beq _080670FC
	cmp r0, #1
	bcc _080670E6
	cmp r0, #2
	beq _08067118
	b _08067128
_080670E6:
	ldr r0, _080670F4  @ =gUnknown_0843D4A6
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _080670F8  @ =gUnknown_0843D4AB
	b _08067106
	.byte 0x00
	.byte 0x00
_080670F4:
	.4byte gUnknown_0843D4A6
_080670F8:
	.4byte gUnknown_0843D4AB
_080670FC:
	ldr r0, _08067110  @ =gUnknown_0843D4A6
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067114  @ =gUnknown_0843D4B0
_08067106:
	add r1, r4, #0
	bl sub_0801386C
	b _08067128
	.byte 0x00
	.byte 0x00
_08067110:
	.4byte gUnknown_0843D4A6
_08067114:
	.4byte gUnknown_0843D4B0
_08067118:
	ldr r0, _08067130  @ =gUnknown_0843D4AB
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08067134  @ =gUnknown_0843D4B0
	add r1, r4, #0
	bl sub_0801386C
_08067128:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08067130:
	.4byte gUnknown_0843D4AB
_08067134:
	.4byte gUnknown_0843D4B0
	THUMB_FUNC_END sub_080670C8


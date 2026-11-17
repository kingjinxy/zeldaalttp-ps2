	THUMB_FUNC_START sub_08067080
sub_08067080: @ 0x08067080
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	bl sub_0800099C
	add r1, r0, #0
	mov r0, #255
	and r1, r1, r0
	cmp r1, #84
	bhi _080670A0
	ldr r0, _0806709C  @ =gUnknown_0814C4F0
	b _080670A6
	.byte 0x00
	.byte 0x00
_0806709C:
	.4byte gUnknown_0814C4F0
_080670A0:
	cmp r1, #169
	bhi _080670B4
	ldr r0, _080670B0  @ =gUnknown_0814C4F3
_080670A6:
	add r1, r4, #0
	bl sub_0801386C
	b _080670BC
	.byte 0x00
	.byte 0x00
_080670B0:
	.4byte gUnknown_0814C4F3
_080670B4:
	ldr r0, _080670C4  @ =gUnknown_0814C4F6
	add r1, r5, #0
	bl sub_0801386C
_080670BC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080670C4:
	.4byte gUnknown_0814C4F6
	THUMB_FUNC_END sub_08067080


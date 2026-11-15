	THUMB_FUNC_START sub_08066FF0
sub_08066FF0: @ 0x08066FF0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	bl 0x0800099C
	add r1, r0, #0
	mov r0, #255
	and r1, r1, r0
	cmp r1, #84
	bhi _08067010
	ldr r0, _0806700C  @ =gUnknown_0814C4D8
	b _08067016
	.byte 0x00
	.byte 0x00
_0806700C:
	.4byte gUnknown_0814C4D8
_08067010:
	cmp r1, #169
	bhi _08067024
	ldr r0, _08067020  @ =gUnknown_0814C4DB
_08067016:
	add r1, r4, #0
	bl sub_0801386C
	b _0806702C
	.byte 0x00
	.byte 0x00
_08067020:
	.4byte gUnknown_0814C4DB
_08067024:
	ldr r0, _08067034  @ =gUnknown_0814C4DE
	add r1, r5, #0
	bl sub_0801386C
_0806702C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08067034:
	.4byte gUnknown_0814C4DE
	THUMB_FUNC_END sub_08066FF0


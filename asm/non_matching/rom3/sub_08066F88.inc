	THUMB_FUNC_START sub_08066F88
sub_08066F88: @ 0x08066F88
	push {r4,lr}
	bl sub_0800099C
	add r4, r0, #0
	mov r0, #255
	and r4, r4, r0
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066FB0
	ldr r0, _08066FAC  @ =gUnknown_0814C4C8
	mov r1, #0
	bl sub_0801386C
	b _08066FB8
	.byte 0x00
	.byte 0x00
_08066FAC:
	.4byte gUnknown_0814C4C8
_08066FB0:
	ldr r0, _08066FC0  @ =gUnknown_0814C4CB
	mov r1, #0
	bl sub_0801386C
_08066FB8:
	cmp r4, #84
	bhi _08066FC8
	ldr r0, _08066FC4  @ =gUnknown_0814C4CE
	b _08066FCE
_08066FC0:
	.4byte gUnknown_0814C4CB
_08066FC4:
	.4byte gUnknown_0814C4CE
_08066FC8:
	cmp r4, #169
	bhi _08066FDC
	ldr r0, _08066FD8  @ =gUnknown_0814C4D1
_08066FCE:
	mov r1, #0
	bl sub_0801386C
	b _08066FE4
	.byte 0x00
	.byte 0x00
_08066FD8:
	.4byte gUnknown_0814C4D1
_08066FDC:
	ldr r0, _08066FEC  @ =gUnknown_0814C4D4
	mov r1, #0
	bl sub_0801386C
_08066FE4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066FEC:
	.4byte gUnknown_0814C4D4
	THUMB_FUNC_END sub_08066F88


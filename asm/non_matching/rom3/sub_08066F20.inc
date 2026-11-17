	THUMB_FUNC_START sub_08066F20
sub_08066F20: @ 0x08066F20
	push {r4,lr}
	bl sub_0800099C
	add r4, r0, #0
	mov r0, #255
	and r4, r4, r0
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066F48
	ldr r0, _08066F44  @ =gUnknown_0814C4B8
	mov r1, #0
	bl sub_0801386C
	b _08066F50
	.byte 0x00
	.byte 0x00
_08066F44:
	.4byte gUnknown_0814C4B8
_08066F48:
	ldr r0, _08066F58  @ =gUnknown_0814C4BB
	mov r1, #0
	bl sub_0801386C
_08066F50:
	cmp r4, #84
	bhi _08066F60
	ldr r0, _08066F5C  @ =gUnknown_0814C4BE
	b _08066F66
_08066F58:
	.4byte gUnknown_0814C4BB
_08066F5C:
	.4byte gUnknown_0814C4BE
_08066F60:
	cmp r4, #169
	bhi _08066F74
	ldr r0, _08066F70  @ =gUnknown_0814C4C1
_08066F66:
	mov r1, #0
	bl sub_0801386C
	b _08066F7C
	.byte 0x00
	.byte 0x00
_08066F70:
	.4byte gUnknown_0814C4C1
_08066F74:
	ldr r0, _08066F84  @ =gUnknown_0814C4C4
	mov r1, #0
	bl sub_0801386C
_08066F7C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066F84:
	.4byte gUnknown_0814C4C4
	THUMB_FUNC_END sub_08066F20


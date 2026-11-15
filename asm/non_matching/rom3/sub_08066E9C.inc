	THUMB_FUNC_START sub_08066E9C
sub_08066E9C: @ 0x08066E9C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066EBC
	ldr r0, _08066EB8  @ =gUnknown_0814C49C
	add r1, r4, #0
	bl sub_0801386C
	b _08066EC4
_08066EB8:
	.4byte gUnknown_0814C49C
_08066EBC:
	ldr r0, _08066EDC  @ =gUnknown_0814C49F
	add r1, r4, #0
	bl sub_0801386C
_08066EC4:
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066EE4
	ldr r0, _08066EE0  @ =gUnknown_0814C4A2
	add r1, r4, #0
	bl sub_0801386C
	b _08066EEC
	.byte 0x00
	.byte 0x00
_08066EDC:
	.4byte gUnknown_0814C49F
_08066EE0:
	.4byte gUnknown_0814C4A2
_08066EE4:
	ldr r0, _08066F04  @ =gUnknown_0814C4A5
	add r1, r4, #0
	bl sub_0801386C
_08066EEC:
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066F0C
	ldr r0, _08066F08  @ =gUnknown_0814C4A8
	add r1, r4, #0
	bl sub_0801386C
	b _08066F14
	.byte 0x00
	.byte 0x00
_08066F04:
	.4byte gUnknown_0814C4A5
_08066F08:
	.4byte gUnknown_0814C4A8
_08066F0C:
	ldr r0, _08066F1C  @ =gUnknown_0814C4AF
	add r1, r4, #0
	bl sub_0801386C
_08066F14:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066F1C:
	.4byte gUnknown_0814C4AF
	THUMB_FUNC_END sub_08066E9C


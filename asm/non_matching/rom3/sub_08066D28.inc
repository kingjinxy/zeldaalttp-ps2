	THUMB_FUNC_START sub_08066D28
sub_08066D28: @ 0x08066D28
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl 0x0800099C
	mov r1, #3
	bl __umodsi3
	cmp r0, #1
	beq _08066D5C
	cmp r0, #1
	bcc _08066D46
	cmp r0, #2
	beq _08066D78
	b _08066D88
_08066D46:
	ldr r0, _08066D54  @ =gUnknown_084360A5
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08066D58  @ =gUnknown_084360AA
	b _08066D66
	.byte 0x00
	.byte 0x00
_08066D54:
	.4byte gUnknown_084360A5
_08066D58:
	.4byte gUnknown_084360AA
_08066D5C:
	ldr r0, _08066D70  @ =gUnknown_084360A5
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08066D74  @ =gUnknown_084360AF
_08066D66:
	add r1, r4, #0
	bl sub_0801386C
	b _08066D88
	.byte 0x00
	.byte 0x00
_08066D70:
	.4byte gUnknown_084360A5
_08066D74:
	.4byte gUnknown_084360AF
_08066D78:
	ldr r0, _08066DA0  @ =gUnknown_084360AA
	add r1, r4, #0
	bl sub_0801386C
	ldr r0, _08066DA4  @ =gUnknown_084360AF
	add r1, r4, #0
	bl sub_0801386C
_08066D88:
	bl 0x0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066DAC
	ldr r0, _08066DA8  @ =gUnknown_084360B4
	add r1, r4, #0
	bl sub_0801386C
	b _08066DB4
	.byte 0x00
	.byte 0x00
_08066DA0:
	.4byte gUnknown_084360AA
_08066DA4:
	.4byte gUnknown_084360AF
_08066DA8:
	.4byte gUnknown_084360B4
_08066DAC:
	ldr r0, _08066DBC  @ =gUnknown_084360B7
	add r1, r4, #0
	bl sub_0801386C
_08066DB4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066DBC:
	.4byte gUnknown_084360B7
	THUMB_FUNC_END sub_08066D28


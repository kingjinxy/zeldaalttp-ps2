	THUMB_FUNC_START sub_08067138
sub_08067138: @ 0x08067138
	push {lr}
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08067154
	ldr r0, _08067150  @ =gUnknown_0814C4FC
	mov r1, #0
	bl sub_0801386C
	b _0806715C
_08067150:
	.4byte gUnknown_0814C4FC
_08067154:
	ldr r0, _08067188  @ =gUnknown_0814C509
	mov r1, #0
	bl sub_0801386C
_0806715C:
	bl sub_0800099C
	add r1, r0, #0
	mov r0, #255
	and r1, r1, r0
	cmp r1, #84
	bhi _0806719C
	ldr r0, _0806718C  @ =gUnknown_0814C516
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08067190  @ =gUnknown_0814C523
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08067194  @ =gUnknown_0814C53D
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08067198  @ =gUnknown_0814C546
	b _080671BA
	.byte 0x00
	.byte 0x00
_08067188:
	.4byte gUnknown_0814C509
_0806718C:
	.4byte gUnknown_0814C516
_08067190:
	.4byte gUnknown_0814C523
_08067194:
	.4byte gUnknown_0814C53D
_08067198:
	.4byte gUnknown_0814C546
_0806719C:
	cmp r1, #169
	bhi _080671D4
	ldr r0, _080671C4  @ =gUnknown_0814C516
	mov r1, #0
	bl sub_0801386C
	ldr r0, _080671C8  @ =gUnknown_0814C530
	mov r1, #0
	bl sub_0801386C
	ldr r0, _080671CC  @ =gUnknown_0814C53D
	mov r1, #0
	bl sub_0801386C
	ldr r0, _080671D0  @ =gUnknown_0814C54F
_080671BA:
	mov r1, #0
	bl sub_0801386C
	b _080671F4
	.byte 0x00
	.byte 0x00
_080671C4:
	.4byte gUnknown_0814C516
_080671C8:
	.4byte gUnknown_0814C530
_080671CC:
	.4byte gUnknown_0814C53D
_080671D0:
	.4byte gUnknown_0814C54F
_080671D4:
	ldr r0, _080671F8  @ =gUnknown_0814C523
	mov r1, #0
	bl sub_0801386C
	ldr r0, _080671FC  @ =gUnknown_0814C530
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08067200  @ =gUnknown_0814C546
	mov r1, #0
	bl sub_0801386C
	ldr r0, _08067204  @ =gUnknown_0814C54F
	mov r1, #0
	bl sub_0801386C
_080671F4:
	pop {r0}
	bx r0
_080671F8:
	.4byte gUnknown_0814C523
_080671FC:
	.4byte gUnknown_0814C530
_08067200:
	.4byte gUnknown_0814C546
_08067204:
	.4byte gUnknown_0814C54F
	THUMB_FUNC_END sub_08067138


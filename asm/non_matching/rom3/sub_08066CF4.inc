	THUMB_FUNC_START sub_08066CF4
sub_08066CF4: @ 0x08066CF4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066D14
	ldr r0, _08066D10  @ =gUnknown_0814C458
	add r1, r4, #0
	bl sub_0801386C
	b _08066D1C
_08066D10:
	.4byte gUnknown_0814C458
_08066D14:
	ldr r0, _08066D24  @ =gUnknown_0814C45D
	add r1, r4, #0
	bl sub_0801386C
_08066D1C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066D24:
	.4byte gUnknown_0814C45D
	THUMB_FUNC_END sub_08066CF4


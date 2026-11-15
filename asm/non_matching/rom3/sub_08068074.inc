	THUMB_FUNC_START sub_08068074
sub_08068074: @ 0x08068074
	push {r4-r6,lr}
	add r6, r1, #0
	add r5, r2, #0
	lsl r1, r0, #16
	add r0, r5, #0
	cmp r5, #0
	bge _08068084
	add r0, r5, #7
_08068084:
	asr r5, r0, #3
	add r0, r5, #0
	lsr r4, r1, #19
	b _080680B6
_0806808C:
	add r0, r4, #0
	add r1, r6, #0
	bl sub_08135FA8
	lsl r0, r0, #16
	cmp r0, #0
	beq _080680AC
	add r0, r4, #0
	ldr r1, _080680A8  @ =gUnknown_0814C628
	bl sub_08135FA8
	mov r0, #0
	b _080680BE
	.byte 0x00
	.byte 0x00
_080680A8:
	.4byte gUnknown_0814C628
_080680AC:
	add r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
	add r6, r6, #8
	add r0, r5, #0
_080680B6:
	sub r5, r5, #1
	cmp r0, #0
	bgt _0806808C
	mov r0, #1
_080680BE:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08068074


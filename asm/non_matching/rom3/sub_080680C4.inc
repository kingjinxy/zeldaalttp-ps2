	THUMB_FUNC_START sub_080680C4
sub_080680C4: @ 0x080680C4
	push {r4-r6,lr}
	add r6, r1, #0
	add r4, r2, #0
	lsl r1, r0, #16
	add r0, r4, #0
	cmp r4, #0
	bge _080680D4
	add r0, r4, #7
_080680D4:
	asr r4, r0, #3
	add r0, r4, #0
	lsr r5, r1, #19
	b _080680F8
_080680DC:
	add r0, r5, #0
	add r1, r6, #0
	bl sub_08135F50
	lsl r0, r0, #16
	cmp r0, #0
	beq _080680EE
	mov r0, #1
	b _08068100
_080680EE:
	add r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	add r6, r6, #8
	add r0, r4, #0
_080680F8:
	sub r4, r4, #1
	cmp r0, #0
	bgt _080680DC
	mov r0, #0
_08068100:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080680C4

	.byte 0x00
	.byte 0x00

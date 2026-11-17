	THUMB_FUNC_START sub_0802093C
sub_0802093C: @ 0x0802093C
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08020964
	mov r0, #7
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_08003870
	b _0802097A
_08020964:
	lsl r0, r1, #24
	cmp r0, #0
	beq _08020972
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #60
	b _08020978
_08020972:
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #59
_08020978:
	strb r0, [r1]
_0802097A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802093C


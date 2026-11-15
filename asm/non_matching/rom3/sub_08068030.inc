	THUMB_FUNC_START sub_08068030
sub_08068030: @ 0x08068030
	push {r4-r6,lr}
	add r6, r1, #0
	add r4, r2, #0
	lsl r1, r0, #16
	add r0, r4, #0
	cmp r4, #0
	bge _08068040
	add r0, r4, #7
_08068040:
	asr r4, r0, #3
	add r0, r4, #0
	lsr r5, r1, #19
	b _08068064
_08068048:
	add r0, r5, #0
	add r1, r6, #0
	bl sub_08135DC4
	lsl r0, r0, #16
	cmp r0, #0
	beq _0806805A
	mov r0, #0
	b _0806806C
_0806805A:
	add r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	add r6, r6, #8
	add r0, r4, #0
_08068064:
	sub r4, r4, #1
	cmp r0, #0
	bgt _08068048
	mov r0, #1
_0806806C:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08068030

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_08135FA8
sub_08135FA8: @ 0x08135FA8
	push {r4-r6,lr}
	add r5, r1, #0
	lsl r0, r0, #16
	lsr r4, r0, #16
	mov r6, #0
	b _08135FBA
_08135FB4:
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
_08135FBA:
	cmp r6, #2
	bhi _08135FDE
	add r0, r4, #0
	add r1, r5, #0
	bl sub_08135E74
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #0
	bne _08135FB4
	add r0, r4, #0
	add r1, r5, #0
	bl sub_08135F50
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #0
	bne _08135FB4
_08135FDE:
	add r0, r2, #0
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08135FA8

	.ALIGN 2, 0

	THUMB_FUNC_START sub_0802A134
sub_0802A134: @ 0x0802A134
	push {r4-r6,lr}
	add r6, r0, #0
	lsl r1, r1, #16
	lsr r5, r1, #16
	lsl r2, r2, #16
	lsr r4, r2, #16
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	bne _0802A162
	mov r0, #15
	bl sub_08012494
	add r1, r0, #0
	cmp r1, #0
	beq _0802A162
	strh r5, [r1, #50]
	strh r4, [r1, #54]
	mov r0, #2
	strb r0, [r1, #11]
	str r6, [r1, #84]
_0802A162:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802A134


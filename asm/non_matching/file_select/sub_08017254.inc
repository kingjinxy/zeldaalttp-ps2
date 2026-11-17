	THUMB_FUNC_START sub_08017254
sub_08017254: @ 0x08017254
	push {r4,lr}
	add r4, r0, #0
	bl sub_08009664
	mov r1, #160
	lsl r1, r1, #5
	add r0, r4, #0
	bl sub_08003594
	add r0, r4, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08017296
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	mov r0, #12
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #8
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
_08017296:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017254


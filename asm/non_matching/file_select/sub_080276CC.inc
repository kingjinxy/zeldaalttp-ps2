	THUMB_FUNC_START sub_080276CC
sub_080276CC: @ 0x080276CC
	push {r4,lr}
	add r4, r0, #0
	mov r1, #21
	neg r1, r1
	mov r2, #25
	neg r2, r2
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _080276FA
	cmp r0, #32
	beq _080276FA
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _080276FA
	ldrh r1, [r4, #44]
	mov r0, #2
	orr r0, r0, r1
	strh r0, [r4, #44]
_080276FA:
	mov r1, #5
	neg r1, r1
	mov r2, #25
	neg r2, r2
	add r0, r4, #0
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _08027726
	cmp r0, #32
	beq _08027726
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _08027726
	ldrh r1, [r4, #44]
	mov r0, #2
	orr r0, r0, r1
	strh r0, [r4, #44]
_08027726:
	mov r2, #25
	neg r2, r2
	add r0, r4, #0
	mov r1, #4
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _08027750
	cmp r0, #32
	beq _08027750
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _08027750
	ldrh r1, [r4, #44]
	mov r0, #4
	orr r0, r0, r1
	strh r0, [r4, #44]
_08027750:
	mov r2, #25
	neg r2, r2
	add r0, r4, #0
	mov r1, #20
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _0802777A
	cmp r0, #32
	beq _0802777A
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _0802777A
	ldrh r1, [r4, #44]
	mov r0, #4
	orr r0, r0, r1
	strh r0, [r4, #44]
_0802777A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080276CC


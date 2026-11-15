	THUMB_FUNC_START sub_08027780
sub_08027780: @ 0x08027780
	push {r4,lr}
	add r4, r0, #0
	mov r1, #21
	neg r1, r1
	mov r2, #24
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _080277AC
	cmp r0, #32
	beq _080277AC
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _080277AC
	ldrh r1, [r4, #44]
	mov r0, #32
	orr r0, r0, r1
	strh r0, [r4, #44]
_080277AC:
	mov r1, #5
	neg r1, r1
	add r0, r4, #0
	mov r2, #24
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _080277D6
	cmp r0, #32
	beq _080277D6
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _080277D6
	ldrh r1, [r4, #44]
	mov r0, #32
	orr r0, r0, r1
	strh r0, [r4, #44]
_080277D6:
	add r0, r4, #0
	mov r1, #4
	mov r2, #24
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _080277FE
	cmp r0, #32
	beq _080277FE
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _080277FE
	ldrh r1, [r4, #44]
	mov r0, #64
	orr r0, r0, r1
	strh r0, [r4, #44]
_080277FE:
	add r0, r4, #0
	mov r1, #20
	mov r2, #24
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _08027826
	cmp r0, #32
	beq _08027826
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _08027826
	ldrh r1, [r4, #44]
	mov r0, #64
	orr r0, r0, r1
	strh r0, [r4, #44]
_08027826:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08027780


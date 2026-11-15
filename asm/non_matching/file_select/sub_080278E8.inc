	THUMB_FUNC_START sub_080278E8
sub_080278E8: @ 0x080278E8
	push {r4,lr}
	add r4, r0, #0
	mov r1, #25
	neg r1, r1
	mov r2, #21
	neg r2, r2
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _0802791A
	cmp r0, #32
	beq _0802791A
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _0802791A
	ldrh r1, [r4, #44]
	mov r2, #128
	lsl r2, r2, #2
	add r0, r2, #0
	orr r0, r0, r1
	strh r0, [r4, #44]
_0802791A:
	mov r1, #25
	neg r1, r1
	mov r2, #5
	neg r2, r2
	add r0, r4, #0
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _0802794A
	cmp r0, #32
	beq _0802794A
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _0802794A
	ldrh r1, [r4, #44]
	mov r2, #128
	lsl r2, r2, #2
	add r0, r2, #0
	orr r0, r0, r1
	strh r0, [r4, #44]
_0802794A:
	mov r1, #25
	neg r1, r1
	add r0, r4, #0
	mov r2, #4
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _08027978
	cmp r0, #32
	beq _08027978
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _08027978
	ldrh r1, [r4, #44]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r2, #0
	orr r0, r0, r1
	strh r0, [r4, #44]
_08027978:
	mov r1, #25
	neg r1, r1
	add r0, r4, #0
	mov r2, #20
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _080279A6
	cmp r0, #32
	beq _080279A6
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _080279A6
	ldrh r1, [r4, #44]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r2, #0
	orr r0, r0, r1
	strh r0, [r4, #44]
_080279A6:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080278E8


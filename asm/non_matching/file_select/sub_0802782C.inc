	THUMB_FUNC_START sub_0802782C
sub_0802782C: @ 0x0802782C
	push {r4,lr}
	add r4, r0, #0
	mov r2, #21
	neg r2, r2
	mov r1, #24
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _0802785C
	cmp r0, #32
	beq _0802785C
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _0802785C
	ldrh r1, [r4, #44]
	mov r2, #128
	lsl r2, r2, #6
	add r0, r2, #0
	orr r0, r0, r1
	strh r0, [r4, #44]
_0802785C:
	mov r2, #5
	neg r2, r2
	add r0, r4, #0
	mov r1, #24
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _0802788A
	cmp r0, #32
	beq _0802788A
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _0802788A
	ldrh r1, [r4, #44]
	mov r2, #128
	lsl r2, r2, #6
	add r0, r2, #0
	orr r0, r0, r1
	strh r0, [r4, #44]
_0802788A:
	add r0, r4, #0
	mov r1, #24
	mov r2, #4
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _080278B6
	cmp r0, #32
	beq _080278B6
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _080278B6
	ldrh r1, [r4, #44]
	mov r2, #128
	lsl r2, r2, #7
	add r0, r2, #0
	orr r0, r0, r1
	strh r0, [r4, #44]
_080278B6:
	add r0, r4, #0
	mov r1, #24
	mov r2, #20
	bl 0x0800934C
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #66
	beq _080278E2
	cmp r0, #32
	beq _080278E2
	sub r0, r0, #19
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #11
	bls _080278E2
	ldrh r1, [r4, #44]
	mov r2, #128
	lsl r2, r2, #7
	add r0, r2, #0
	orr r0, r0, r1
	strh r0, [r4, #44]
_080278E2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802782C


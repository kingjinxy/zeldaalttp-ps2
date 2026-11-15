	THUMB_FUNC_START sub_080407E0
sub_080407E0: @ 0x080407E0
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #7
	mov r2, #16
	neg r2, r2
	add r1, r2, #0
	strb r1, [r0]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_080407F8:
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #2
	bls _08040802
	b _08040888
_08040802:
	add r0, r7, #6
	mov r2, #16
	neg r2, r2
	add r1, r2, #0
	strb r1, [r0]
	add r0, r7, #5
	mov r1, #0
	strb r1, [r0]
_08040812:
	add r0, r7, #5
	ldrb r1, [r0]
	cmp r1, #2
	bls _0804081C
	b _0804086A
_0804081C:
	ldr r0, [r7]
	add r1, r7, #6
	mov r2, #0
	ldrsb r2, [r1, r2]
	add r1, r2, #0
	ldrh r0, [r0, #50]
	add r1, r1, r0
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r2, r0, #16
	ldr r0, [r7]
	add r1, r7, #7
	mov r3, #0
	ldrsb r3, [r1, r3]
	add r1, r3, #0
	ldrh r0, [r0, #54]
	add r1, r1, r0
	add r3, r1, #0
	lsl r0, r3, #16
	lsr r3, r0, #16
	ldr r0, [r7]
	mov r1, #0
	bl 0x08001B70
	add r0, r7, #6
	add r1, r7, #6
	ldrb r2, [r1]
	add r1, r2, #0
	add r1, r1, #16
	add r2, r1, #0
	strb r2, [r0]
	add r1, r7, #5
	add r0, r7, #5
	add r1, r7, #5
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08040812
_0804086A:
	add r0, r7, #7
	add r1, r7, #7
	ldrb r2, [r1]
	add r1, r2, #0
	add r1, r1, #16
	add r2, r1, #0
	strb r2, [r0]
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080407F8
_08040888:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080407E0


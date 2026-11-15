	THUMB_FUNC_START sub_080203B4
sub_080203B4: @ 0x080203B4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r7, r0, #0
	bl sub_080123E8
	add r5, r0, #0
	cmp r5, #0
	beq _08020430
	bl sub_08012410
	add r6, r0, #0
	cmp r6, #0
	beq _08020430
	add r0, r7, #0
	add r1, r5, #0
	bl sub_080204E8
	ldrh r0, [r5, #50]
	sub r0, r0, #4
	strh r0, [r5, #50]
	str r6, [r5, #84]
	mov r0, #62
	add r0, r0, r7
	mov r8, r0
	ldrb r0, [r0]
	sub r0, r0, #2
	mov r4, #31
	and r0, r0, r4
	add r1, r5, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r7, #0
	add r1, r6, #0
	bl sub_080204E8
	ldrh r0, [r6, #50]
	add r0, r0, #4
	strh r0, [r6, #50]
	str r5, [r6, #84]
	mov r1, r8
	ldrb r0, [r1]
	add r0, r0, #2
	and r0, r0, r4
	add r1, r6, #0
	add r1, r1, #43
	strb r0, [r1]
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r5, r0, #0
	cmp r5, #0
	beq _0802042A
	add r0, r7, #0
	add r1, r5, #0
	bl sub_0803D3D0
_0802042A:
	add r0, r7, #0
	bl DeleteThisEntity
_08020430:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080203B4

	.byte 0x00
	.byte 0x00
